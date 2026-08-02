class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n= nums.size();
        for(int num : nums)
        {
            mp[num]++;
        }
        vector<pair<int,int>> freq;
        for(auto x:mp)
        {
            freq.push_back({x.second,x.first});
        }

        sort(freq.begin(),freq.end());
        vector<int> ans;
        for(int i=freq.size()-1;k>0;i--,k--)
        {
            ans.push_back(freq[i].second);
        }
        return ans;
    }
};