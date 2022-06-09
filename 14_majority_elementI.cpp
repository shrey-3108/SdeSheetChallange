#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
    // Moore's voting Algorithm
    int count=0, element=0;
    for(int x = 0;x<n;x++){
        if(count == 0)
            element = arr[x];
        if(arr[x] == element)
            count ++;
        else 
            count --;
    }
    count = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] == element)
            count++;

    if(count > n / 2)  return element;
    return -1;
}
