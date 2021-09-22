#include<string>

std::string vowel(std::string input){
    std::string res = "";
    for(unsigned int i=0; i<input.length();i++)
    {
        if(input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u')
        res += input[i];
    }
    return res;
} 