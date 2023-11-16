
//better tc:O(n*n*25)
// class Solution
// {
// public:
//     int beautySum(string s)
//     {
//         int beauty = 0;
//         for (int i = 0; i < s.size(); i++)
//         {

//             vector<int> hsh(26, 0);
//             for (int j = i; j < s.size(); j++)
//             {
//                 hsh[s[j] - 'a']++;
//                 int maxi = *max_element(hsh.begin(), hsh.end());
//                 int mini = INT_MAX;
//                 for (int k = 0; k <= 25; k++)
//                 {
//                     if (hsh[k] < mini && hsh[k] != 0)
//                         mini = hsh[k];
//                 }
//                 beauty += maxi - mini;
//             }
//         }
//         return beauty;
//     }
// };