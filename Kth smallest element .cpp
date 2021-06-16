// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
       //Implementing using min heap
        priority_queue <int, vector<int>, greater<int> > pq;
        int n=(r-l+1);
        for(int i=l;i<n;i++)
        pq.push(arr[i]);
        while(k>1)
        {
          pq.pop();
          k--;
        }
        return pq.top();
        
    }
};