pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int x,r,m,right_most_setbit_no;
	r = m = 0;
	x = arr[0];
	for(int i = 1;i<n;i++){
		x = x^arr[i];
	}
	for(int i = 1;i<=n;i++){
		x = x^i;
	}
	
	// Now x contains r^m 
	
	right_most_setbit_no = (x & ~(x-1));
	
	for(int i = 0;i<n;i++){
		if(arr[i] & right_most_setbit_no){
			r = r^arr[i];
		}
		else{
			m = m^arr[i];
		}
	}
	
	for(int i = 1;i<=n;i++){
		if(i & right_most_setbit_no){
			r = r^i;
		}
		else{
			m = m^i;
		}
	}
	
	for(int i = 0;i<n;i++){
		if(arr[i] == r) 
			return {m,r};
	}
	
	return {r,m};
	
}

