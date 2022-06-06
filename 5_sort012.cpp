void sort012(int *nums, int n)
{
    int l, m, h;
    l = m = 0;
    h = n-1;

    while(m<=h){
        if(nums[m] == 0) swap(nums[l++],nums[m++]);
        else if(nums[m] == 1) m++;
        else swap(nums[m],nums[h--]);
    } 
}
