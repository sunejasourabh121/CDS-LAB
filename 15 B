#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    int result = sum(number);
    cout << "Sum = " << result << endl;

    return 0;
}
