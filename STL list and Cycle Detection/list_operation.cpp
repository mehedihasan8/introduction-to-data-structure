#include<bits/stdc++.h>
using namespace std;

int main(){
    
    list<int> l = {10, 20, 30, 40, 50, 60, 70, 80};


    // remove element where value is 30 
    // and remove 30 from list
    l.remove(30);

    // sort list ascending order
    l.sort();

    // sort list descending order
    l.sort(greater<int>());

    // unique list
    l.unique();

    // reverse list
    l.reverse();

    // print list
    for(int val : l){
        cout << val << " ";
    }



    return 0;
}