class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int l=1;
        int h=num/2;
        while(l<=h){
            long long mid=(long long)(l+h)/2;
            long long sq=(mid*mid);
            if(sq==num) return true;
            else if(sq>num) h=mid-1;
            else l=mid+1;
        }
        return false;
    }
};
