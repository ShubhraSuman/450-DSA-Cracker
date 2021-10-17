#include <iostream>
using namespace std;
int getIthBit(int num,int ith)
{
    /*getIthBit
    5 - 0000 0101
    ith = 2 
    1 << 2
    0000 0001
    ---------
    0000 0100
    0000 0101
    ---------
   &0000 0100 > 0 = 1
    */
    int mask = 1 << ith;
    return (num&mask>0?1:0);
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
