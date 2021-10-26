//Number spell
#include <iostream>
using namespace std;
string numsList[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
void numSpell(string &s, int n)
{
    if(n==0)
        return ;
    int x = n%10;
    numSpell(s,n/10);
    s+= numsList[x];
    s+= " ";
}
int main()
{
    int n = 50009863;
    string s = "";
    numSpell(s,n);
    cout<<s<<endl;
    return 0;
}
