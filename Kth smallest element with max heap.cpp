class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
       //Implementing using max heap
        priority_queue <int> pq;
        int n=(r-l+1);
        for(int i=l;i<k;i++)
        pq.push(arr[i]);
        int j=k;
        while(j<n)
        {
            if(arr[j]<pq.top())
            {
                pq.pop();
                pq.push(arr[j]);
            }
            j++;
        }
        return pq.top();
        
    }
};