// first code
string solution(string s) 
{
    if(!isdigit(s[0]))
    return "";
    
    string ans="";
    for(auto i:s)
    {
        if(isdigit(i))
        ans+=i;
        else
        break;
    }
    
    return ans;
}


// 2nd code
string solution(string s) {
   return s.substr(0,s.find_first_not_of("0123456789"));
  
}
