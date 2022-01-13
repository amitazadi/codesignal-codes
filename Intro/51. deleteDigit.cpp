int solution(int n) 
{
    string s=to_string(n);
    int ans=INT_MIN;
    
    for(int i=0;i<s.length();i++)
    {
        string temp=s;
        temp.erase(temp.begin()+i);
        
        int num=stoi(temp);
        ans=max(ans,num);
    }

    return ans;
}
