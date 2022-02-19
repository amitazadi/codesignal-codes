// Once upon a time, in a kingdom far, far away, there lived a King Byteasar IV. His kingdom in the middle of 
// a financial crisis, Byteasar was struggling to keep the economy out of a recession. Unfortunately there was 
// not much he could do, and after much agonizing he came to the only solution: one of his cities had to be demolished, 
// since keeping communication active between all the cities is way too expensive.

// It is not yet known if Byteasar chose a city to destroy after careful planning or picked one at random. As a 
// person with a PhD in History and Nobel prize in Computer Science, you can solve this mystery! Archaeologists have 
// recently found a manuscript with information about the roads between the cities, that is now stored in the roadRegister 
// matrix. You want to try and remove each city one by one and compare the road registers obtained this way. Thus you'll be 
// able to compare the obtained roads and determine whether the one picked by Byteasar was the best by some criteria.

// Given the roadRegister, return an array of all the road registers obtained after removing each of the cities one by one.

// My code
vector<vector<vector<bool>>> solution(vector<vector<bool>> roadRegister) 
{   
    vector<vector<vector<bool>>>ans;
    
    for(int i=0;i<roadRegister.size();i++)
    {
        vector<vector<bool>>temp=roadRegister;
        temp.erase(temp.begin()+i);
        
        for(int j=0;j<temp.size();j++)
        temp[j].erase(temp[j].begin()+i);
        
        ans.push_back(temp);
    }
    
    return ans;
}
