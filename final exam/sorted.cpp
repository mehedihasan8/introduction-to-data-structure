#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> a;
        
        while(n--){
            int x;
            cin >> x;
            a.insert(x);
        }
        
        for (auto it = a.begin(); it != a.end(); it++){
            cout << *it << " ";
        }
        
        cout << endl;
    }
    return 0;
}