# Experiment-5
## Aim -
To study and implement C++ decision making statements.
## Theory -
Decision-making statements control the flow of a program based on conditions. Key types include:
### 1. *If-Else Statement*:
Executes one block if the condition is true, another if false.
### 2.*Nested if-else statements*:
these are used when you need to check multiple conditions in a hierarchical manner. An if or else block can contain another if-else statement inside it. This is useful for more complex decision-making processes.
### 3. *calculator statement*:
it is used for doing mathematical calculations among some given values.
### 4. *Switch Case Statement*: 
Used in some languages to handle multiple conditions, mimicked in Python using dictionaries.

## code -
### 1.
```
//sourabh suneja
//23070123129
//entc b2
#include <iostream>
using namespace std;
int main() 
{
    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;
    else if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;
    else 
        cout << "Largest number: " << n3;
        return 0;
}
```

### 2.
```
//sourabh suneja
//23070123129
//entc B2
//experiment 5
#include <iostream>
using namespace std;
int main() 
{
    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if (n1 >= n2) 
    {
        if (n1 >= n3)
            cout << "Largest number: " << n1;
        else
            cout << "Largest number: " << n3;
    }
    else {
        if (n2 >= n3)
            cout << "Largest number: " << n2;
        else
            cout << "Largest number: " << n3;
    }
    return 0;
}
```

### 3.
```
//sourabh suneja
//23070123129
//entc B2
//experiment 5
#include<iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Error! The operator is not correct" << endl;
            break;
    }

    return 0;
}
```

### 4.
```
//sourabh suneja
//23070123129
//entc B2
//experiment 5
#include<iostream>
using namespace std;

int main()
{
    int choice;
    cout << "1. " << endl
         << "2. " << endl
         << "3." << endl
         << "4. " << endl
         << "5. " << endl
         << "6. " << endl
         << "7. " << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Wrong Input" << endl;
            break;
    }
    
    return 0;
}
```

## Explanation:-
*if else*: statement for executing a block if it is true otherwise for false.

*nested if else*: are used when you need to check multiple conditions hierarchically.

*calculator statement*:is used for doing mathematical calculations among some given values.

*Switch Case Statement*: Used in some languages to handle multiple conditions, mimicked in Python using dictionaries.

## Output:-
### 1.<img width="640" alt="image" src="https://github.com/user-attachments/assets/775e8857-7f34-4ca8-bf09-0b0de655c2b0">
<img width="640" alt="image" src="https://github.com/user-attachments/assets/1499ecfb-9a91-4c20-9e68-e4bc10e4c9f0">
<img width="640" alt="image" src="https://github.com/user-attachments/assets/8654c735-ebf9-41f1-813d-ba8292c59d81">
<img width="640" alt="image" src="https://github.com/user-attachments/assets/8e52b4f3-017a-4624-b54d-41355779065d">





## Conclusion:-
Decision-making statements in programming control the flow of execution based on conditions. The if-else statement executes different code blocks depending on whether a condition is true or false, while the nested if else statement allows for multiple conditions to be checked in sequence. The switch statement provides a way to select one of many code blocks to execute based on the value of an expression, ideal for handling discrete values. calculator helps in doing mathematical operations.# CDS-LAB
