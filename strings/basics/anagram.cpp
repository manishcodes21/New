//tc:O(s.size())
// class Solution
// {
// public:
//     bool isAnagram(string s, string t)
//     {
//         if (s.size() != t.size())
//             return false;
//         unordered_map<char, int> mp;
//         unordered_map<char, int> mp1;
//         for (auto c : s)
//         {
//             mp[c]++;
//         }
//         for (auto c : t)
//         {
//             mp1[c]++;
//         }
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (mp[s[i]] != mp1[s[i]])
//                 return false;
//         }
//         return true;
//     }
// };