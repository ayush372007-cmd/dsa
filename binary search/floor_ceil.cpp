#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int low = 0;
        int high = nums.size()-1;
        int floor = -1;
        int ceil = -1;
        while(low <= high){
            int mid = low+(high-low)/2;
            if(nums[mid]>=x){
                ceil = nums[mid];
                high = mid - 1;
            }
            if(nums[mid]<=x){
                floor = nums[mid];
                low = mid+1;
            }
            
        }
        return {floor,ceil};
    }
};