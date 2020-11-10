/*
    What is different from MyAnswer.cpp?
    > This solution uses only 1 pass (though 2 passes are still O(n)).
    > Makes for cleaner, shorter code.
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
  
    unordered_map<int, int> result;
        
    // loop through the vector    
    for (int i = 0; i < nums.size(); i++)
    {
        int newTarg = target - nums[i];
        if (result.count(newTarg))
        {
            return { result.at(newTarg), i };
        }
        result.insert(make_pair(nums[i], i);
    }
    return {0, 0};
 }
