#include <bits/stdc++.h>

using namespace std;
bool isCompatible(vector<int> inp, int dist, int cows)
{
    int n = inp.size();
    int k = inp[0];
    cows--;
    for (int i = 1; i < n; i++)
    {
        if (inp[i] - k >= dist)
        {
            cows--;
            if (!cows)
            {
                return true;
            }
            k = inp[i];
        }
    }
    return false;
}

bool isCompatibles(vector<int> inp, int dist, int cows)
{
    int n = inp.size();
    int k = inp[0];
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (inp[i] - k >= dist)
        {
            cnt++;
            k = inp[i];
        }
    }
    if (cnt >= cows)
        return true;
    return false;
}

int main()
{
    int n = 5, m = 3;
    vector<int> A{1, 2, 8, 4, 9};
    sort(A.begin(), A.end());
    // int maxD = A[n - 1] - A[0];
    int ans = INT_MIN;
    // for (int d = 1; d <= maxD; d++)
    // {
    //     bool possible = isCompatible(A, d, m);
    //     if (possible)
    //     {
    //         ans = max(ans, d);
    //     }
    // }

    // optimized 🔥
    int low = 1, high = A[n - 1] - A[0];

    while (low <= high)
    {
        int mid = (low + high) >> 1;

        if (isCompatibles(A, mid, m))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    ans = high;

    cout << "The largest minimum distance is " << ans << '\n';
}
