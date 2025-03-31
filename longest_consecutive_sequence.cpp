class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        int n=nums.size();
        map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        int temp,cnt=1,ans=1;
        bool f=true;
        for(auto i:freq){
            if(f){
                temp=i.first;
                f=false;
            }
            else{
                if(temp+1==i.first){
                    cnt++;
                }
                else{
                    ans=max(cnt,ans);
                    cnt=1;
                }
                temp=i.first;
            }
        }
        ans=max(ans,cnt);
        return ans;
    }
};
