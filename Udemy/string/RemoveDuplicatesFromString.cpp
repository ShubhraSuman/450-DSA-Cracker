#include<string>
#include<algorithm>
std::string removeDuplicate(std::string s){
    std::string res = "";
    res += s[0];
    for(unsigned int i=1;i<s.length();i++)
    {
        if(res.find(s[i])==std::string::npos)
        res += s[i];
    }
    sort(res.begin(),res.end());
    return res;
}