#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2;

    cin >> s1;
    cin >> s2;

    int m = s1.length();
    int n = s2.length();

    int dp[100][100] = {0};

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(s2[i-1] == s1[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    string lcs = "";

    int i = n;
    int j = m;

    while(i > 0 && j > 0)
    {
        if(s2[i-1] == s1[j-1])
        {
            lcs += s2[i-1];
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    reverse(lcs.begin(), lcs.end());

    cout << "Length = " << dp[n][m] << endl;
    cout << "LCS = " << lcs << endl;

    return 0;
}
