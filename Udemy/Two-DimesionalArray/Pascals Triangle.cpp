#include <iostream>
#include <vector>
using namespace std;
void createPascalTriangle(int n, std::vector<std::vector<int>> &mat)
{
    for(int i=0; i<n; i++){
        for(int j = 0; j<=i; j++){
            //j ==0 denotes the 1st column. It will be filled with 1 ALWAYS!
            // i==j denotes the diagonal of the matrix. It will be 1 ALWAYS!
            if(j==0 || j==i)
           {
               mat[i][j] = 1;
           } 
            else
            {
                mat[i][j] = mat[i-1][j] + mat[i-1][j-1];
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n for which pascal triangle will be created:";
    cin>>n;
    std::vector<std::vector<int>> mat( n , std::vector<int> (n, 0));
    createPascalTriangle(n,mat);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0; j<=i; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
