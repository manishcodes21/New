//https://leetcode.com/problems/rotate-array/submissions/989152187/
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         k=k%(nums.size());
//         reverse(nums.begin(),nums.end()-k);
//         reverse(nums.begin()+nums.size()-k,nums.end());
//         reverse(nums.begin(),nums.end());
//     }
// };