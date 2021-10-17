#include <iostream>
using namespace std;
int clearIthBit(int num,int ith)
{
    int mask = ~(1 << ith);
    /*clearIthBit
    5 - 0000 0101
    ith = 2 
    1 << 2 
    0000 0100
    ~ 
    ----------
    1111 1011
  & 0000 0101
    ----------
    0000 0001
    */
    return (num&mask);
}
int main()
{
    int num;
    cin>>num;
    int ith;
    cin>>ith;
    cout<<clearIthBit(num,ith);
    return 0;
}
