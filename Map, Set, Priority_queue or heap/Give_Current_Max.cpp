#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mark;
    Student(string name, int roll, int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};
class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.mark < r.mark)
            return true;
        else if (l.mark > r.mark)
            return false;
        else
        {
            if (l.roll > r.roll)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int a, b;
        cin >> s >> a >> b;
        Student obj(s, a, b);
        pq.push(obj);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int b;
        cin >> b;
        if (b == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
        else if (b == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
        else
        {
            int c, d;
            string s;
            cin >> s >> c >> d;
            Student Obj(s, c, d);

            pq.push(Obj);
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
    }

    return 0;
}