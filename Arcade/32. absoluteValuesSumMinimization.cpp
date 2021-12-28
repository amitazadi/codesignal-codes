int solution(vector<int> a) 
{
    int ans=INT_MAX;
    int res;
    
    for(int i=0;i<a.size();i++)
    {
        int temp=0;
        
        for(int j=0;j<a.size();j++)
        temp+=abs(a[i]-a[j]);
                
        if(temp<ans)
        {
            res=a[i];
            ans=temp;
        }
    }
    
    return res;    
}

// 2nd code
int solution(vector<int> a) 
{
    return a[(a.size() - 1)/2];   
}