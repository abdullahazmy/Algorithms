// Function to find the length of the longest subarray with all unique elements
void findLongestUniqueSubarray()
{
    int n;
    // Read the size of the array
    cin >> n;

    // Initialize the array of size 'n'
    vector<int> a(n);

    // Input the elements of the array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Create a frequency map to track the count of each element in the current window
    map<int, int> freq;

    // Initialize two pointers, 'l' for the left boundary and 'r' for the right boundary of the sliding window
    int l = 0, r = 0;

    // Variable to store the maximum length of subarray with unique elements
    int max_len = 0;

    // Traverse the array using the right pointer
    while (r < n)
    {
        // Increment the frequency of the current element at index 'r'
        freq[a[r]]++;

        // If the current element at 'r' appears more than once, move the left pointer 'l'
        // to reduce the frequency of elements and ensure all elements are unique
        while (freq[a[r]] > 1)
        {
            freq[a[l]]--; // Decrease the frequency of the element at 'l'
            l++; // Move the left pointer forward
        }

        // Update the maximum length of the subarray
        max_len = max(max_len, r - l + 1);

        // Move the right pointer forward
        r++;
    }

    // Output the length of the longest subarray with all unique elements
    cout << max_len << endl;
}
