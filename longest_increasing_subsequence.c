
    int lengthOfLIS(vector<int>& nums) {

        int n=nums.size();
        // dp[i] represents the length of LIS if we include ith element in LIS
        int dp[n];
        for(int i=0;i<n;i++)
            dp[i]=1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j] && dp[i]<dp[j]+1)
                    dp[i]=dp[j]+1;
            }
        }
        int mx=0;
        for(int i=0;i<n;i++)
            mx=max(mx,dp[i]);
        return mx;
    }


    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int> v;
       v.push_back(a[0]);
       for(int i=1;i<n;i++)
       {
           if(v.back()<a[i])
           {
           	   // element can be part of LIS so directly add to vector
               v.push_back(a[i]);
           }
           else
           {
           	   // update the vector to get maximum incresing sequence
               int index=lower_bound(v.begin(),v.end(),a[i])-v.begin();
               v[index]=a[i];
           }
       }
       return v.size();
    }
