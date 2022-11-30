#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    void solved();
    int t;
    cin >> t;
    while (t--)
    {
        solved();
    }
    return 0;
}
void solved()
{
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int x = min(a, n - a + 1);
    int y = min(b, n - b + 1);
    int z = min(c, n - c + 1);
    int w = min(d, n - d + 1);
    cout << min(abs(c - a) + abs(d - b), min(z, w) + min(x, y)) << endl;
}