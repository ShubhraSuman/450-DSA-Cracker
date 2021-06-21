
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
       map<int,int> mp;
       for(int i=0;i<n;i++)
       mp[a[i]]++;
       for(int j=0;j<m;j++)
       mp[b[j]]++;
       return mp.size();
    }
};