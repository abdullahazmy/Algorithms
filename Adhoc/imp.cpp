// Creating prefix sum logic
#include <bits/stdc++.h>
using namespace std;

// Take the input
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> arr[i]; // We moved 1 base, so that we don't face issues with -1 index

    vector<int> prefix = arr;

    for (int i = 1; i <= n; i++)
        prefix[i] += prefix[i - 1];

    // takes queries
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        // To avoid -1 ondex issues (Overflow)
        if (l == 0)
        {
            cout << prefix[r];
            continue;
        }

        cout << prefix[r] - prefix[l - 1];
    }
}
