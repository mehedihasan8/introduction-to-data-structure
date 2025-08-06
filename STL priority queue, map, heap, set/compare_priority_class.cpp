#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int mark;

    Student(string name, int roll, int mark){
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};

class cmp{
    public:
        bool operator()(Student l, Student r){
            if(r.mark < l.mark) 
                return true;
            else
                return false;
        }
};

int main(){
    priority_queue<Student , vector<Student>, cmp> pq;

    int n;
    cin >> n;

    while(n--){
        string name;
        int roll, mark;

        cin >> name >> roll >> mark;

        Student obj{name, roll, mark};

        pq.push(obj);
    }

    while(!pq.empty()){
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        pq.pop();
    }

    return 0;
}