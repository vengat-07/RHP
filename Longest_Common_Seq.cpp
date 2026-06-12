#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    int m = s1.length();
    int n = s2.length();

    int dp[100][100] = {0};

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(s2[i - 1] == s1[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << "Length of LCS = " << dp[n][m];

    return 0;
}
