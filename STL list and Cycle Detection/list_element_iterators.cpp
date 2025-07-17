#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int> l = {10, 50, 80, 84};

    cout << l.front() << endl;
    cout << l.back() << endl;

    cout << *next(l.begin(), 2) << endl;
    cout << *prev(l.end(), 3) << endl;

    return 0;
}