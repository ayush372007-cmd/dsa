#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int start = -1;
        while(low <= high){
            int mid = low+(high-low)/2;

            if(nums[mid] >= target){
                start = mid;
                high = mid-1;                
            }

            else{
                low = mid+1;
            }

        }
        if(start == -1 || nums[start]!= target)return{-1,-1};

        low = 0;
        high = nums.size()-1;

        int end = -1;
        while(low <= high){
            int mid = low+(high-low)/2;

            if(nums[mid] <= target){
                end = mid;
                low = mid+1;                
            }

            else{
                high = mid-1;
            }

            
        }
        if(end == -1 || nums[end]!= target)return{-1,-1};


        
        return {start,end};
    }
};