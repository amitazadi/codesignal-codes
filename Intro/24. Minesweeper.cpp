vector<vector<int>> solution(vector<vector<bool>> matrix) 
{
    vector<vector<int>>ans;
    
    int n=matrix.size();
    int m=matrix[0].size();
    
    int fx[] = {-1,-1,-1,0,1,1,1,0};
    int fy[] = {-1,0,1,1,1,0,-1,-1};
    
    for(int i=0;i<n;i++)
    {
        vector<int>res;
        for(int j=0;j<m;j++)
        {
            int sum=0;
            
            for(int k=0;k<8;k++)
            {
                int xx=i+fx[k];
                int yy=j+fy[k];
                
                if(xx>=0 && xx<n && yy>=0 && yy<m && matrix[xx][yy]==true)  sum++;
            }
            
            res.push_back(sum);
        }
        
        ans.push_back(res);        
    }
    
    return ans;
}
