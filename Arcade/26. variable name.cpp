bool solution(string name) {
    if(name[0]>='0' && name[0]<='9')
    return false;
       
    for(int i=0;i<name.length();i++) 
    if(!(isdigit(name[i]) || isalpha(name[i]) || name[i]=='_' ))
    return false;
        
    return true;   
}
