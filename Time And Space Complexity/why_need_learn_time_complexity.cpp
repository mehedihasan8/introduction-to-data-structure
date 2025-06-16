#include<bits/stdc++.h>
using namespace std;

int main() {

    // Time Complexity and Space Complexity
    // are two important concepts in computer science
    // that help us analyze the efficiency of algorithms.

    //time complexity is a measure of the amount of time
    //code operations take to run as a function of the length of the input.
    // It helps us understand how the runtime of an algorithm grows
    // as the size of the input increases.

    

    //time complexity is the amount of time taken by
    // an algorithm to run as a function of the length of the input.


    //space complexity is the amount of memory space 
    // required by an algorithm to run as a function of the length of the input.

    int n;
    cin >> n;

    // using loop find sum

    // int sum = 0;

    // for(int i = 1; i <= n; i++){
    //     sum+= i;
    // }


    // using formula find sum

    int sum = (n*(n+1)) / 2;

    cout<< sum << endl;

    return 0;
}