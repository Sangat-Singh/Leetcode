// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         unordered_map<int,int>mp;
//         for(int i=0;i<n;i++)
//         {
//             mp[nums[i]]++;

//         }
//         for(int i=0;i<=nums.size();i++)
//         {
//             if(mp.find(i)==mp.end())
//             {
//                 return i;
//             }
//         }
//         return -1;
        
//     }
// };

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0;
        int xor2=0;
        for(int num:nums)
        {
            xor1^=num;
        }
        for(int i=0;i<=nums.size();i++)
        {
            xor2^=i;
        }

        return xor1 ^ xor2;






    }
};