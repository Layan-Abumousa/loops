#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 36;  
    int root = sqrt(n);

    if(root * root == n) {
        cout << n << " is a perfect square" << endl;
    } else {
        cout << n << " is not a perfect square" << endl;
    }

}
