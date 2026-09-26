class Solution {
public:
void quick(vector<int>&nums,int l,int r){
    if( l >= r) return;//base condition
    int i = l,j = r;
    int pivot = nums[(l+r)/2];
    while(i <= j){
        while(nums[i] < pivot) i++;
        while(nums[j] > pivot) j--;
        if(i <= j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }

    }
    quick(nums,l,j);
    quick(nums,i,r);

}
    vector<int> sortArray(vector<int>& nums) {
        quick(nums,0,nums.size()-1);
        return nums;
        
    }
};