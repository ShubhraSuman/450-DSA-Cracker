#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr){
     vector<int> r;
     vector<int> c;
     int n = arr.size(), m = arr[0].size();
     for(unsigned int i=0;i<arr.size();i++)
     {
         for(int j=0;j<arr[0].size();j++)
         {
             if(arr[i][j]==0)
             {
                 r.push_back(i);
                 c.push_back(j);
             }
         }
     }
      for(auto x : r){
        for(unsigned int i=0; i<n; i++){
            arr[x][i] = 0;
        }
    }
    for(auto x : c){
        for(unsigned int i=0; i<n; i++){
            arr[i][x] = 0;
        }
    }
    return arr;

    

}