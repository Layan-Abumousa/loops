#include <iostream>
using namespace std;

int main() {
    int a = 56, b = 98;
    while(a != b) {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    cout << "GCD: " << a << endl;
}
