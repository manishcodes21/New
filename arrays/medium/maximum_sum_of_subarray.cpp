// https://leetcode.com/problems/maximum-subarray/submissions/992503108/
// kadanes's algorithm
// tc:O(n) sc:O(1)
//  class Solution {
//  public:
//      int maxSubArray(vector<int>& nums) {
//          int sum=0;;
//          int maxi=INT_MIN;
//          int start=-1,ans_start=-1,ans_end=-1;
//          for(int i=0;i<nums.size();i++){
//              if(sum==0) start=i;
//              sum+=nums[i];
//                  maxi=max(sum,maxi);

// if (sum > maxi)
// {
//     ans_start = start;
//                 ans_end=i;
// }
//              if(sum<0){
//                  sum=0;

//             }
//

//         }

//         return maxi;
//     }
// };