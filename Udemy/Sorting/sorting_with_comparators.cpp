#include<bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
    int n=a.size();
    if(flag)
    sort(a.begin(),a.end());
    else
    sort(a.begin(),a.end(),greater<int>());
return a;    
}