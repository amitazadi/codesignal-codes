string solution(string code) {
    string ans="";
    
    for(int i=0;i<code.length()/8;i++)
    {
        string temp=code.substr(8*i,8);
        int num=stoi(temp,0,2);
        ans+=char(num);
    }
    
    return ans;
}
