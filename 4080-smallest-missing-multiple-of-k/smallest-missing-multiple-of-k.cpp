#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> multiples;

        // Step 1: Store all nums[i]/k where nums[i] is a multiple of k
        for (int num : nums) {
            if (num % k == 0) {
                multiples.insert(num / k);
            }
        }

        // Step 2: Find smallest missing multiple
        int i = 1;
        while (true) {
            if (multiples.find(i) == multiples.end()) {
                return i * k;  // return the actual missing multiple
            }
            i++;
        }
    }
};
