// class Solution {
// public:
//     int reverse(int x) {
//         int r = 0; // Declare a variable 'r' to store the reversed integer, initialized to 0.

//         while (x) {
//             if (r > INT_MAX / 10 || r < INT_MIN / 10)
//                 return 0; // Check if 'r' is outside the valid 32-bit range, return 0 if true.

//             r = r * 10 + x % 10; // Multiply 'r' by 10 and add the rightmost digit of 'x' to 'r'.
//             x = x / 10; // Update the value of 'x' by removing the rightmost digit.
//         }

//         return r; // Return the reversed integer.
//     }
// };
