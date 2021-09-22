#include <bits/stdc++.h>
/* Two strings are permutations of each other if length of strings are same 
* and both string contains same characters, only order differs. 
*/
bool arePermutation(std::string strFirst,std::string strSecond)
{
    if(strFirst.length()!=strSecond.length())
    return false;
    for(unsigned int i=0;i<strFirst.length();i++)
    {
        if(strSecond.find(strFirst[i])==std::string::npos)
        return false;
    }
    return true;
}