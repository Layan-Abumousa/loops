#include <iostream>
using namespace std;

int main() {
    int count = 0, sum = 0, num = 2;
    while(count < 100) {
        bool isPrime = true;
        for(int i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            sum += num;
            count++;
        }
        num++;
    }
    cout << "Sum of the first 100 prime numbers: " << sum << endl;
}
