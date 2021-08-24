#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int val) {
    // your code goes here
    int st=0,end=A.size()-1;
    int res;
    while(st<=end)
    {
        int mid=(st+end)/2;
        if(A[mid]==val)
        return A[mid];
        else if(A[mid]<val)
        st=mid+1;
        else if(A[mid]>val)
        end=mid-1;
    }
    if(st==0&&A[st]>val)
    return -1;
    return A[end];
}