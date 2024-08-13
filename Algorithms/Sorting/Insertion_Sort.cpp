#include <bits/stdc++.h>

using namespace std;

void insertion_sort(vector <int> &v)
{
    int i, correct_position, current_num;

    for (i = 0; i < v.size(); i++) {
        current_num = v[i];
        correct_position = i - 1;

        while (correct_position >= 0 && v[correct_position] > current_num) {
            v[correct_position + 1] = v[correct_position];
            correct_position--;
        }

        v[correct_position + 1] = current_num;
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

    insertion_sort(v);

    for (auto it : v) {
        cout << it << " ";
    }

    return 0;
}