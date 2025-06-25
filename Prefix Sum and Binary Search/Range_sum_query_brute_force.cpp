// solution using brute force
// Time complexity: O(n * q)
// Space complexity: O(1)

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        int sum = 0;
        for (int i = l; i <= r; i++) {
            sum += arr[i];
        }
        cout << sum << endl;
    }

    return 0;
}