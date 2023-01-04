#include <iostream>
using namespace std;
int main()
{
    char p = 0;
    for(int i=1; i<=100; i++)
    {
        p = 0;
        if(!(i%3)) {
            cout << "Foo";
            p = 1;
        }
        if(!(i%5)) {
            cout << "Baa";
            p = 1;
        }
        if(!p)
        {
            cout << i;
        }
    cout << endl;
    }
    return 0;
}
