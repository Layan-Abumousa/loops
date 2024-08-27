#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of grades: ";
    cin >> n;

    int sum = 0, grade;
    for (int i = 0; i < n; i++) {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grade;
        sum += grade;
    }

    double average = sum / n;
    cout << "Average: " << average << endl;

    if (average >= 90 && average <= 100) {
        cout << "Grade: A" << endl;
    }
    else if (average >= 80 && average < 90) {
        cout << "Grade: B" << endl;
    }
    else if (average >= 70 && average < 80) {
        cout << "Grade: C" << endl;
    }
    else if (average >= 60 && average < 70) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: F" << endl;
    }

}

