// class Solution
// {
//     static bool cmp(pair<char, int> &a, pair<char, int> &b)
//     {
//         return a.second > b.second;
//     }

// public:
//     string frequencySort(string s)
//     {

//         map<char, int> mp;
//         for (auto c : s)
//         {
//             mp[c]++;
//         }
//         vector<pair<char, int>> vec;
//         for (auto it : mp)
//         {
//             vec.push_back(it);
//         }
//         sort(vec.begin(), vec.end(), cmp);
//         s.clear();
//         for (auto &it : vec)
//         {
//             while (it.second--)
//             {
//                 s.push_back(it.first);
//             }
//         }
//         return s;
//     }
// };