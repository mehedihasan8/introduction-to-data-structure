#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int marks;

        Student(string name, int roll, int marks){
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};

class cmp{
    public:
        bool operator()(Student l, Student r){
           
            if (l.marks == r.marks)
                return l.roll > r.roll;

            return l.marks < r.marks;
        }
};

int main(){
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> a;

    while(n--) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        
        Student s(name, roll, marks);
        a.push(s);
    }

    int q;
    cin >> q;

    while (q--) {
        int k;
        cin >> k;
        if (k == 0){
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;

            Student p(name, roll, marks);
            a.push(p);
            Student s = a.top();
            cout << s.name << " " << s.roll << " " << s.marks << endl;
        
        } else if (k == 1) {

            if (!a.empty()){
                Student s = a.top();
                cout << s.name << " " << s.roll << " " << s.marks << endl;
            } else
                 cout << "Empty" << endl;
            
        } else if (k == 2){

            if (a.empty()){
                cout << "Empty" << endl;
                continue;
            }

            a.pop();

            if (!a.empty()){
                Student s = a.top();
                cout << s.name << " " << s.roll << " " << s.marks << endl;
            } else
                  cout << "Empty" << endl;
        }
    }

    return 0;
}