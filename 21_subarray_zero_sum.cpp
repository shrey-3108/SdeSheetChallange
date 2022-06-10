#include<bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
	int n = arr.size(),maxi = 0;

	unordered_map<int,int> mp;
	int sum = 0;
	for(int i = 0;i<n;i++){
		sum+= arr[i];
		
		if(sum == 0) maxi = i+1;
		
		if(mp.find(sum) != mp.end()){
			maxi = max(maxi, abs(i - mp[sum]));
		}
		else{
			mp[sum] = i;
		}
	}
	return maxi;
}
