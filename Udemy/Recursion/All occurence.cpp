#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
void  findOccurences(vector<int> v,int n,int i,int k)
{
    if(i>n)
    return ;
    if(v[i]==k)
    {
        ans.push_back(i);
    }
    return findOccurences(v,n,i+1,k);
}
vector<int> findAllOccurences(int k, vector<int> v){
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<k<<endl;
    int n = v.size();
    ans.clear();
    findOccurences(v,n,0,k);
    return ans;
}