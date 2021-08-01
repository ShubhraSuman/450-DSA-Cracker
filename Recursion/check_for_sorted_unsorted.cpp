#include <iostream>

using namespace std;
bool check_call(int arr[],int n)
{
    if(n==0)
    return true;
    int x=arr[n-1];
    if(x>arr[n-2])
    return check_call(arr,n-1);
    else
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Check whether elements are sorted or unsorted ?? "<<endl;
   
    bool res=check_call(arr,n) ? true : false;
    if(res)
    cout<< "Its sorted "<<endl;
    else
    cout<< "Its unsorted "<<endl;
    return 0;
}
