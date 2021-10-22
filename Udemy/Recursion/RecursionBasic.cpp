#include <iostream>
#include<vector>
using namespace std;
void numberLadder(int n,bool incOrDec)
{
    if(incOrDec)
    {
        //dec
        if(n==0)
        return ;
         cout<<n<<" ";
        numberLadder(n-1,incOrDec);
    }
    else
    {
        //inc
        if(n==0)
        return ;
        numberLadder(n-1,incOrDec);
        cout<<n<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    numberLadder(n,true);  
    cout<<endl;
    numberLadder(n,false);  
    return 0;
}
