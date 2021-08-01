#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void func_call_subset(int arr[],int n,vector<int> output,int i)
{
    if(i>=n)
    {
       for(auto p: output)
       {
           cout<<p<<" ";
       }
       cout<<endl;
       return ;
    }
    func_call_subset(arr,n,output,i+1);
    output.push_back(arr[i]);
    func_call_subset(arr,n,output,i+1);
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    cout<<"Print the power set of array"<<endl;
    vector<int> res;
    int p=0;
    func_call_subset(arr,n,res,p);
 
    return 0;
}
