class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> ind;

        for (int i = 0; i < n; i++) {
            int c=target-nums[i];
            if (ind.find(c)!=ind.end() && ind[c] != i) {
                ans.push_back(ind[c]);
                ans.push_back(i);
                return ans;
            }
            ind[nums[i]] = i;
        }
        return ans;
    }
};
