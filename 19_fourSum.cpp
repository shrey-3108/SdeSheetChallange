#include <bits/stdc++.h> 
string fourSum(vector<int> nums, int target, int n) {
    if(n<4) return "No";
    sort(nums.begin(),nums.end());
    for(int i = 0;i<n;++i){
        int target_3 = target - nums[i];
        for(int j  = i + 1 ;j<n;++j){
            int target_2 = target_3 - nums[j];
            int s = j + 1, e = n-1;
            while(s<e){
                int sum = nums[s] + nums[e];
                if(sum == target_2){
                    return "Yes";
                }
                else if(sum > target_2) e--;
                else s++;
            }
        }
    }
    return "No";
}

