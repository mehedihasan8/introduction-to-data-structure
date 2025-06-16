#include<bits/stdc++.h>
using namespace std;

int main(){

    // Quadratic Complexity O(n^2)

    int n; // complexity O(1)
    cin >> n; // complexity O(1)

    // Big-O notation means quadratic complexity O(n*n)

    // Nested loop to print pairs (i, j) where i and j range from 1 to n
    for(int i = 1; i <= n; i++){ // Outer loop runs n times, complexity O(n)
        for(int j = 1; j <= n; j++){ // Inner loop runs n times for each iteration of the outer loop, complexity O(n)
            cout << "(" << i << ", " << j << ") "; // Each iteration of the inner loop takes constant time O(1)
        }
        cout << endl; // After each iteration of the outer loop, print a newline, complexity O(1)
    }

    // The overall time complexity of this code is O(n*n)
    // This is because the outer loop runs n times and for each iteration of the outer loop,
    // the inner loop also runs n times, resulting in n * n = n^2 iterations in total.
    // Therefore, the time complexity is O(n^2).    


    return 0;
}