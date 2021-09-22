/*Binary to Number
* 111 ->         1*2^2 + 1*2^1 + 1*2^0 = 4+2+1 = 7
*/
#include <string>
#include <math.h>

int binaryToDecimal(std::string s)
{
    
    int res = 0;
    int index = 0;
    for(int i= s.length()-1; i>=0; i--)
    {
        res = res + ((s[i] - '0') * pow(2,index));
        index++;
    }
    return res;
}
 
 