#include<bits/stdc++.h>
vector<vector<long long int>> printPascal(int numRows) 
{
    vector<vector<long long int>> triangle;
    vector<long long int> prev;
    prev.push_back(1);
    triangle.push_back(prev);
    for(int i = 1;i<numRows;i++){
        vector<long long int> curr(i+1,1);
        for(int j = 1;j<i;j++){
            curr[j] = prev[j-1] + prev[j];
        }
        triangle.push_back(curr);
        prev = curr;
    }
    return triangle;
}

