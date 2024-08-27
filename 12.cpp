#include <iostream>
using namespace std;

int main() {
    int sum = 0, count = 0, number;
    do {
        cin >> number;
        if (number != -1) {
            sum += number;
            count++;
        }
    } while (number != -1);

    double average = sum / count ;
    cout << "Sum: " << sum << ", Average: " << average << endl;

