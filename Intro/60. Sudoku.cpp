bool solution(vector<vector<int>> grid) 
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            for(int k = 0; k < 9; k++)
            {
                if(k != j && grid[i][k] == grid[i][j])
                return false;
                
                if(k != i && grid[k][j] == grid[i][j])
                return false;
            }
        }
    }
    
    for(int i = 0; i < 9; i += 3)
    {
        for(int j = 0; j < 9; j += 3)
        {
            set<int>s;
            
            for(int k = 0; k < 3; k++)
            for(int l = 0; l < 3; l++)
            s.insert(grid[i + k][j + l]);
            
            if(s.size() < 9)
            return false;
        }
    }
    
    return true;
}
