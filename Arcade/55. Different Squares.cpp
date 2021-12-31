// first code
int solution(vector<vector<int>> mat) {
    
    set<vector<vector<int>>>st;
    
    for(int i=0;i<mat.size()-1;i++)
    {
        for(int j=0;j<mat[0].size()-1;j++)
        {
            vector<vector<int>>temp;
            
            for(int k=0;k<2;k++)
            {
                vector<int>temp1;
                for(int l=0;l<2;l++)
                temp1.push_back(mat[i+k][j+l]);
                temp.push_back(temp1);
            }
            
            st.insert(temp);            
        }
    }
    
    return st.size();  
}

// second code
int solution(vector<vector<int>> mat) {
    
    set<vector<vector<int>>>st;
    
    for(int i=0;i<mat.size()-1;i++)
    for(int j=0;j<mat[0].size()-1;j++)
    st.insert({{mat[i][j],mat[i][j+1]},{mat[i+1][j],mat[i+1][j+1]}});
       
    return st.size();  
}
