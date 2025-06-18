#include<bits/stdc++.h>
using namespace std;

int main() {


    int n;

    cin >> n;

    vector<int> v1(n);

    for(int i = 0; i < n; i++) {
        cin >> v1[i];
    }


    //---------------------------------


    vector<int> v2;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    //---------------------------------

    vector<int> v3(n);

    for(int i = 0; i < n; i++) {
        cin >> v3[i];
    }


    return 0;
}