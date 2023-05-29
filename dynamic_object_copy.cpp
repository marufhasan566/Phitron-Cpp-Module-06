#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->age = age;
        this->name = name;
    }
};
int main()
{
    Person *maruf = new Person("Maruf Hasan", 25);
    Person *rayhan = new Person("Monjur Rayhan", 24);
    *maruf = *rayhan;
    delete rayhan;
    cout << maruf->age << " " << maruf->name << endl;
    // cout << rayhan->name << " " << rayhan->age << endl;
    return 0;
}