# Experiment-
## Aim -
To study and implement C++ decision making statements loops.
## Theory -
Loops are used to make the program less repetitive and compact ny iterating a part of a program several times .Thus,they are also  called repetitive control structures.

Types of loops:-

a) *For Loop*

b) *While/Do-While Loop*

### A) For Loop -
 A "for" loop is a control flow statement used to repeat a block of code a certain number of times. 
 
 The syntax can vary slightly depending on the programming language.

 ### B) While loop:-
 A "while" loop is another type of control flow statement that repeatedly executes a code block as long as a specified condition is true. 

  You can control the flow inside a "while" loop using a break to exit the loop and continue to skip to the next iteration:

 ### C) Do-while loop:-
It executes the block of code at least once before checking the condition. Python has no built-in "do-while" loop, but you can simulate it.

You can control the flow inside a "while" loop using a break to exit the loop and continue to skip to the next iteration:

### Nested loops:-
Nested loops involve placing one loop inside another. They can be useful for handling multi-dimensional data or performing complex iterations.

Nested loops can be quite powerful but can also lead to performance issues if not used carefully, especially with large datasets or high iteration counts.



## code -
### 1.
```
// sourabh suneja
// 23070123129
// entc b2 
// experiment 6 a 
#include <iostream>

using namespace std;

int main() {
        for (int i = 1; i <= 50; ++i) {
        cout << i << " ";
    }
    return 0;
}
```

### 2.
```
sourabh suneja
// 23070123129
// entc b2 
// experiment 6 f
#include <iostream>
int main() {
    int input = 1;
    while (input <= 15) {
        std::cout << "\n" << input;
        input++;
    }
}
```
### 3.
```
sourabh suneja
// 23070123129
#include <iostream>

using namespace std;
int main() {
    int i,j,k=0,n;
    cout<<"enter number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++) {
        for (j=1;j<=(n-1);j++){
            cout<<"  ";

        }
        while (k!=(2*i-1)) {
            cout<<" * ";
            k++;
        }
        k=0;
        cout<<endl;
   }
   cout<<endl;
}
           
```

### 4.
```
sourabh suneja
// 23070123129
// entc b2 
// experiment 6 d
#include <iostream>

using namespace std;

int main() {
    int number = 1;

    do {
        cout << number << endl;
        number++;
    } while (number <= 10);

    return 0;
}
        
```
### 5.
```
sourabh suneja
// 23070123129
#include <iostream>

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
```
### 6. 
```
sourabh suneja
// 23070123129
#include <iostream>

int main() {
    for (int i = 1; i <= 1; i++) {
        for (int j = 1; j <= 10; j++) {
            std::cout << j << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
```
### 7.
```
sourabh suneja
// 23070123129

#include <iostream>

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
```

## Explanation:-
Loops allow repetitive execution of code. A for loop iterates over a sequence and is used when the number of iterations is known.

A while loop runs as long as a condition is true, useful for uncertain iteration counts.

Nested loops enable complex iteration, such as iterating over multi-dimensional arrays. Each type offers different control and flexibility for managing code flow.


## Output:-
### 1. 



## Conclusion:-
Decision-making statements like if, Elif, and else control code execution based on conditions, while loops (for and while) repeat code blocks. Combining these allows dynamic, responsive programming. For example, if statements within loops enable actions based on conditions during each iteration, efficiently handling varying data and scenarios.# CDS-LAB
