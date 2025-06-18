#include<bits/stdc++.h>
using namespace std;

int main() {



    vector<int> v1;
    v1.push_back(10);
    v1.push_back(10);

    cout << v1.capacity() << endl;

    cout << v1.size() << endl;

    cout << v1.clear() << endl; // clear the vector not delete the vector

    return 0;
}