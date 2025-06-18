#include<bits/stdc++.h>
using namespace std;


int main(){

    // vector<int> v ----> initialization vector of integers;
    // vector<int> v(5) -----> initialization vector of integers with size 5;
    // vector<int> v(5, 10) -----> initialization vector of integers with size 5 and all elements initialized to 10;
    // vector<int> v{1, 2, 3, 4, 5} -----> initialization vector of integers with elements 1, 2, 3, 4, 5;
    // vector<int> v = {1, 2, 3, 4, 5} -----> initialization vector of integers with elements 1, 2, 3, 4, 5;


    vector<int> v1(4, 10); // vector of size 4 with all elements initialized to 10
    vector<int> v2(v1); // copy hole v1 vector to v2
    // vector<int> v3 = v1; // copy hole v1 vector to v3

    // output the elements of v1
    for(int i=0; i<v1.size(); i++){
        cout << v1[i] << " ";
    }

    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> v4(arr, arr + 5); // vector from array



    return 0;
}




