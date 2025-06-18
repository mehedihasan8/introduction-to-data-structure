#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v1(5, 10); // vector of size 5 with all elements initialized to 10

    vector<int> v2(v1); // copy whole v1 vector to v2

    vector<int> v3.assign(); // copy whole v1 vector to v3 using assign method

    vector<int> v4;

    v4.push_back(1); // add element 1 to v4
    v4.push_back(5); // add element 1 to v4

    v4.pop_back(); // remove last element from v4

    v4.resize(10); // resize v4 to size 10, new elements will be initialized to 0

    

    // vector<int> v3 = v1; // copy whole v1 vector to v3

    // output the elements of v1
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }

    cout << endl;



    // insert elements into a vector at specific positions
    vector<int> v5 = {1, 2, 3, 4, 5}; // initialization vector of integers with elements 1, 2, 3, 4, 5

    v5.insert(v5.begin() + 2, 10); // insert 10 at index 2
    v5.erase(v5.begin() + 1, v5.begin() + 3); // erase elements from index 1 to index 3 (exclusive)

    // output the elements of v5
    for(int i = 0; i < v5.size(); i++){
        cout << v5[i] << " ";
    }



    return 0;
}