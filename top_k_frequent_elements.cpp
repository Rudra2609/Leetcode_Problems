class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int,greater<int>> freq;
        vector<int> ans;
        int a=0;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        priority_queue<pair<int,int>> pq;
        for(auto i: freq){
            pq.push({i.second,i.first});
        }

        while (k-- && !pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
