class Solution {
public:
    vector<vector<int>> subs;
    void subset(vector<int>& s,int i,vector<int>& nums){
        if(i==nums.size()){
            subs.push_back(s);
            return;
        }
        // if i is not to be included
        subset(s,i+1,nums);
        s.push_back(nums[i]);
        subset(s,i+1,nums);
        s.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> s = {};
        subset(s,0,nums);
        return subs;
    }
};