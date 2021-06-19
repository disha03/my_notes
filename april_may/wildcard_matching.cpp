class Solution {
public:
     
    bool isMatch(string s, string p) {
        int h=s.size(),l=p.size();
        vector<vector<bool>>v(h+2,vector<bool>(l+2,false));
        for(int j=0; j<p.size() && p[j]=='*'; j++)
        {
            v[0][j+1] = true;  //if p[j]=='*' always true
                    }
        v[0][0]=true;
        for(int i=1;i<=s.size();i++)
        {
            for(int j=1;j<=p.size();j++)
            {
                if(s[i-1]==p[j-1] || p[j-1]=='?')
                {
                    v[i][j]=v[i-1][j-1];
                }
                else if(p[j-1]=='*')
                {
                    v[i][j]=v[i-1][j]||v[i][j-1];
                }
                else{
                    v[i][j]=false;
                }
            }
        }
        return v[h][l];
        
    }
};