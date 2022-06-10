#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    if(nums.empty()) return 0;
    set<int> st(nums.begin(),nums.end());
    int cnt = 1,maxi = 1;
    vector<int> v(st.begin(),st.end());
    n = v.size();
    for(int i = 1;i<n;++i){
        if((v[i-1]+1) == v[i]) maxi = max(maxi,++cnt);
        else cnt = 1;
    }
    return maxi;
}
