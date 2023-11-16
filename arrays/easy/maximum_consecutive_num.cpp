//https://leetcode.com/problems/max-consecutive-ones/submissions/991553250/
// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int n = nums.size();
//         int maxi=0;
//         int ct=0;
//         for(int i=0;i<n;i++){
            
//             if(nums[i]==1){
//                 ct++;
//                 if(maxi<ct) maxi=ct;
//             }
//             else{
                
//                 ct=0;

//             }
//         }
//         return maxi;
//     }
// };