#include <bits/stdc++.h> 
long long maxSubarraySum(int nums[], int n)
{
    long long maxi = 0;
    long long sum = 0;
    for(int i = 0;i<n;i++){
        if(sum < 0) sum = 0;

        sum += nums[i];
        maxi = max(sum,maxi);
    }
    return maxi;
}
