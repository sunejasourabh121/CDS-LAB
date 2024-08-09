# Experiment 4
## Aim - 
To study and implement C++ bitwise operators.
## Theory - 
Bitwise operators are used to perform operations on individual bits of data. They are essential for tasks that involve low-level programming, such as manipulating binary data and performing bitwise arithmetic.
The common bitwise operators in C++ include AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>).

### Bitwise AND (&)-

Performs a bitwise AND operation between two integers. If both the bits are 1 then the result of the operation is 1 otherwise the result bit is 0.

### Bitwise OR (|)-

Performs a bitwise OR operation. If at least one of the bits is 1 then the result of the operation is 1.

### Bitwise XOR (^)-

Performs a bitwise XOR (exclusive OR) operation. If both the bits are different the result of the operation is 1 otherwise the result bit is 0.

### Bitwise NOT (~)-

Performs a bitwise NOT operation, also known as a bitwise complement. It inverts all the bits. The result of the bit is complimentary to itself, for example, if a bit is 1 its result bit is 0.

### Left Shift (<<)-

Shifts the bits of the left operand to the left by the number of positions specified by the right operand. The new bits on the right are set to 0.

### Right Shift (>>)-

Shifts the bits of the left operand to the right by the number of positions specified by the right operand. The behavior of the leftmost bits depends on whether the type is signed or unsigned.
## Code - 
### 1.
```
//sourabh suneja
//2370123129
//entc b2
// experiment 4
#include<iostream>
using namespace std;
int main()
{
    int a=5;  //101
    int b=3;  // 011
    //bitwise AND
    int bitwise_and =a&b;
    int bitwise_or =a| b;
    int bitwise_xor =a ^b;
    int bitwise_not =-a;
    int left_shift =a<<2;
    int right_shift =a>> 1;
    cout<<"AND:"<<bitwise_and<<endl;
    cout<<"OR:"<<bitwise_or<<endl;
    cout<<"XOR:"<<bitwise_xor<<endl;
    cout<<"NOT a:"<<bitwise_not<<endl;
    cout<<"Left shift:"<<left_shift<<endl;
    cout<<"Right shift:"<<right_shift<<endl;
    return 0;
}
```

## Explanation -
Bitwise operators perform operations on the individual bits of data. They include:

AND (&):- Sets each bit to 1 if both bits are 1.

OR (|):- Sets each bit to 1 if at least one bit is 1.

XOR (^):- Sets each bit to 1 if only one bit is 1.

NOT (~):- Inverts all the bits.

Left Shift (<<):- Shifts bits to the left, filling with 0s.

Right Shift (>>):- Shifts bits to the right, filling with 0s (logical shift).

## Output -
### 1.

## Conclusion -
Bitwise operators provide low-level data manipulation capabilities. 
They are essential for optimizing algorithms and are commonly used in areas such as graphics, cryptography, and systems programming.# CDS-LAB
