//Sorted array check
#include <iostream>
#include<vector>
using namespace std;
bool sortedArrayCheck(vector<int>arr,int n)
{
    if(n==1 || n==0)
    return true;
    if(arr[n-1]>arr[n-2]&&sortedArrayCheck(arr,n-1))
    {
       return true;
    }
    return false;
}
int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    sortedArrayCheck(arr,n)?cout<<"Sorted":cout<<"Not sorted";
    return 0;
}
