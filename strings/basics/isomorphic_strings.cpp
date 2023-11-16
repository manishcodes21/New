// // tc:O(n)
// class Solution
// {
// public:
//     bool isIsomorphic(string s, string t)
//     {

//         unordered_map<char, char> mp;
//         unordered_map<char, char> mp1;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (mp.find(s[i]) != mp.end())
//             {

//                 if (mp[s[i]] != t[i])
//                     return false;
//             }

//             if (mp1.find(t[i]) != mp1.end())
//             {
//                 if (mp1[t[i]] != s[i])
//                     return false;
//             }
//             mp[s[i]] = t[i];
//             mp1[t[i]] = s[i];
//         }
//         return true;
//     }
// };