#include <iostream>
#include <vector>
using namespace std;

void solve()
{
	int n, m; cin >> n >> m;
	vector<vector<int>> a(n + 1, vector<int>(m + 1));

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			a[i][j] += a[i][j - 1];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			a[i][j] += a[i - 1][j];
		}
	}

	int q;
	cin >> q;
	while (q--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int ans = a[x2][y2] - a[x1 - 1][y2] - a[x2][y1 - 1];
		ans += a[x1 - 1][y1 - 1];

		cout << ans << endl;
	}
}

int main()
{
	solve();
	return 0;
}
