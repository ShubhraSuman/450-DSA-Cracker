int firstOccurence(vector<int> arr,int n,int element,int i)
{
    if(i>n)
    return -1;
    if(arr[i]==element)
    {
        return i;
    }
    return firstOccurence(arr,n,element,i+1);
}