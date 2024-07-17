#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return 4 * pow(x, 7) + 3 * pow(x, 5) - 1000;
}

// Implementing a function to know f(x) in a real range from 0 to 3

double binary_search(double EPS = 1e-9)
{
    double start = 0, end = 3;
    while (start - end > EPS)
    {
        double mid = start + (end - start) / 2;
        if (f(mid) < 0.0)
            start = mid;
        else
            end = mid;
    }
    return start;
}