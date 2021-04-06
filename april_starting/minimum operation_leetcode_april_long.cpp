 int minOperations(int n) {
        vector<int>v(n+1);
        for(int i=0;i<n;i++)
        {
            v[i]=2*i+1;
        }
        int low=0,high=n-1,c=0;
        
            
            while(v[low]!=v[high])
            {
                v[low]++;
                v[high]--;
                c++;
            }
        int sum=c;
        c=c-2;
            for(int i=1;i<n/2;i++)
            {
                if(c<1)
                {
                    break;
                }
                sum+=c;
                c=c-2;
            }
        
       
        return sum;
    }