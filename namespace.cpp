#include <bits/stdc++.h>
using namespace std;
namespace Maruf
{
    int age = 25;
    void hello()
    {
        printf("Namespace of Maruf\n");
    }
};
namespace Hasan
{
    int age2 = 24;
    void hello()
    {
        printf("Namespace of Hasan\n");
    }
};
using namespace Maruf;
// using namespace Hasan;
int main()
{
    cout << age << endl;
    hello();
    Hasan::hello();
    // cout << age2 << endl;
    return 0;
}