#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr1(n);
    
    for(int i = 0; i<n; i++){
        cin >> arr1[i];
    }
    
    int m;
    cin >> m;
    
    vector<int> arr2(m);
    
    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }
    
    int x;
    
    cin >> x;
    
    arr1.insert(arr1.begin() + x, arr2.begin(), arr2.end());
    
    for(int x : arr1){
        cout << x << " ";
    }
    

    return 0;
}