#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    string s;
    getline(cin, s);

    while (t--){
        string st;
        getline(cin, st);
        map<string, int> a;

        stringstream ss(st);
        string word;

        int maxCount = 0;
        string mostWord;

        while (ss >> word){
            a[word]++;
            
            if (a[word] > maxCount){
                maxCount = a[word];
                mostWord = word;
            }
        }
        cout << mostWord << " " << maxCount << endl;
    }
    return 0;
}