#include <iostream>
#include <string>
using namespace std;
int main()
{
    string output;
    for(int i=1; i<=100; i++){
        output="";
        if(i%3 == 0) {
            output+="Foo";
        }
        if(i%5 == 0) {
            output+="Baa";
        }
    if (output!=""){
        cout << output;
    }else{
        cout << i;
    }
    cout << endl;
    }

    return 0;
}
