class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
        {
            return 0;
        }
        long long left=0;
        int  ans=0;
        long long right =x;
        while(left<=right)
        {
            long long mid =left+(right-left)/2;
            
            if(mid*mid==x)
            {return mid;}
            else if(mid*mid<x)
            {
                ans=mid;
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return ans;
    }
};