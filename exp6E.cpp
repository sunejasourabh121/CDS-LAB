//Sourabh Suneja
//23070123129
//entc b2
//experiment 6
#include<iostream>
using namespace std;
int main() {
    int i = 1;
    while (i <= 10) {
        int j = 1;
        while (j <= i) {
            std::cout << j << " ";
            j++;
        }
        std::cout << std::endl;
        i++;
    }
    return 0;
}