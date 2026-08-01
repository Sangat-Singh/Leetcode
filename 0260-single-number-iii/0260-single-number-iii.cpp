// class Solution {
// public:
//     vector<int> singleNumber(vector<int>& nums) {
//         unordered_map<int,int>mp;
//         int n= nums.size();
//         vector<int>ans;
//         for(int i=0;i<n;i++)
//         {
//             mp[nums[i]]++;

//         }
//         for(int num :nums){
//         if(mp[num]==1)
//         {
//             ans.push_back(num);
//         }
//         }

//         return ans;

        
//     }
// };

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums)
    {
       
        long long xors=0;
        for(int num : nums)
        {
            xors^=num;
        }

        long long diff=xors &(-xors);

        int a =0;
        int b=0;
        for(int num :nums)
        {
            if(num & diff)
            {
                a^=num;
            }
            else
            {
                b^=num;
            }
        }
        return{a,b};
    }

    };