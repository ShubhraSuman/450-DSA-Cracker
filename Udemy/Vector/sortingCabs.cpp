#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> v1,pair<int,int> v2)
{
    float d1 = sqrt((v1.first)*(v1.first)+(v1.second)*(v1.second));
    float d2 = sqrt((v2.first)*(v2.first)+(v2.second)*(v2.second));
    return d1<d2;
}
vector<pair<int,int>> sortCabs(vector<pair<int,int>> &v){
    sort(v.begin(),v.end(),comp);
    return v;
}
int main()
{
    vector<pair<int,int>> v ={{2,3},{1,2},{3,4},{2,4},{1,4}};
    sortCabs(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}
