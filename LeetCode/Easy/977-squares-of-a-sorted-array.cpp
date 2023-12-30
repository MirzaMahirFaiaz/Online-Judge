class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> vec(nums.size());
        int l =0, r = nums.size()-1;

        for(int i = r;i>=0;i--){
            if(abs(nums[l])<abs(nums[r]))
                vec[i]=nums[r]*nums[r--];
            else
                vec[i]=nums[l]*nums[l++];
        }
       return vec; 
    }
};
