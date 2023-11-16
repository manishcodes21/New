// long long reversedBits(long long x) {
//     vector<int>binary;
//     int i=0;
//     while(x>0){
//         binary.push_back(x%2);
//         i++;
//         x=x/2;
//         }
//     while(binary.size()!=32){
//         binary.push_back(0);
//     }
//     reverse(binary.begin(),binary.end());
//     long long rev=0;
//     for(int i=0;i<32;i++){
//         rev=rev+binary[i]*pow(2,i);
//     }
//     return rev;
// }
    
// };

//solution 2
// class Solution {
//   public:
//     long long reversedBits(long long X) {
//         // code here
//         long long res=0;
//         int pow=31;
//         while(X)
//         {
//             res+=(X&1)<<pow;
//             pow--;
//             X=X>>1;
//         }
//         return res;
//     }
// };