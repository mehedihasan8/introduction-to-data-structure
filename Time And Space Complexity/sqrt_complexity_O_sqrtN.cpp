#include<bits/stdc++.h>
using namespace std;

int main() {

    // Square Root Complexity O(√n)
    int n; // complexity O(1)
    cin >> n; // complexity O(1)
    

    
    // find divisors of n using square root complexity O(√n)

    for(int i = 1; i <= sqrt(n); i++){ // complexity O(√n

        cout << i << " " << n/i << endl; // complexity O(1)

    }

    // find divisors of n using square root complexity O(√n)

    for(int i = 1; i* i <= n; i++){ // complexity O(√n
        if(n % i == 0){ // complexity O(1    
            cout << i << " " << n/i << endl; // complexity O(1)
        }
    }

    return 0;
}