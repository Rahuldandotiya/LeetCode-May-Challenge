class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int mjn=nums[0];
        for(int i=1;i<nums.size();i++){
            if(mjn==nums[i]) count++;
            else count--;
            if(count==0){
                mjn=nums[i];
                count=1;
            }
        }
        return mjn;
    }
};
