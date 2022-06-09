#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & matrix, int m, int n, int target) {
    int s = 0, e = matrix.size()*n - 1;

    while(s<=e){
        int mid = s + (e-s)/2;
        if(matrix[mid/n][mid%n] == target){
            return 1;
        }
        else if(matrix[mid/n][mid%n] < target ){
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
    }

    return 0;
}
