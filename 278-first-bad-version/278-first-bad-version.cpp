// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, h = n;
        int mid = 0;
        // if (n == 1 && isBadVersion(n)) return n;
        while(l <= h)
        {
            int mid = (h-l)/2 + l;
            if(isBadVersion(mid) == false)
            {
                if(isBadVersion(mid+1)) return mid+1;
                l = mid + 1;
            }
            else h = mid - 1; 
        }
        return mid+1;
    }
};