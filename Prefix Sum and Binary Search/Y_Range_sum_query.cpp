#include<bits/stdc++.h>

using namespace std;    

int main(){
    int n, q;;

    cin >> n >> q;

    vector<long long int> arr(n + 1);

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    vector<long long int> pre(n + 1);

    pre[1] = arr[1];

    // pre[i] = pre[i - 1] + arr[i]
    // pre[i] is the sum of arr[1] to arr[i]

    for(int i = 2; i <= n; i++){
        pre[i] = pre[i - 1] + arr[i];
    }

    while(q--){
        int l, r;
        cin >> l >> r;

        long long int sum;

        if(l == 1) {
            // if l is 1, then sum is pre[r]
            sum = pre[r];
        } else {
            // otherwise, we can use the prefix sum array
            sum = pre[r] - pre[l - 1];
        }

        cout << sum << endl;
    }

    return 0;
}