class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while (low <= high){
            int mid = low+(high-low)/2;
            if(nums[mid] == target) return true;
            else if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++; high--;
                continue;
            }
            //right half sorted
            else if(nums[mid] < nums[low]){
                if(target <= nums[high] && target > nums[mid]){
                    low = mid;
                }

                else{
                    high = mid-1;
                }
                 
            }
            //left half sorted
            else{
                if(target < nums[mid]&& target >= nums[low]){
                    high = mid;
                }
                else{
                    low = mid+1;
                }

            }

        }
        return false;
    }
};