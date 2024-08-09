//Sourabh Suneja
//23070123129
//entc b2
//experiment 6
#include<iostream>
using namespace std;
int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            std::cout << j << " ";
            j++;
        } while (j <= 10);
        i++;
    } while (i <= 1);
    std::cout << std::endl;
    return 0;
}