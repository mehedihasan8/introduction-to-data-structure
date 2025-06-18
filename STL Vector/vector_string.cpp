#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<string> v1(n); // vector of strings with size n

    for(int i = 0; i < n; i++){
        cin >> v1[i]; // input each string into the vector
    }

    // Output the elements of the vector

    for(string s : v1){
        cout << s << " "; // print each string followed by a space
    }

    return 0;
}