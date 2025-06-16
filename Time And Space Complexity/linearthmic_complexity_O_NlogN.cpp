#include<bits/stdc++.h>
using namespace std;


int main(){
    // Linearithmic Complexity O(n log n)
    
    int n; // complexity O(1)
    cin >> n; // complexity O(1)
    // This is a common complexity for algorithms that involve sorting or divide-and-conquer strategies.


    // This loop runs n times, so the complexity is O(n)
    for(int i = 1; i <= n; i++){ // complexity O(n)

        for(int j = 1; j <=n; j*= 2){ // complexity O(log n)
           
            cout << "HI"; 
        }
    }   

    return 0;
}