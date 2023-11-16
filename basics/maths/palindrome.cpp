// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x<0){
//             return false;
//         }
//         else{
//             int y=x;
//             vector<int>s;
//             while(y>0){
//                 s.push_back(y%10);
//                 y=y/10;
//             }
//             int ans=0;
//             for(int i=0;i<s.size();i++){
//                 if(ans>INT_MAX/10 || ans<INT_MIN/10) return false;
//                 ans=ans*10+s[i];
//             }
//             if(ans==x){
//                 return true;
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }
// };


// Line 16: Char 24: runtime error: signed integer overflow: 998765432 * 10 cannot be represented in type 'int' (solution.cpp)
// SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior prog_joined.cpp:25:24

// if you find a error like this use this:
//  if(ans>INT_MAX/10 || ans<INT_MIN/10) return false;