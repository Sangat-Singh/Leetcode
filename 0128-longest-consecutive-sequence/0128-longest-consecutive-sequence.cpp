class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        int longest =0;
      
        for(int i=0;i<n;i++)
        {
            if(st.find(nums[i]-1)==st.end())
            {
                 int current =nums[i];
                 int count=1;

                  while(st.find(current +1)!=st.end())
            {
                current++;
                count++;
                st.erase(current);
            }
            longest=max(count,longest);
            }
            
        }
       return longest;
        
    }
};