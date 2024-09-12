# Experiment 15
# Aim
To study and implement Recursion

# Apparatus
Vs Code

# Theory
## Recursion

Recursion in C++ is a technique in which a function calls itself repeatedly until a given condition is satisfied. In other words, recursion is the process of solving a problem by breaking it down into smaller, simpler sub-problems.

## Recursive Function
A function that calls itself is called a recursive function. When a recursive function is called, it executes a set of instructions and then calls itself to execute the same set of instructions with a smaller input. This process continues until a base case is reached, which is a condition that stops the recursion and returns a value.

## Base Condition

The base condition is the condition that is used to terminate the recursion. The recursive function will keep calling itself till the base condition is satisfied.

## Recursive Case

Recursive case is the way in which the recursive call is present in the function. Recursive case can contain multiple recursive calls, or different parameters such that at the end, the base condition is satisfied and the recursion is terminated.








# codes

~~~
#include <iostream>
using namespace std;

int fact(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fact(n - 1);  // Recursive case
    }
}

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    int result = fact(number);
    cout << number << "! = " << result << endl;

    return 0;
}

~~~
~~~
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
~~~
~~~
#include <iostream>
#include <string>
using namespace std;

void reverse(char *str) {
    if (*str) {
        reverse(str + 1);
        cout << "%c", *str;
    }
}

int main() {
    char a[50];
    cout << "Enter a string: ";
    cin >> a;
    reverse(a);
    return 0;
}
~~~
~~~
#include <iostream>
#include <string>
using namespace std;

void reverse(char *str) {
    if (*str) {
        reverse(str + 1);
        cout << "%c", *str;
    }
}

int main() {
    char a[50];
    cout << "Enter a string: ";
    cin >> a;
    reverse(a);
    return 0;
}
~~~

# Outputs

~~~
<img width="568" alt="image" src="https://github.com/user-attachments/assets/7045191c-67d9-4c2a-8929-4e0b2eee9ff4">
~~~
~~~
<img width="568" alt="image" src="https://github.com/user-attachments/assets/a4934358-2381-46fb-997b-bacaa492bc4f">
~~~
~~~
<img width="568" alt="image" src="https://github.com/user-attachments/assets/1be89175-0c84-4777-8936-35d7427c7fa2">
~~~
~~~
<img width="568" alt="image" src="https://github.com/user-attachments/assets/d19a2c5d-3ed1-4907-9f9d-4a419125938e">
~~~











