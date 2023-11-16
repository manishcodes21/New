// long long NthRoot(int n, long long m)
// {
//     int ans = -1;
//     int l = 1;
//     int h = m;

//     while (l <= h)
//     {
//         long long mid = (l + h) / 2;
//         int x = n;

//         long long value = 1;
//         while (x--)
//         {
//             value = value * mid;
//             if (value > m)
//                 break; // if not included then we face overflow issue so break the looop once the value is greater
//         }

//         if (value == m)
//         {
//             ans = mid;
//             break;
//         }

//         if (value > m)
//         {
//             h = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }

//     return ans;
// }
