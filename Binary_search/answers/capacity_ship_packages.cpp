//tc:O(n*log(sum-max+1)) sc:O(1)
// class Solution
// {
// public:
//     int possible(vector<int> &weights, int days, int min_weight)
//     {
//         int sum = 0;
//         int day = 1;
//         for (int it = 0; it < weights.size(); it++)
//         {
//             sum += weights[it];
//             if (sum > min_weight)
//             {
//                 day++;
//                 sum = weights[it];
//             }
//         }


//         if (day <= days)
//             return 1;
//         return 0;
//     }
//     int shipWithinDays(vector<int> &weights, int days)
//     {
//         int n = weights.size();
//         int l = *max_element(weights.begin(), weights.end());
//         int h = accumulate(weights.begin(), weights.end(), 0);
//         int ans = -1;
//         for (int i = 0; i < days; i++)
//         {
//             h += weights[i];
//         }
//         while (l <= h)
//         {
//             int m = (l + h) / 2;
//             int x = possible(weights, days, m);
//             if (x == 1)
//             {
//                 ans = m;
//                 h = m - 1;
//             }
//             else
//             {
//                 l = m + 1;
//             }
//         }
//         return ans;
//     }
// };