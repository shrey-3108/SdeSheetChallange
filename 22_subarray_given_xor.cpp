#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int k)
{
	int xorr = 0, cnt = 0;
	unordered_map<int,int> freq;
	for(auto &x : arr){
		xorr ^= x;
		
		if(xorr == k)
			cnt ++;
		
		if(freq.find(xorr^k) != freq.end())
			cnt += freq[xorr^k];
		
		freq[xorr] += 1;
	}
	
	return cnt ;
	
}
