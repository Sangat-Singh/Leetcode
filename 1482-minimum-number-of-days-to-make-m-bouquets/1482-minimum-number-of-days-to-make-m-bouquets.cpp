class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalflowers=1LL*m*k;
        if(totalflowers>bloomDay.size())
        {
            return -1;
        }
        int left=*min_element(bloomDay.begin(),bloomDay.end());
        int right=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=right;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            int bonq=0;
            int conc=0;
           for(int bloom:bloomDay)
           {
                if(bloom<=mid)
                {
                    conc++;

                    if(conc==k)
                    {
                        bonq++;
                        conc=0;
                    }

                }
                else
                {
                    conc=0;

                }
           }

           if(bonq>=m)
           {
            ans=mid;
            right=mid-1;
           }
           else
           {
            left=mid+1;
           }
        }
        return ans;
        
    }
};