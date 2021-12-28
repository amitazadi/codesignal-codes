vector<vector<int>> solution(vector<vector<int>> image) 
{
    vector<vector<int>>ans;
    
    for(int i=0;i<image.size()-2;i++)
    {      
        vector<int>res;
        for(int j=0;j<image[0].size()-2;j++)
        {
            int tempans=0;
            
            for(int k=0;k<3;k++)
            for(int l=0;l<3;l++)
            tempans+=image[i+k][j+l];
            
            tempans/=9;
            res.push_back((tempans));
        }   
        
        ans.push_back((res));
    }

    return ans;
}
