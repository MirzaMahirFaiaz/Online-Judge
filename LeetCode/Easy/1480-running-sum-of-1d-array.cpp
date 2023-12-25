class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningSum;
        runningSum= nums;
        for(int i=1;i<nums.size();i++){
            runningSum[i]+= runningSum[i-1];
        }
        return runningSum;
    }
};
