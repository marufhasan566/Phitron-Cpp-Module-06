#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person maruf("Maruf Hasan", 25);
    cout << maruf.age << " " << maruf.name << endl;
    return 0;
}