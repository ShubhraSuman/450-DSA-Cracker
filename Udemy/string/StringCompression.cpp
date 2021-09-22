#include<bits/stdc++.h>
#include<string>
int compress(std::vector<char>& chars) {
	std::string res = "";
	int count = 1;
    for(int i=0;i<chars.size()-1;i++)
	{
	    std::cout<<chars[i];
		if(chars[i] == chars[i+1] )
		{
			count++;
		}
		else if(chars[i]!=chars[i+1])
		{
		    res += chars[i];
			if(count>1)
			res += std::to_string(count);
			count = 1;
		}
	}
	res+=chars[chars.size()-1];
	if(count>1)
	{
        res += std::to_string(count);
	}
    std::cout<<res<<std::endl;
	chars.clear();
	std::copy(res.begin(), res.end(), std::back_inserter(chars));  
	return chars.size();
}