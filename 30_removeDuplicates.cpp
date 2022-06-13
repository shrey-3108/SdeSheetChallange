int removeDuplicates(vector<int> &arr, int n) {
    int cnt = 1;
    for(int i = 1;i<n;i++){
        if(arr[i-1] != arr[i]) cnt++;
    }
    return cnt;
}
