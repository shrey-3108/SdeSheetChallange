#include <bits/stdc++.h> 

int merge(int s, int mid, int e, vector<int> &nums){
    int i,j;
    j = mid+1;
    int ans = 0;
    for (int i = s; i <= mid; i++) {
        while (j <= e && nums[i] > 2LL * nums[j]) {
            j++;
        }
        ans += (j - (mid + 1));
    }
    vector < int > t;
    int left = s, right = mid + 1;

    while (left <= mid && right <= e) {
        if (nums[left] <= nums[right]) {
            t.push_back(nums[left++]);
        } 
        else {
            t.push_back(nums[right++]);
        }
    }

    while (left <= mid) {
        t.push_back(nums[left++]);
    }
    while (right <= e) {
        t.push_back(nums[right++]);
    }

    for (int i = s; i <= e; i++) {
        nums[i] = t[i-s];
    }        
    return ans;

}
int mergesort(int s, int e, vector<int> &arr){

    if(s >= e) return 0;
    int mid = s + (e-s)/2;
    int ans = 0;
    ans += mergesort(s,mid,arr);
    ans += mergesort(mid+1,e,arr);

    ans += merge(s,mid,e,arr);

    return ans;
}
int reversePairs(vector<int> &nums, int n){
    int s = 0, e = n - 1;
    return mergesort(0,e,nums);	
}
