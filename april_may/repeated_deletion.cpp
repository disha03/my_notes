//https://binarysearch.com/room/String-Theory-jKzzbt1dTR
string solve(string s, int k) {
    string a;
    int h=0,m=0;
    if(k==1)
    {
        return a;
    }
    for(int i=0;i<s.size();i=h)
    {
        
        
        m=1;
        if(s[h]==s[h+1])
        {
            h=i;
           
                while(h<s.size() && s[h]==s[h+1])
                {
                    
                    h++;
                    m++;
                    if(m==k)
                    {
                        s.erase(i,k);
                        break;
                    }

                }
            if(m!=k)
            {
                h++;
            }
            else
            {
            h=0;
            }
        }
        else{
            h++;
        }
        if(s.size()==0)
        {
            return s;
        }
        //cout<<s<<" ";
        
       
        

    }
    return s;
}