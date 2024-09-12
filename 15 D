#include <iostream>
#include <string>

using namespace std;

void print_rev(int i) {
    if (i > 0) {
        cout << (i % 10);
        print_rev(i / 10);
    }
}

int main() {
    int a;
    cout << "enter a number: ";
    cin >> a;
    print_rev(a);
    return 0;
}
