#include <iostream>
using namespace std;

int main() {
    int x, y; 
    cout << "Enter two numbers " << endl; 
    cin >> x >> y; 
    int gcd = 1; 
    for (int i = 2; i < min(x,y); i++)
    {
        if (x%i == 0 && y%i==0)
        {
            gcd = i;
        }
    }
   
    cout << "GCD: " << gcd ;
}
