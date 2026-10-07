#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> sum_3(vector <int> &nums){
    sort(nums.begin(),nums.end());
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


int main(){
    int size;
    cin >> size;
    vector<int> nums;
    for (int i = 0; i < size; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    vector<vector<int>> result = sum_3(nums);

    for (const auto& triplet : result){
        for (int val : triplet){
            cout << val << " ";
        }
        cout << "\n";
    }
}