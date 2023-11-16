// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int size=s.size();
//         string s1;
//         for(int i=0;i<size;i++){
//             if((int)s[i]>=65 && (int)s[i]<=90){
//                 s1.push_back((char)s[i] + 32);
//             }
//             else if((int)s[i]>=97 && (int)s[i]<=122){
//                 s1.push_back(s[i]);
//             }
//             else if((int)s[i]>=48 && (int)s[i]<=57){
//                 s1.push_back(s[i]);
//             }
//         }
//         string s2=s1;
//         reverse(s1.begin(),s1.end());
//         if(s1==s2){
//             return true;
//         }
//         else return false;
//     }
// };