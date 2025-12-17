// https://leetcode.com/problems/merge-sorted-array/description/

// first approach: using sort(); accepted by leetcode

#include <iostream>
#include <vector>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // if ();//TODO: what if m,n incorrect
        for (int i = 0; i < n; i++) {
            nums1[m+i] = nums2[i];
        }

        std::sort(nums1.begin(), nums1.end());
    }
};

// second approach: not using sort()

/*
// I know a better solution would be starting from the end of the array with zeros in the end, but I chose a solution with starting from the beginning of array to try using a temporary copy

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // if ();//what if m,n incorrect
        vector<int> sorted;
        int i =0;
        int j = 0; // I don't know why I couldn't put i and j in one line, it failed (i was not set to 0)
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                sorted.push_back(nums1[i]);
                i++;
            } else {
                sorted.push_back(nums2[j]);
            j++;
            }
        }
        if (i == m) {
            for (int k = j; k < n; k++)
                sorted.push_back(nums2[k]);
        }
        if (j == n) {
            for (int l = i; l < m; l++)
                sorted.push_back(nums1[l]);
        }

        nums1.clear();
        for (auto v : sorted) {
            nums1.push_back(v);
        }
    }
};
*/
