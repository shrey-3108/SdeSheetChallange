#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    int breakpoint = n - 2;
    for(;breakpoint>=0;breakpoint--){
        if(nums[breakpoint] < nums[breakpoint + 1]) break;
    }

    if(breakpoint < 0) reverse(nums.begin(),nums.end());
    else{
        int i = n - 1;
        for(;i>=0;i--){
            if(nums[i] > nums[breakpoint]) break;
        }
        swap(nums[breakpoint],nums[i]);
        reverse(nums.begin()+breakpoint + 1,nums.end());
    }
    return nums;
}
