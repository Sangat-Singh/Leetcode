class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n= nums.size();
        int large=0;
        for(int num :nums)
        {
            mp[num]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]>n/2)
            {
                return nums[i];
            }


        }
        return -1;
    }
};