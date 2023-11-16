//https://leetcode.com/problems/subarray-sum-equals-k/description/
//tc:O(n) sc:O(nlogn)
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int prefsum=0;
//         int ct=0;
//         map<int,int>prefix; //key is sum and value is the count of the sum
//          prefix[0]=1; // storing 0 so that it will useful when prefsum-k ==0 
//         for(int i=0;i<nums.size();i++){
//            prefsum+=nums[i];
//            int rem = prefsum-k;
//            if(prefix.find(rem)!=prefix.end()){
//                ct+=prefix[rem];
//            }
//            prefix[prefsum]+=1;
//         }
//     return ct;
//     }
// };