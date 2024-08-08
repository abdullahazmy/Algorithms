#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX = 80 + 1;

int a = 1, b = 1, c = 0;

int main()
{
    for (int i = 2; i < MAX; ++i)
    {
        c = a + b;
        a = b, b = c;
    }
    cout << c;
}
