/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int median = (nums2.size() + nums1.size()) / 2;
        cout << nums1[nums1.size() - 1] << endl;
        cout << nums2[nums2.size() - 1] << endl;
        if (nums1[nums1.size() - 1] <= nums2[0])
        {
            nums1.insert(nums1.end(), nums2.begin(), nums2.end());
            if (median % 2 == 0)
            {
                return (nums1[median] + nums1[median + 1]) / 2;
            }
            else
            {
                return nums1[median];
            }
        }

        if (nums2[nums2.size() - 1] <= nums1[0])
        {
            nums2.insert(nums2.end(), nums1.begin(), nums1.end());
            if (median % 2 == 0)
            {
                return (nums2[median] + nums2[median + 1]) / 2;
            }
            else
            {
                return nums2[median];
            }
        }

        return 0;
    }
};
// @lc code=end
