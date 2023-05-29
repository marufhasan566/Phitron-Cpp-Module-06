#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    }
    void print()
    {
        cout << "Hello" << endl;
        cout << name << "\t" << age << endl;
    }
    int totalmarks()
    {
        return marks1 + marks2;
    }
};
int main()
{
    Person maruf("Maruf Hasan", 25, 99, 89);
    // cout << maruf.name << " " << maruf.age << endl;
    maruf.print();
    cout << maruf.totalmarks();
    return 0;
}