#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b)
{
    if(a.first==b.first)
    {
        return a.second<b.second;
    }
    else return a.first<b.first;
}
vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    // your code goes here
    sort(v.begin(),v.end(),compare);
    return v;
}