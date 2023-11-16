// // https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
// class Solution{
//   public:
//     int minJumps(int arr[], int n)
// {

//     int jumps=0,curfartest=0,curend=0;
//     for(int i=0;i<n-1;i++){
//         curfartest=max(curfartest,i+arr[i]);
        
//         if(i>=curfartest) return -1;
//         if(i==curend){
//             jumps++;
//             curend=curfartest;
//         }
        
//     }
//     return jumps;
// }
// };