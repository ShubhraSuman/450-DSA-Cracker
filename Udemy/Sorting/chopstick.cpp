#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    sort(begin(length),end(length));
    int maxPair=0;
    for(int i=0;i<length.size()-1;i++)
    {
        if((length[i+1]-length[i])<=D)
        {
            maxPair++;
            i++;
        }
    }
    return maxPair;
}