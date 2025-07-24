#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    stack<int> s;
    queue<int> q;

    int x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        s.push(x);
    }

    for (int i = 0; i < m; i++) {
        cin >> x;
        q.push(x);
    }

    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }

    
    while (!s.empty() && !q.empty()) {
        if (s.top() != q.front()) {
            cout << "NO" << endl;
            return 0;
        }
        s.pop();
        q.pop();
    }

    cout << "YES" << endl;
    return 0;
}
