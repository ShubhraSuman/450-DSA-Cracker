#include <iostream>
using namespace std;
int getIthBit(int num,int ith)
{
    /*getIthBit
    5 - 0000 0101
    get 2nd bit
    -------------- (1st shift)
        0000 0010
    -------------- (2nd shift)
        0000 0001
        0000 0001
    -------------
    |  0000 0001
    */
    while(ith)
    {
        num = num >> 1;
        ith--;
    }
    return (num|1);
}
int main()
{
    int num;
    cin>>num;
    int ith;
    cin>>ith;
    cout<<getIthBit(num,ith);
    return 0;
}
