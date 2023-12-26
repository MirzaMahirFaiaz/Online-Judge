class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]=nums[i]+nums[i-1];
        }
        int temp=0,r,ans=-1;

        for(int i =0;i<n;i++){
            if(i==n-1)
            r=0;
            else
            r=nums[n-1]-nums[i];
            if(temp==r){
                ans=i;
                break;
            }
            temp =nums[i];

        }
        return ans;
    }
};
