// class Solution
// {
// public:
//     bool rotateString(string s, string goal)
//     {
//         int n = s.size();
//         if (s == goal)
//             return true;
//         for (int i = 1; i < n; i++)
//         {
//             string temp = goal;
//             reverse(temp.begin(), temp.begin() + n - i);
//             reverse(temp.begin() + n - i, temp.end());
//             reverse(temp.begin(), temp.end());
//             if (temp == s)
//                 return true;
//         }

//         return false;
//     }
// };

// int isCyclicRotation(string &p, string &q)

// {

//     if (p.length() != q.length())
//         return false;

//     if ((p + p).find(q) != string::npos)

//         return true;

//     return false;
// }