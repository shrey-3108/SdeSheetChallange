#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& nums1, vector<int>& nums2, int m, int n) {
    int i,j;
    i= j = 0;
    while(i<m and j < n){
        if(nums1[i]<=nums2[j]){
            i++;
        }
        else{
            int temp = m-1;
            while(temp>=i){
                nums1[temp+1] = nums1[temp];
                temp--;
            }
            m++;
            nums1[i++] = nums2[j++];
        }
    }

    while(j<n) nums1[i++] = nums2[j++];
    return nums1;
}
