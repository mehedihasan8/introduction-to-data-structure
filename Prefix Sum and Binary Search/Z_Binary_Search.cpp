#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, q;
    cin >> n >> q;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    while(q--){

        int x;
        cin >> x;

        bool found = false;

        for(int i = 0; i<n; i++){
            if(arr[i] ==x){
               found = true;
               break;
            } 
        }

        if(found){
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }

    }


}