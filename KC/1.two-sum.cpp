/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
class Solution
{
  public:
    vector<int> twoSum(vector<int> &nums, int target)
    {   
        vector<int> result;
        unordered_map<int, int> umap;

        for (int i = 0; i < nums.size(); i++)
        {
            // for (int j = i+1; j < nums.size(); j++)
            // {
            //     if (nums[i] + nums[j] == target)
            //     {
            //         result.push_back(i);
            //         result.push_back(j);
            //         return result;
            //     }
            // }
            if (umap.find(target-nums[i]) == umap.end()) {
                umap[nums[i]] = i;
            } else {
                result.push_back(umap[target-nums[i]]);
                result.push_back(i);
            }
        }
        return result;

    }
};
