/*
 * @lc app=leetcode id=973 lang=cpp
 *
 * [973] K Closest Points to Origin
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>> result;
        multimap<double, vector<int>, less<double>> mapOfItems;
        int i = 0;

        for (auto const &point : points)
        {
            const double euclideanDistance = sqrt(pow(point[0], 2) + pow(point[1], 2));
            mapOfItems.insert(make_pair(euclideanDistance, point));
        }

        for (auto const &point : mapOfItems)
        {
            if (i < K)
            {
                cout << point.first << endl;
                result.push_back(point.second);
                i++;
            }
        }

        return result;
    };
};
// @lc code=end

