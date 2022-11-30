#include <bits/stdc++.h>
using namespace std;
int dp[27][2];

int check(int a, int b, int c, int carry, int i)
{
    if (a == 0 and b == 0 and c == 0)
    {
        if (carry == 1)
            return 0;
        return 1;
    }
    if (dp[i][carry] != -1)
        return dp[i][carry];
    int x = ((a % 2) ^ 1) + ((b % 2) ^ 1) + carry;
    int y = ((a % 2) ^ 0) + ((b % 2) ^ 0) + carry;
    int sol = 0;
    if ((x % 2) == (c % 2) ^ 1)
    {
        sol = max(sol, check(a / 2, b / 2, c / 2, x / 2, i + 1));
    }
    if (y % 2 == (c % 2) ^ 0)
    {
        sol = max(sol, check(a / 2, b / 2, c / 2, y / 2, i + 1));
    }
    return dp[i][carry] = sol;
}

int main()
{
    // printf("Hello World");
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < 27; i++)
        {
            dp[i][0] = dp[i][1] = -1;
        }

        if (check(a, b, c, 0, 0))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}