#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> l = {1,2,3,4,5};
    int arr[] = {1,2,3,4,5};
    vector<int> v = {1,2,3,4,5};

    list<int> l2(l); // copy l to l2

    list<int> l3(arr, arr+5); // copy arr to l3
    
    list<int> l4(v.begin(), v.end()); // copy v to l4

    // print list using 

    for(auto it = l.begin(); it !=l.end(); it++){
        cout<< *it <<" ";
    }

    // sort way print

    for(int val : l){
        cout << val << " ";
    }


    return 0;
}