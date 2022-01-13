bool solution(string time) 
{
    if(stoi(time.substr(0,2))<0 || stoi(time.substr(0,2))>=24)
    return false;
  
    if(stoi(time.substr(3,2))<0 || stoi(time.substr(3,2))>=60)
    return false;
    
    return true;
}
