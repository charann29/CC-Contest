#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count_ar[2] = {0};
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            count_ar[x % 2]++;
        }
        if (count_ar[1] % 2 == 0 && count_ar[1] != 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
