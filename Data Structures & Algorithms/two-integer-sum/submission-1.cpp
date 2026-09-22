class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int>mp;
    for(int i = 0;i<nums.size();i++){
        int rmng = target - nums[i];
        if(mp.count(rmng)){
            return{mp[rmng],i};
        }
        mp[nums[i]] = i;
    }
    return {};
        
    }
};
