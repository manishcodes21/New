//https://leetcode.com/problems/rearrange-array-elements-by-sign/submissions/992642694/
//optimal
//tc:O(n) sc:O(n)
// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int pos=0;//first positive element index
//         int neg=1;
//         vector<int>ans(nums.size(),0);
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>0){
//                 ans[pos]=nums[i];
//                 pos+=2;
//             }
//             if(nums[i]<0){
//                 ans[neg]=nums[i];
//                 neg+=2;
//             }
//         }
//         return ans;
//     }
// };

//brute
// tc:O(2n) sc:O(n)
// vector<int> alternateNumbers(vector<int>&a) {
//     // Write your code here.
//     int n=a.size();
//     vector<int>pos;
//     vector<int>neg;
//     for(int i=0;i<n;i++){
//         if(a[i]>0)pos.push_back(a[i]);
//         if(a[i]<0)neg.push_back(a[i]);
//     }
//     for(int i=0;i<n/2;i++){
//         a[2*i]=pos[i];
//         a[2*i+1]=neg[i];
//     }
//     return a;
// }