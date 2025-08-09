#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> a;
    
    while(n--){
        int x;
        cin >> x;
        a.push(x);
    }

    int q;
    cin >> q;
    while (q--){
        int k;
        cin >> k;

        if (k == 0){
            int x;
            cin >> x;
            a.push(x);
            cout << a.top() << endl;

        } else if (k == 1){

            if (!a.empty())
                cout << a.top() << endl;
            else 
                cout << "Empty" << endl;
            
        } else if (k == 2){

            if (a.empty()){
                cout << "Empty" << endl;
                continue;
            }

            a.pop();
            if (!a.empty())
                cout << a.top() << endl;
            else
                cout << "Empty" << endl;
                
        }
    }
    return 0;
}