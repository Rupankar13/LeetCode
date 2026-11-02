class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len=nums.size();
        int median=nums[len/2];
        int min=0;
        for(int i=0;i<len;i++){
            min+=abs(median-nums[i]);
        }
        return min;
    }
};