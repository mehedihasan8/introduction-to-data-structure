#include<bits/stdc++.h>
using namespace std;

int main(){


    // Logarithmic Complexity O(log n)


    int n; // complexity O(1)
    cin >> n; // complexity O(1)


    // complexity O(log n). hoy loop ar increment ba decrement ar
    // uper base kore log n hoy ( i* 2 ba i/2)

    //example ------ 1 : 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, ...
    
    for(int i = 1; i <= n; i * = 2){ // complexity O(log n

        cout << i << " "; // complexity O(1)

    }

    // example ------ 2 : 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1
    // i /= 2 means divide by 2 in each iteration
    // this is also logarithmic complexity O(log n)

    for(int i = n; i >= 1; i /= 2){ // complexity O(log n)

        cout << i << " "; // complexity O(1)

    }



    return 0;
}