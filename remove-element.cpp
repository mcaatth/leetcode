// https://leetcode.com/problems/remove-element/description/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        for (int i = 0; i < nums.size(); i++) {// didn't work when I took for (auto v : nums)
            if (nums[i] == val) {
                nums[i] = -1;
                k--;
            }
        }
        sort(nums.begin(), nums.end(), greater<>());
        return k;
    }
};
