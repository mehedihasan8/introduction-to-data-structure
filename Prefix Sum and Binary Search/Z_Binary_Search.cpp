#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i = 1; i <= q; i++){
        int val;
        cin >> val;

        int l = 0, r = n - 1;
        bool found = false;

        while(l <= r){
            int mid = (l + r) / 2;

            if(arr[mid] == val){
                found = true;
                break;
            } else if(arr[mid] > val){
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        if(found){
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }
}
