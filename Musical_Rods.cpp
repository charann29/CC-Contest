#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

#define int long long

bool Compare(pair<int, int> A, pair<int, int> B)
{
    return A.first * B.second > B.first * A.second;
}

signed main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<pair<int, int>> C(N);
        for (int i = 0; i < N; i++)
        {
            cin >> C[i].first;
        }
        for (int i = 0; i < N; i++)
        {
            cin >> C[i].second;
        }
        int d = 0, total = 0;
        sort(C.begin(), C.end(), Compare);
        for (auto p : C)
        {
            total += d * p.second;
            d += p.first;
        }
        cout << total << endl;
    }
    return 0;
}
// --------------------------------------------------------------------------------------------------------------------------------------------------------Using Struct

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct rod
{
    ll length;
    ll beauty;
};

static bool comp(struct rod rod1, struct rod rod2)
{
    if ((rod2.length * rod1.beauty) < (rod1.length * rod2.beauty))
        return true;

    return false;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll l[n], b[n];
        for (ll i = 0; i < n; i++)
            cin >> l[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];
        struct rod rods[n];
        for (ll i = 0; i < n; i++)
        {
            rods[i].length = l[i];
            rods[i].beauty = b[i];
        }
        sort(rods, rods + n, comp);

        ll prod = 0;
        ll start = 0;

        for (ll i = 0; i < n; i++)
        {
            prod += (rods[i].beauty * start);
            start += rods[i].length;
        }
        cout << prod << "\n";
    }
    return 0;
}

// ------------------------------------------------------------------------------------------------------------------------------------------------------------ Using Class!

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class Order
{
public:
    ll len, u;
};
bool sort_abc(Order &a, Order &b)
{
    return a.u * b.len < b.u * a.len;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        vector<Order> rods(x);
        for (int i = 0; i < x; i++)
            cin >> rods[i].len;
        for (int i = 0; i < x; i++)
            cin >> rods[i].u;
        ll ans = 0, sum = 0, len = 0;
        sort(rods.begin(), rods.end(), sort_abc);
        for (int i = 0; i < x; i++)
        {
            ans += (len * rods[i].u);
            len += rods[i].len;
        }
        cout << ans << endl;
    }
    return 0;
}