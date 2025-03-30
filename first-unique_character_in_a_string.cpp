class Solution {
public:
    int firstUniqChar(string s){
        int ans,c=0;
        unordered_map<char,int> freq;

        for(int i=0;i<s.size();i++){
            freq[s[i]]++;            
        }

        for(int i=0;i<s.size();i++){
            if(freq[s[i]]==1){
                ans=i;
                c=1;
                break;
            }
        }
        if(c) return ans;
        else return -1;
    }
};
