#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX = 80 + 1;
ll fib[MAX]{1, 1};

int main()
{
    for (int i = 2; i < MAX; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];

    cout << fib[80];
}
