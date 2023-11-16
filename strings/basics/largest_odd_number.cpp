// class Solution
// {
// public:
//     string largestOddNumber(string num)
//     {
//         int n = num.size();
//         int index = -1;
//         for (int i = n - 1; i >= 0; i--)
//         {
//             if ((int)num[i] % 2 != 0)
//             {
//                 index = i;
//                 break;
//             }
//         }
//         string p = num.substr(0, index + 1);

//         return p;
//     }
// };