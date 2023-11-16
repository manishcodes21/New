//tc: o(nlog(max-min))  sc:O(1)
// class Solution
// {
// public:
//     int possible(vector<int> &bloomDay, int day, int m, int k)
//     {
//         int adj = 0;
//         int ct = 0;
//         for (int i = 0; i < bloomDay.size(); i++)
//         {
//             if (bloomDay[i] <= day)
//             {
//                 adj++;
//             }
//             else
//             {
//                 ct += adj / k;
//                 adj = 0;
//             }
//         }
//         ct += adj / k;
//         if (ct >= m)
//         {
//             return 1;
//         }
//         return 0;
//     }
//     int minDays(vector<int> &bloomDay, int m, int k)
//     {
//         int n = bloomDay.size();
//         int ans = -1;

//         int low = *min_element(bloomDay.begin(), bloomDay.end());
//         int high = *max_element(bloomDay.begin(), bloomDay.end());
//         while (low <= high)
//         {
//             int mid = (low + high) / 2;
//             int x = possible(bloomDay, mid, m, k);
//             if (x == 1)
//             {
//                 ans = mid;
//                 high = mid - 1;
//             }
//             else
//             {
//                 low = mid + 1;
//             }
//         }
//         return ans;
//     }
// };