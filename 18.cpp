#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1) return false;
    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) return false;
    }
    return true;
}

int main() {
    int n = 10; 
    int nextPrime = n + 1;

    for(int nextPrime = n + 1; ; nextPrime++) {  

        if(isPrime(nextPrime)) {
            
            cout << "Smallest prime number greater than " << n << " is " << nextPrime << endl;
            break;  
        }
    }
    
}
