class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zi=-1,tem;
        
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]!=0){
                        tem = nums[j];
                        nums[j]=nums[i];
                        nums[i]=tem;
                        zi=i+1;
                        break;
                    }
                }
            }      
        }
        
    }
};
