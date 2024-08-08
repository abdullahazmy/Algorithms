#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX = 80 + 1;
ll memory[MAX];

ll fib(int n)
{
    if (n <= 1)
        return 1;
    ll &ret = memory[n];
    if (ret != -1)
        return ret;
    return ret = fib(n - 1) + fib(n - 2);
}

int main()
{
    memset(memory, -1, sizeof(memory));
    cout << fib(80);
}
