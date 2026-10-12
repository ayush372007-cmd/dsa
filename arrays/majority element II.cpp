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

vector<int> majorityElementOPT(vector<int>& nums){
    int ele1 = nums[0];
    int ele2 = nums[0];
    int count1 = 0;
    int count2 = 0;
 
    for (int value : nums) {
        if (value == ele1) {
            count1++;
        }
        else if (value == ele2) {
            count2++;
        }
        else if (count1 == 0) {
            ele1 = value;
            count1 = 1;
        }
        else if (count2 == 0) {
            ele2 = value;
            count2 = 1;
        }
        else {
            count1--;
            count2--;
            }
        }
 
        int verified1 = 0;
        int verified2 = 0;
 
        for (int value : nums) {
            if (value == ele1) {
                verified1++;
            }
            else if (value == ele2) {
                verified2++;
            }
        }
 
        vector<int> answer;
 
        if (verified1 > nums.size() / 3) {
            answer.push_back(ele1);
        }
 
        if (ele2 != ele1 && verified2 > nums.size() / 3) {
            answer.push_back(ele2);
        }
 
        return answer;
    }
