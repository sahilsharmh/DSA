class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            // If the element to the right is greater, we are on the uphill slope
            if (arr[mid] < arr[mid + 1]) {
                left = mid + 1; // The peak must be further to the right
            } 
            // If the element to the right is smaller, we are on the downhill slope (or at the peak)
            else {
                right = mid; // The peak is at mid or to the left of mid
            }
        }
        
        // When left == right, we have found the peak
        return left;
    }
};