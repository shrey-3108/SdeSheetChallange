#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    vector<int> mp(256,-1); 
    // creating a map of 256 characters
    // as string can not have more than 256 charaters

    int left, right,n,ans;
    left = right = ans = 0;
    n = s.length();

    while(right < n){
        char ch = s[right];

        if(mp[ch] != -1) left = max(mp[ch] + 1, left);

        mp[ch] = right;

        ans = max(ans, right - left + 1);
        right++;
    }

    return ans;
}
