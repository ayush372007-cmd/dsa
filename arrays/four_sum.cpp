#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> sum4(vector<int>& nums, int target){
    sort(nums.begin(),nums.end());
    vector<vector<int>> lol;
    for(int i = 0; i < nums.size();i++){
        if(i > 0 && nums[i-1] == nums[i])continue;

        for(int j = i+1; j <nums.size();j++){
            if (j > i+1 && nums[j]==nums[j-1])continue;
            

            int k = j+1;
            int l = nums.size() - 1;
        
            while(k < l ){
                    
                long long sum = (long long)nums[i] + nums[j] + nums[k] +nums[l];
                if (sum < target) k++;
                else if (sum > target) l--;
                else{
                        
                    lol.push_back({nums[i],nums[j],nums[k],nums[l]});
                    while(k<nums.size()-1 && nums[k] == nums[k+1]){
                        k++;}
                        k++;
                        l--;
                    
                }}
            
        }
    }
}