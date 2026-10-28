class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
       int n = nums.size();

       int i =0;
       int idx =0;
       while(i<n-1){
        if(nums[i]>nums[i+1]){
                idx =i;
                break;
            }
            i++;
       } 
       
       return idx;
    }
};