// class Solution
// {
// public:
//     int sum_remainder(vector<int> &nums, int m)
//     {
//         int sum = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             sum += ceil((double)nums[i] / m);
//         }
//         return sum;
//     }
//     int smallestDivisor(vector<int> &nums, int threshold)
//     {
//         int n = nums.size();
//         int l = 1;
//         int ans = 1;
//         int h = *max_element(nums.begin(), nums.end());
//         while (l <= h)
//         {
//             int m = (l + h) / 2;
//             int summ = sum_remainder(nums, m);
//             if (summ > threshold)
//             {
//                 l = m + 1;
//             }
//             else
//             {
//                 ans = m;
//                 h = m - 1;
//             }
//         }

//         return ans;
//     }
// };