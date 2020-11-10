class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        /* My thought process:
        */
        unordered_map<int, int> result;
        // return indexs that add up to target
        for (int i = 0; i < nums.size(); i++)
        {
            result.insert(make_pair(nums[i], i));
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            int newTarget = target - nums[i];
            if (result.count(newTarget) && result.at(newTarget) != i)
            {
                return {i , result.at(newTarget)};
            }
        }
        return {0, 0};
    }
};
