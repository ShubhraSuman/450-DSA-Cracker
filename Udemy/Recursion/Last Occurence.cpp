int LastOccurence(vector<int> arr,int n,int element)
{
   if(n<0)
   return -1;
   if(arr[n-1]==element)
   {
       return n-1;
   }
   return LastOccurence(arr,n-1,element);
}