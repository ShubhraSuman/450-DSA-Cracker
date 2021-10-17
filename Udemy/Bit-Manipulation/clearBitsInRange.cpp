#include <iostream>
using namespace std;
int clearBitsInRange(int num,int i,int j)
{
    /*
    n(15) = 0000 1111
    i = 1
    j = 3
    Ans : n = 0000 0001
    mask : 1111 0001
    */
    /*
      ith = 1111 1111 << 4
      ----------------------
           1111 0000
      jth = (1<<i) -1 
    */
    int ith = (-1<< (j+1));
    int jth = (1<<i)-1;
    int mask = ith | jth;
    return (num&mask);
}
int main()
{
    int num;
    cin>>num;
    int i;
    cin>>i;
    int j;
    cin>>j;
    cout<<clearBitsInRange(num,i,j);
    return 0;
}
