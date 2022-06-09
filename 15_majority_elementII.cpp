#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &nums)
{
    // a = num1, b = num2
    int a,b,c1,c2,n = nums.size();
    a = b = -1;
    c1 = c2 = 0;
    for(auto &x : nums){
        if(a == x) c1++;
        else if(b == x) c2++;
        else if(c1 == 0){
            a = x;
            c1 = 1;
        }
        else if(c2 == 0){
            b = x;
            c2 = 1;
        }
        else{
            c1 --;
            c2--;
        }
    }

    c1 = c2 = 0;
    for( auto &x : nums){
        if(x == a) c1++;
        if(x == b) c2++;
    }
    vector<int> v;
    if(c1 > n/3) v.push_back(a);
    if(c2 > n/3 && a != b) v.push_back(b);

    return v;

}
