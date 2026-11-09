class Solution {
public:
    void sortColors(vector<int>& nums) {
     int a = 0,b = 0, c= 0;
     for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            a=a+1;
        }
        else if(nums[i]==1){
            b=b+1;
        }
        else{
            c=c+1;
        }
    } 
    for (int i = 0; i < nums.size(); i++) {
        if (i < a) {
            nums[i] = 0;
        } else if (i < (a + b)) {
            nums[i] = 1;
        } else if (i < (a + b + c)) {
            nums[i] = 2;
        }
    }  
    }
};