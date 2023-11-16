//tc:O(log n)
// class Solution {
// public:
//     int bsearch(vector<int>& nums, int target, int low, int high) {
//         if (low <= high) {
//             int mid = low + (high - low) / 2;
//             if (target < nums[mid]) {
//                 return bsearch(nums, target, low, mid - 1);
//             } else if (target > nums[mid]) {
//                 return bsearch(nums, target, mid + 1, high);
//             } else {
//                 return mid;
//             }
//         }
//         return -1;
//     }
    
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         int index = bsearch(nums, target, 0, n - 1);
//         return index;
//     }
// };
