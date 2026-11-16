class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1 ;
        long long hi = *max_element(piles.begin(),piles.end());

        while(lo < hi)
        {
            int mid = lo + (hi - lo) / 2 ;

            long long needed = 0;
            for(int p : piles)
            {
                needed += (p + mid - 1) / mid ;
            }
            if(needed <= h)
            {
                hi = mid;
            }
            else
            {
                lo = mid + 1 ;
            }
        }
        return lo;

    }
};
