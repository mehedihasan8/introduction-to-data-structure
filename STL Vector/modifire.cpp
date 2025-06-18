#include<bits/stdc++.h>
using namespace std;

int main(){


    vector<int> v1 = {1, 2, 3, 4, 5}; // initialization vector of integers with elements 1, 2, 3, 4, 5

    replace(v1.begin(), v1.end(), 3, 10); // replace all occurrences of 3 with 10

    auto it = find(v1.begin(), v1.end(), 10); // find the first occurrence of 10

    if(it == v1.end()) {
        cout << "10 not found" << endl; // if 10 is not found, print message
    } else {
        cout << "10 found at index: " << distance(v1.begin(), it) << endl; // if 10 is found, print its index
    }
    
    return 0;
}