#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] < target)low++;
            else if(nums[mid] >= target) high--;

        }
        return low;
    }
};