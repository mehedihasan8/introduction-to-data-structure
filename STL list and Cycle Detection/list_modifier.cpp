#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {41, 54, 87};

    list<int> l2;
    l2 = l; // copy l to l2

    l2.assign(l.begin(), l.end()); // assign to l2 from l begin to l end


    list<int> l5;

    l5.push_back(1); // add 1 to l5 tail is's means add at last index
    l5.push_front(2); // add 2 to l5 head is's means add at first index

    l5.push_back(3); // add 3 to l5 tail is's means add at last index
    l5.push_back(4); // add 4 to l5 tail is's means add at last index


    l5.pop_back(); // remove last element from l5
    l5.pop_front(); // remove first element from l5

    
    for(int val: l5){ // print l5 
        cout << val << " ";
    }

    return 0;
}