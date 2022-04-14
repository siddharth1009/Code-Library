

int findPeakElement(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int n=nums.size();int mid;
        if(n==1)return 0;
        while(low<=high){
            mid=low+(high-low)/2;
            if(mid>0 and mid<n-1){
                if(nums[mid-1]<nums[mid] and nums[mid]>nums[mid+1]){
                    return mid;
                }
                else if(nums[mid]<nums[mid-1])high=mid-1;
                else low=mid+1;
            }
            else if(mid==0){
                if(nums[mid]>nums[mid+1])return mid;
                else return mid+1;
            }
            else if(mid==n-1){
                if(nums[mid-1]<nums[mid])return mid;
                else return mid-1;
            }
        }
        return mid;

    }
