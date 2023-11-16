//tc: O(n)
// class Solution
// {
// public:
//     int romanToInt(string s)
//     {
//         unordered_map<char, int> mp;
//         mp['I'] = 1;
//         mp['V'] = 5;
//         mp['X'] = 10;
//         mp['L'] = 50;
//         mp['C'] = 100;
//         mp['D'] = 500;
//         mp['M'] = 1000;
//         int sum = 0;
//         int f = -1;
//         if (s.size() == 1)
//             return mp[s[0]];
//         for (int i = 0; i < s.size() - 1; i++)
//         {
//             if (mp[s[i]] >= mp[s[i + 1]])
//             {
//                 sum += mp[s[i]];
//                 if (i == s.size() - 2)
//                 {
//                     f = 1;
//                 }
//             }
//             else
//             {
//                 sum += mp[s[i + 1]] - mp[s[i]];
//                 if (i == s.size() - 3)
//                     f = 1;
//                 i++;
//             }
//         }
//         if (f == 1)
//             sum += mp[s[s.size() - 1]];

//         return sum;
//     }
// };