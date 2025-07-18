#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    list<int> l;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            l.push_front(V);
        } else if (X == 1) {
            l.push_back(V);
        } else if (X == 2) {

            if (V >= 0 && V < (int)l.size()) {
                auto it = next(l.begin(), V);
                l.erase(it);
            }
        }

        cout << "L -> ";
        for (int val : l) {
            cout << val << " ";
        }
        cout << endl;

        list<int> temp = l;
        temp.reverse();

        cout << "R -> ";
        for (int val : temp) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
