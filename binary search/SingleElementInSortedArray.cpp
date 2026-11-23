class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int low = 0;
        int high = nums.size()-1;
        int ans = 0;
        while(low <= high){
            int mid = low +(high-low)/2;

            //edge cases
            if(nums[1] > nums[0]) return nums[0];
            else if(nums[nums.size()-1] > nums[nums.size()-2]) return nums[nums.size()-1];
            

            else if(nums[mid] == nums[mid-1]){
                if(mid % 2 == 0) high = mid - 1;
                else low = mid + 1;
            }
            else if(nums[mid] == nums[mid+1]){
                if(mid % 2==0) low = mid + 1;
                else high = mid - 1;
            }

            else{

                return nums[mid];

            }
        }
    }
};