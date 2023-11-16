// tc:O(vector.size()*vector[0].size())
// class Solution
// {
// public:
//     string longestCommonPrefix(vector<string> &strs)
//     {
//         string s = strs[0];
//         int f = 0;
//         string ans = "";
//         for (int i = 0; i < s.size(); i++)
//         {
//             for (int it = 0; it < strs.size(); it++)
//             {
//                 if (strs[it][i] == s[i])
//                 {
//                     f = 1;
//                     continue;
//                 }
//                 else
//                 {
//                     f = 0;
//                     break;
//                 }
//             }
//             if (f == 1)
//             {
//                 ans.push_back(s[i]);
//             }
//             if (f == 0)
//             {
//                 break;
//             }
//         }

//         return ans;
//     }
// };