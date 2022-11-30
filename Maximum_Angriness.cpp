#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x;
        cin >> n >> x;
        long long int count = ((n) * (n - 1)) / 2;
        if (x < n / 2)
        {
            long long int m = n - 2 * x;
            count -= (m * (m - 1)) / 2;
        }

        cout << count << endl;
    }
    return 0;
}
