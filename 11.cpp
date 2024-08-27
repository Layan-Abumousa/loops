#include <iostream>
using namespace std;

int main() {
    int N = 3;
    int sum = 0, num = 0;
    for(int i = 1; i <= N; i++) {
        num = num * 10 + 7;
        sum += num;
    }
    cout << sum << endl;
}
