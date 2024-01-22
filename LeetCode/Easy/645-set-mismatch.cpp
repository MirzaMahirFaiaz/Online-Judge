class Solution {
public:
    int arr[10007];
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
            
        }
        int a=0;
         for(int i=1;i<=nums.size();i++){
             if(arr[i]>1)
                ans.push_back(i);
             if(arr[i]==0)
             a=i;   
            
        }
        ans.push_back(a);
      return ans;  
    }
};
