//tc:O(logn)
// class Solution
// {
// public:
//     int findKthPositive(vector<int> &arr, int k)
//     {
//         int l = 0;
//         int h = arr.size() - 1;
//         while (l <= h)
//         {
//             int m = (l + h) / 2;
//             int no_of_missing = arr[m] - (m + 1);
//             if (no_of_missing < k)
//             {
//                 l = m + 1;
//             }
//             else
//             {
//                 h = m - 1;
//             }
//         }
//         // int no_missing=arr[h]-(h+1)
//         // int no_of_rem=k-no_missing
//         // int ans=arr[h]+no_of_rem
//         // ans=k=h+1
//         return k + h + 1;
//     }
// };