vector<vector<int>> solution(int n) {
    
    vector<vector<int>>ans(n,vector<int>(n,0));
    int top=0,left=0,bottom=n-1,right=n-1,k=0;
    
    while(top<=bottom && left<=right)
    {
        // top row
        for(int i=left;i<=right;i++)
        ans[top][i]=++k;
        top++;
        
        //right column
        for(int i=top;i<=bottom;i++)
        ans[i][right]=++k;
        right--;
        
        //bottom row
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            ans[bottom][i]=++k;
            bottom--;
        }
        
        //left column
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            ans[i][left]=++k;
            left++;
        }        
    }
    
    return ans;
}
