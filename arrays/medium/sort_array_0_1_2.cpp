//DUTCH NATIONAL FLAG ALGORITHM (most optimal)
// TC:O(N),SC:O(1)
//  int low=0,mid=0,high=n-1;
//     while(mid<=high){
//         if(arr[mid]==0){
//             swap(arr[mid],arr[low]);
//             low++;
//             mid++;
//         }
//         else if(arr[mid]==1) mid++;
//         else {
//             swap(arr[mid],arr[high]);
//             high--;
//         }

//     }


// HAshing(better)
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>hsh(3,0);
//         for(int i=0;i<n;i++){
//             hsh[nums[i]]++;

//         }
//         int j=0;
//         for(int i=0;i<3;i++){
//             while(hsh[i]>0){
//                 nums[j]=i;
//                 hsh[i]--;
//                 j++;
//             }
//         }

   
//     }
// };