//A number is armstrong if the sum of cubes of each digit is equal to the number itself 
// class Solution {
//   public:
//     string armstrongNumber(int n){
//         // code here
//         int dup=n;
//         int ans=0;
//         while(n>0){
//             ans = ans + pow((n%10),3);
//             n/=10;
//         }
//         if(ans==dup){
//             return "Yes";
//         }
//         else{
//             return "No";
//         }
//     }
// };