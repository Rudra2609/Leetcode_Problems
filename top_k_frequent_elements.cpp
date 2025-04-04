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


// another method

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        multimap<int,int,greater<int>> tp;
        vector<int> ans;
        int a=0;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        for(auto i:freq){
            tp.insert({i.second,i.first});
        }

        for(auto i:tp){
            if(!k) break;
            ans.push_back(i.second);
            k--;
        }
        return ans;
    }
};
