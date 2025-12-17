// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

// my first solution accepted by leetcode but not optimal (eg. upper_bound search doesn't need to be from begin)
// TODO: optimize

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> output{};
        auto check = binary_search(nums.begin(), nums.end(), target);
        auto first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (check == 0) {output.push_back(-1);} else {output.push_back(first);}
        auto second = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (check == 0) {output.push_back(-1);} else {output.push_back(second-1);}
        return output;
    }
};
