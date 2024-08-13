/**
 *    author:  Anonymous_HF
 *    created: 14/08/2024
**/

// O(N) = N^2

#include <bits/stdc++.h>

using namespace std;

void bubble_sort(vector <int> &v)
{
    int i, j;

    for (i = 0; i < v.size(); i++) {
        for (j = 1; j < v.size(); j++) {
            if (v[j - 1] > v[j]) {
                swap(v[j - 1], v[j]);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    vector <int> v(n);

    for (auto &it : v) {
        cin >> it;
    }

    bubble_sort(v);

    for (auto it : v) {
        cout << it << " ";
    }

    return 0;
}