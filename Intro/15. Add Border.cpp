// code 1
vector<string> solution(vector<string> pic) {
 
    int size=pic.size();
    vector<string>ans(size+2);
    int index=0;
    int tempsize=pic[0].size();
    
    for(int i=0;i<size+2;i++)
    {
        
        string temp;
        string tempres;
        bool flag=false;
        
        if(i>0 && i<size+1)
        {
            temp=pic[i-1];
            flag=true;
        }
        
        for(int j=0;j<tempsize+2;j++)
        {
            if(i==0 || j==0)
            tempres+='*';
            else if(j>0 && j<tempsize+1 && flag)
            tempres+=temp[j-1];
            else
            tempres+='*';
        }
          
        ans[index++]=tempres;
        
    }
    
    return ans;
    
    
}

// code 2
vector<string> solution(vector<string> pic) {
 
    vector<string>ans;
    
    string temp(pic[0].size()+2,'*');
    ans.push_back(temp);
    
    for(int i=0;i<pic.size();i++)
    ans.push_back('*'+pic[i]+'*');
    
    ans.push_back(temp);
    
    return ans;    
}

