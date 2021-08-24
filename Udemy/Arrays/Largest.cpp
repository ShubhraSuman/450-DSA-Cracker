#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int largestElement;
    for(int i=0;i<arr.size();i++)
    {
        largestElement=max(largestElement,arr[i]);
    }
     return largestElement;
}