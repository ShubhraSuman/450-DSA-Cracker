#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here
    int st=0,end=arr.size()-1;
    int st_num,end_num;
    int diff;
    int sum=0;
    int min_diff=INT_MAX;
    while(st<end)
    {
       sum=arr[st]+arr[end];
       diff=x-sum;
       if(abs(min_diff-x)>=abs(sum-x))
       {
           min_diff=sum;
           st_num=arr[st];
           end_num=arr[end];
           
       }
       if(diff>0)
       st++;
       else
       end--;
    }
    return {st_num,end_num};
}