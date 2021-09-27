#include <iostream>
#include <vector>
#include <utility> // for pair 
using namespace std;
pair<int,int> searchInSorted(std::vector<vector<int>> mat, int n, int m,int elementToBeSearched)
{
    //Start search from rightmost column's 1st element
    int i = 0;
    int j = m-1;
    while(i<n && j>=0)
    {
        if(elementToBeSearched == mat[i][j])
        {
            return {i,j};
        }
        else if(elementToBeSearched > mat[i][j])
        {
            i++;
        }
        else 
        {
            j--;
        }
    }
    return {-1,-1};
}
int main()
{
    std::vector<vector<int>> mat = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };
    int n = mat.size();
    int m = mat[0].size();
    int elementToBeSearched = 32;
    pair<int,int> cordinates = searchInSorted(mat,n,m,elementToBeSearched);
    if(cordinates.first != -1 && cordinates.second!= -1)
    cout<<"Element "<<elementToBeSearched<<" found with x-cordinates "<<cordinates.first<<" and y-coordinates at "<<cordinates.second<<endl;
    else
    cout<<"Elements does not exist in the matrix. Try to search another number!!"<<endl;
    return 0;
}
