class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            c+=abs(nums[n-1]-nums[i]);
        }
        return c;
    }
};