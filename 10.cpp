#include <iostream>
using namespace std;

int main() {
    int base = 2, exponent = 3;
    int result = 1;
    for(int i = 1; i <= exponent; i++) {
        result *= base;
    }
    cout << result << endl;
}
