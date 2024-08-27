#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1) 
       return false;

    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) return false;
    }
    return true;
}

int main() {
    int n ;  
    cin >> n;
    int largestPrimeFactor = -1;

    for(int i = 2; i <= n; i++) {
        if(n % i == 0 && isPrime(i)) {
            largestPrimeFactor = i;
            n /= i;
            i = 1;  
        }
    }

    cout << "Largest prime factor: " << largestPrimeFactor << endl;
}
