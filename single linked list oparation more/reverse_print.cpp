#include<bits/stdc++.h>
using namespace std;

void rec(int i, int n){
    if(i > n) return;
    rec(i + 1, n);
    cout << i << " ";
}

int main(){
    int n = 5;
    rec(1, n);
    return 0;
}