#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int id;

        Student(string name, int id) {
            this->name = name;
            this->id = id;
        }
};

class cmp {
    public:
        bool operator()(Student a, Student b) {
            
            if (a.name > b.name) 
                return true;   

            else if (a.name < b.name) 
                return false;

            return a.id < b.id;
        }
};

int main() {
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq;

    while (n--) {
        string name;
        int id;
        
        cin >> name >> id;
        pq.push(Student(name, id));
    }

    while (!pq.empty()) {
        cout << pq.top().name << " " << pq.top().id << endl;
        pq.pop();
    }

    return 0;
}
