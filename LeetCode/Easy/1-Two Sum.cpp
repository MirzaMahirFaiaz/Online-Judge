class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
         vector<int>sol;
        int n = nums.size();
        for (i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(nums[j]==target-nums[i]){
                     sol.push_back(i);
                     sol.push_back(j);
                    //printf("%d - %d",i,j);
                break;
                }
            }
        }
       // printf("%d - %d",i,j);
       
        
        return sol;
    }
};
