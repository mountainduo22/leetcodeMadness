/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */
class Solution {
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
            if (umap.find(target - nums[i]) == umap.end())
            {
                umap[nums[i]] = nums[i];
            }
            else
            {
                result.push_back(-target);
                result.push_back(umap[target - nums[i]]);
                result.push_back(nums[i]);
            }
        }
        return result;
    }
        vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<int> temp;
        unordered_map<int, int> umap;
        vector<vector<int>> solution;
        int counter = 0;
        for (int i = 0; i < nums.size(); i++) {
            int target = -nums[i];
            for (int j = 0; j < nums.size(); j++) {
                if (j != i) temp.push_back(nums[j]);
            }
                
            // if (twoSum(temp, target).size() > 0)
            //     solution.push_back(twoSum(temp, target));
            solution.push_back(twoSum(temp, target));
        }

        return solution;
    }
};
