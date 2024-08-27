#include <iostream>
using namespace std;

int main() {
    int x, y; 
    cout << "Enter two numbers " << endl; 
    cin >> x >> y; 
    int gcd = 1; 
    for (int i = min(x,y); i >1 ; i--)
    {
        if (x%i == 0 && y%i==0)
        {
            gcd = i;
            break;
        }
    }
   
    cout << "GCD: " << gcd ;
}
