# Experiment 3
## Aim -
To study and implement operators in C++.
## Theory - 
Operators are special symbols used to perform operations on variables and values. 
Understanding how to use different operators is fundamental to performing calculations, assigning values, decision-making, performing logical computations, and making comparisons in programming.

### Arithmetic Operators:

These include +(addition), -(subtraction), *(multiplication), /(division), and % (modulus). They are used to perform basic mathematical operations in C++.

### Assignment Operators:

These operators are used to assign values to variables. The basic assignment operator = assigns a value to a variable, while operators like +=, -=, *=, and /= combine the particular arithmetic operation with the assignment.

### Logical operators:

These operators are used for decision-making and performing logical computations. These includes AND(&& or AND), OR(|| or OR), NOT(! or NOT), XOR(exclusive OR).

### Comparison Operators:

These include ==(equal to), !=(not equal to), >(greater than), <(less than), >=(greater than or equal to), and <=(less than or equal to). They are used to compare values and give the result as a boolean value either true or false.

## Code -
### 1.
```
//sourabh suneja
//23070123129
//entc b2
//experiment 3a
#include<iostream>
using namespace std;
int main()
{
    //arithmetic operators
    int a,b;
    int sum,subtraction,multiplication,division;
    cout<<"enter the number-";
    cin>>a>>b;
    sum=a+b;
    subtraction=a-b;
    multiplication=a*b;
    division=a/b;
    cout<<"sum="<<sum<< endl;
    cout<<"subtraction="<<subtraction<< endl;
    cout<<"multiplication="<<multiplication<< endl;
    cout<<"division="<<division<< endl;
    return 0;
}
```

### 2.
```
sourabh suneja
//23070123129
//entc b2
//experiment 3b
#include<iostream>
using namespace std;
int main()
{
    //assignment operators
    int a,b,c,d;
    cout<<"enter the value of a,b,c,d";
    cin>>a>>b>>c>>d;
    a-=3;
    b*=3;
    c/=3;
    d&=3;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c=<<"<<c<<endl;
    cout<<"d="<<d<<endl;
    return 0;
}
```

### 3.
```

sourabh suneja
//23070123129
//entc b2
//experiment 3c
#include<iostream>
using namespace std;
int main()
{
    //logical operators
     int a,b,c,d,e;
    cout<<"\nenter the first number:";
    cin>>a;
    cout<<"\nenter the second number:";
    cin>>b;
    cout<<"\n" << (a > 1 && b < 10)<<endl;
    cout<<"\n" << (a > 1 || b < 10)<<endl;
    cout <<"\n"<<(!(a >1 && b <10))<<endl;
    return 0;
}
```

### 4.
```
sourabh suneja
//23070123129
//entc b2
//experiment 3d
#include<iostream>
using namespace std;
int main()
{
    //comparison operators
    int a,b;
    cout<<"enter the values of a,b";
    cin>>a>>b;
    if(a==b)
    {
        cout<<"a==b"<<endl;
    }
   else if(a!=b)
    {
        cout<<"a!=b"<<endl;
    }
    if(a>b)
    {
        cout<<"a>b"<<endl;
    }
   else if(a<b)
    {
        cout<<"a<b"<<endl;
    }
    return 0;
}
```

## Explanation -
Arithmetic Operators: Demonstrate basic mathematical operations such as addition, subtraction, multiplication, division, and modulus.
Assignment Operators: Show how to assign values to variables using =, +=, -=, *=, /=, and %=.
logical operators: show how to perform logical computations && AND, || OR, ! NOT, exclusive OR.
Comparison Operators: Illustrate how to compare values using ==, !=, <, >, <=, and >=.

## Output -
### 1. <img width="640" alt="image" src="https://github.com/user-attachments/assets/a80abdee-a8de-4cfc-8449-15cc8842f3bb">

### 2. <img width="640" alt="image" src="https://github.com/user-attachments/assets/fc8b71e2-b66a-4f54-ae92-cc84ad39bccc">

<img width="640" alt="image" src="https://github.com/user-attachments/assets/82f48f69-37ca-4065-acc2-0b664a7c4e14">

<img width="640" alt="image" src="https://github.com/user-attachments/assets/ca771b8e-c6eb-4838-9bda-71fe2e8c2b48">









## Conclusion -
These programs provide a clear understanding of how to use various operators in C++.
Mastery of operators is essential for performing mathematical calculations, making decisions, assigning values,comparing values and controlling the flow of a program.# CDS-LAB
