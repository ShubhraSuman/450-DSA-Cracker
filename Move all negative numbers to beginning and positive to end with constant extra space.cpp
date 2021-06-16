/******************************************************************************
Move all negative numbers to beginning and positive to end with constant extra space
*******************************************************************************/

#include <iostream>

using namespace std;
void rearrange (int arr[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        if(arr[low]<0)
        low++;
        else if(arr[high]>0)
        high--;
        else 
        {
            swap(arr[low++],arr[high--]);
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int arr[] = {2,4,-10,13,-7,-60,52,8,-19 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}
