class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int low = 0;
        int high = nums.size()-1;
        int ans = INT_MAX;
        int idx = 0;
        while(low <= high){
            int mid = low+(high-low)/2;
            
            //left sorted 
            if(nums[mid] >= nums[low]){
                if(nums[mid] < ans){
                    ans = nums[low];
                    idx = low;
                }
                low = mid+1;
                
            }

            //right sorted
            else{
                if(nums[mid] < ans){
                    ans = nums[mid];
                    idx = mid;
                }
                high = mid-1;

            }
        }
        return idx;
    }
};