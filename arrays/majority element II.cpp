#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementBRUTE(vector<int>& nums) {
    vector<int>ans;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        int count = 0;
        if (find(ans.begin(), ans.end(), nums[i]) != ans.end())
        continue;

        for(int j = 0; j < n; j++){
            if(nums[j] == nums[i]){
                count ++;
            }
        
        }
        if (count > n/3){
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

vector<int> majorityElementBETTER(vector<int>& nums){
    unordered_map<int,int> st;
    vector<int>ans;
    for (int i: nums){
        st[i]++;
    }
    for (auto it: st){
        if(it.second>nums.size()/3){
            ans.push_back(it.first);}
    }
    return ans;
}