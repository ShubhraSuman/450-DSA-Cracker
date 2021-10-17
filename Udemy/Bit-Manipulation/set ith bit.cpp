#include <iostream>
using namespace std;
int setIthBit(int num,int ith)
{
    int mask = 1 << ith;
    return (num|mask);
}
int main()
{
    int num;
    cin>>num;
    int ith;
    cin>>ith;
    cout<<setIthBit(num,ith);
    return 0;
}
