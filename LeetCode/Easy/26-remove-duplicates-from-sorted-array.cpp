class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        set<int> s;
 
    for (int x:nums) {
        s.insert(x);
    }
    nums.clear();
    int sz= s.size();
    for(auto itr = s.begin(); itr != s.end(); itr++)
     nums.push_back(*itr);
    
    return sz;
        
    }
};
