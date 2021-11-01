#include <iostream>
using namespace std;
void reverseNum(int n,int rev)
{
    //12345
    //54321
    if(n==0)
    {
        cout<<rev;
        return ;
    }
    int lasDigit = n%10; //5,4,3,2,1
    rev = 10*rev + lasDigit; //rev = 5 , rev = 10*5 + 4 = 54 , 10*54 + 3 =543,543*10+2=5432, 54321
    reverseNum(n/10,rev); //1234, 5,54,543,5432
}
int main()
{
    int n;
    cin>>n;
    reverseNum(n,0);
    return 0;
}
