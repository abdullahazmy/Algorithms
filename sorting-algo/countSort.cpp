#include <bits/stdc++.h>
using namespace std;

vector<int> countSort(vector<int> &array)
{
    int size = array.size(), maxVal = array[0];

    // Calculate MaxElemnt
    for (int i = 1; i < size; i++)
        if (array[i] > maxVal)
            maxVal = array[i];

    vector<int> count(maxVal + 1, 0); // Vector of size maxVal +1 & initialize with zero

    // Frequency Array
    for (int i = 0; i < size; i++)
        count[array[i]] += 1;

    // put values back to the Array
    int idx = 0;
    for (int i = 0; i <= maxVal; i++)
    {
        for (int j = 0; j < count[i]; j++, idx++)
            array[idx] = i;
    }
    return array;
}

int main()
{
    vector<int> nums = {3, 10, 2, 1};
    countSort(nums);
    for (auto i : nums)
        cout << i << " ";
}
