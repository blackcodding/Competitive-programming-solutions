// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution
{
public:
    int isDigitSumPalindrome(int N)
    {
        int sum = 0;
        while (N)
        {
            sum = sum + (N % 10);
            N = N / 10;
        }
        int r;
        r = sum;
        if (sum == 0)
            return 1;
        else
        {
            int t = 0;
            while (sum)
            {
                t = t * 10 + (sum % 10);
                sum = sum / 10;
            }
            if (t == r)
                return 1;
            else
                return 0;
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
// } Driver Code Ends