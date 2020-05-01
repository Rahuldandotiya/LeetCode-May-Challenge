// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1;
        int h=n;
        int ans=-1;
        int idx=0;
        while(l<=h){
            long long  mid=((long long)l+(long long)h)/2;
            if(isBadVersion(mid)){
                ans=mid;
                idx=mid;
                break;
            }
            else l=mid+1;
        }
        idx--;
        while(idx>=0 and isBadVersion(idx)){
            ans=idx;
            idx--;
        }
        return ans;
    }
};
