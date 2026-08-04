class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int> map;
        int smallest=INT_MAX;
        int largest=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=largest)
            largest=nums[i];

            if(nums[i]<=smallest)
            smallest=nums[i];

            if(map.count(nums[i]==0))
            map[nums[i]]=1;
            else
            map[nums[i]]++;
        }
        vector<int> v;
        for(int i=smallest;i<=largest;i++){
            if(map.count(i)==0)
            v.push_back(i);
        }
        return v;
    }
};