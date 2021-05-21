//leetcode
class Solution {
public:
    unordered_map<string,bool>m;
    bool check(string s1, string s2, string s3, int a,int b,int c,int p1,int p2,int p3)
    {
        //p1=pointer in string s1
        //p2=pointer to string s2
        //p3=pointer in string s3
        if(p3==c)
        {
            return (p1==a && p2==b)?true:false; //if p3 oints to end of string s3, means s3 parse totaly check if s1 and s2 totallly parse or not
        }
        
        string key=to_string(p1)+"*"+to_string(p2)+"*"+to_string(p3);                //to make the key unique we add *
        if(m.find(key)!=m.end())return m[key];       //if key already exixts return its value
        if(p1==a)                                   //if s1 is completely parse
        {
            return m[key]=s2[p2]==s3[p3]?check(s1,s2,s3,a,b,c,p1,p2+1,p3+1):false; //check if char of s2 is matches with s3 or not
        }
         if(p2==b)    //if s2 is completely parse
        {
            return m[key]=s1[p1]==s3[p3]?check(s1,s2,s3,a,b,c,p1+1,p2,p3+1):false; ////check if char of s1 is matches with s3 or not
        }
        bool one=false,two=false;
        
        if(s1[p1]==s3[p3])                                     //if both are not completely parse then check if char of s1 is matches with s1 or not
        {
            one=check(s1,s2,s3,a,b,c,p1+1,p2,p3+1);
        }
        
        if(s2[p2]==s3[p3])                                      //if both are not completely parse then check if char of s2 is matches with s1 or not
        {
             two=check(s1,s2,s3,a,b,c,p1,p2+1,p3+1);
        }
        return m[key]=one || two;                              //return the result of both above parsing
        
    }
    bool isInterleave(string s1, string s2, string s3) {
        int a=s1.size(),b=s2.size(),c=s3.size();
        if(c!=a+b)                                              //if lenth of s3 is not equalt to s1 and s3 return false directly
        {
            return false;
        }
        return check(s1,s2,s3,a,b,c,0,0,0);
    }
};