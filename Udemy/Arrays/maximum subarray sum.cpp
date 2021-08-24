#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
 int cs=0;
 int ms=0;
 for(int i=0;i<A.size();i++)
 {
     cout<<A[i]<<" ";
 }
 cout<<endl;
 for(int i=0;i<A.size();i++)
 {
     cs+=A[i];
     if(cs<0)
     cs=0;
     ms=max(ms,cs);
 }
 if(ms==0)
 return -1;
 return ms;
}