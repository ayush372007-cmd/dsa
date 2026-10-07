#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> bettersum_3(vector <int> &nums){
    
    int size = nums.size();
    
    set<vector<int>> st;
    
    
    for (int i = 0; i<size;i++ ){
        unordered_set<int> sums;
        for(int j = i+1; j<size; j++){
            int third = -(nums[i] + nums[j]);
            if(sums.find(third) != sums.end()){
                vector<int> temp = {nums[i],nums[j],third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            sums.insert(nums[j]);
            }
        }
    vector<vector<int>> ans(st.begin(),st.end());
    

    return ans;

}

vector<vector<int>> optsum_3(vector<int> &nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>>lol;
    for(int i = 0; i < nums.size();i++){
        if(i>0 && nums[i-1] == nums[i])continue;
        
        int j = i+1;
        int k = nums.size() - 1;
        
        while(j < k ){
            
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0) j++;
            else if (sum > 0) k--;
            else{
                
                lol.push_back({nums[i],nums[j],nums[k]});
                while(j<nums.size()-1 && nums[j] == nums[j+1]){
                    j++;}
                j++;
                k--;
                
                }
            

            }
            
    }
    
    return lol ;
}

int main(){
    int size;
    cin >> size;
    vector<int> nums;
    for (int i = 0; i < size; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    vector<vector<int>> result = optsum_3(nums);

    for (const auto& triplet : result){
        for (int val : triplet){
            cout << val << " ";
        }
        cout << "\n";
    }
}