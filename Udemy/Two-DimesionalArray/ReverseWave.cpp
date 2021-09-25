#include<bits/stdc++.h>
using namespace std;
 
 void WavePrint(int m, int n, vector<vector<int>> arr)
{
    bool oppositeDir = true;
    while(n--)
    {
        if(oppositeDir)
        {
            for(int i=0;i<m;i++)
            {
                cout<< arr[i][n]<<" ";
            }
            oppositeDir = false;
        }
        else 
        {
            for(int i=m-1;i>=0;i--)
            {
                cout<<arr[i][n]<<" ";
            }
            oppositeDir = true;
        }
        cout<<endl;
    }
}
int main()
{
    vector<vector<int>> arr {
        {1,2,3},
        {5,6,7},
        {9,10,11},
        {13,14,15}
    };
    WavePrint(4,3,arr);
    return 0;
}
