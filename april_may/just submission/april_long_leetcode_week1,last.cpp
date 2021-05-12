class Solution {
public:
    bool halvesAreAlike(string s) {
        int count=0,k,first=0,last=0;
        for (int i = 0; i < s.size(); i++) {
        int c = s[i];
        if (isupper(c)) 
            s[i] = tolower(c);        
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
          
            if(i<s.size()/2)
            {
                first++;
            }
            else{
                last++;
            }
           
        }
        
    }
      
    if(first==last)
    {
        return true;
    }
        return false;
        
    }
};