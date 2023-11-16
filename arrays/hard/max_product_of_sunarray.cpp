//optimal tc:O(n) sc:O(1)
// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int n=nums.size();
//         int prefix=1;
//         int suffix=1;
//         int maxi=INT_MIN;
//         for(int i=0;i<n;i++){
//             prefix*=nums[i];
//             maxi=max(maxi,prefix);
//             suffix*=nums[n-1-i];
//             maxi=max(maxi,suffix);
//             if(prefix==0) prefix=1;
//             if(suffix==0) suffix=1;
//         }
//         return maxi;
//     }
// };