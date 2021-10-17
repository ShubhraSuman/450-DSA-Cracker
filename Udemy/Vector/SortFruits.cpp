#include<bits/stdc++.h>
using namespace std;
bool cmpPrice(pair<string,int> v1,pair<string,int> v2)
{
    return v1.second<v2.second;
}
vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
     if(S=="price")
     {
         sort(v.begin(),v.end(),cmpPrice);
     }
     else if(S=="name")
     {
          sort(v.begin(),v.end());
     }
    return v;
}
int main()
{
    vector<pair<string,int>> v = {{"Mango",100},{"Guava",70},{"Grapes",40},{"Apple",60},{"Banana",30}};
    string S;
    cout<<"Enter price or name";
    cin>>S;
    v = sortFruits(v,S);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}
