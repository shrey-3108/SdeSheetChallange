long long merge(long long *arr, long long *temp,int left,int mid,int right){
	long long inv_count = 0;
	int i,j,k;
	i = left;
	j = mid;
	k = left;
	while((i <= mid-1) && (j <= right)){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
			
			// Length of whole elements who are greater will be
			// mid - i
			// Think yourself
            inv_count = inv_count + (mid - i);
        }
    }

    while(i <= mid - 1)
        temp[k++] = arr[i++];

    while(j <= right)
        temp[k++] = arr[j++];

    for(i = left ; i <= right ; i++)
        arr[i] = temp[i];
    
    return inv_count;
}

long long mergeSort(long long *arr,long long *temp, int left, int right){
	int mid;
	long long countInversion = 0;
	
	if(right>left){
		mid = (left + right)/2;
		countInversion += mergeSort(arr,temp,left,mid);
		countInversion += mergeSort(arr,temp,mid+1,right);
		
		countInversion += merge(arr,temp,left,mid+1,right);
	}
	return countInversion;
	
}

long long getInversions(long long *arr, int n){
   // Brute Force 
// 	long long count = 0;
// 	for(int i = 0;i<n;i++){
// 		for(int j = i+1;j<n;j++){
// 			if(arr[i]>arr[j]) count ++;
// 		}
// 	}
// 	return count;

	
	// Using Merge Sort
	long long temp[n];
	return mergeSort(arr,temp,0,n-1);
}
