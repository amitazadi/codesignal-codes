int solution(vector<vector<int>> mat) 
{
    for(int i=1;i<mat.size();i++)
    {
        for(int j=0;j<mat[0].size();j++)
        {
            if(mat[i-1][j]==0)
            mat[i][j]=0; 
        }
    }
    
    int ans=0;
    
    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat[0].size();j++)
        ans+=mat[i][j];
    }
    
    return ans;    
}
