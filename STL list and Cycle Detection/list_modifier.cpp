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




    l5.remove(3); // remove 3 from l5

    // access list index using next function it's return pointer to next element
    // here l5 = [1, 2, 3, 4]
    // here 2 is index and begin is iterator to first element

    cout << *next(l5.begin(), 2) << endl; // print 3

    // inset any pos of list using insert function 
    // where l5 = [1, 2, 3, 4]
    // here 2 is index and begin is iterator to first element
    // here 5 is value
    l5.insert(next(l5.begin(), 2), 5); // add 5 at index 2


    list<int> l6 = {45, 854, 87};

    // inset any pos of list using insert function 
    // where l5 = [1, 2, 3, 4]
    // here 2 is index and begin is iterator to first element
    // here l6 is list

    l5.splice(next(l5.begin(), 2), l6.begin(), l6.end()); // add l6 at index 2



    // remove any element of list
    // where l5 = [1, 2, 3, 4]
    // here 2 is index and begin is iterator to first element

    l5.erase(next(l5.begin(), 2)); // remove element at index 2


    // erase any range of list
    // where l5 = [1, 2, 3, 4]
    // here 2 is index and begin is iterator to first element
    // here 4 is index and begin is iterator to first element

    l5.erase(next(l5.begin(), 2), next(l5.begin(), 4)); // remove element at index 2 to 4

    // replace any element of list
    // where l5 = [1, 2, 3, 4]
    // replace all 1 with 2 in l5

    replace(l5.begin(), l5.end(), 1, 2);




    auto it = find(l5.begin(), l5.end(), 2); // find 2 in l5
    
    if(it == l5.end()){ // if 2 is found
        cout << "2 is not found" << endl; // print 2 is  not found
    } else{
        cout << "2 is found" << endl; // print 2 is found
    }

    for(int val: l5){ // print l5 
        cout << val << " ";
    }

    return 0;
}