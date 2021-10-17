#include <iostream>
using namespace std;
int clearAllLastIthBit(int num,int ith)
{
    /*
    n(15) = 0000 1111
    ith = 2
    ans = 0000 1100 (12)
    mask :
    -1 : 1111 1111
    ---------------
    ith = 2 
    1111 1100
    0000 1111
    ---------------
    & 0000 1100 (12)
    */
    int mask = (-1) << ith;
    return (num & mask);
}
int main()
{
    int num;
    cin>>num;
    int ith;
    cin>>ith;
    cout<<clearAllLastIthBit(num,ith);
    return 0;
}
