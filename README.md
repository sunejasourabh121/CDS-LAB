# EXPERIMENT - 18

## Aim:
To implement stack implementation using array

## Apparatus:
Vs Code

## Theory:
- Stack is a linear data structure which follows LIFO principle. In this article, we will learn how to implement Stack using Arrays.<btr>
- In Array-based approach, all stack-related operations are executed using arrays. Let’s see how we can implement each operation on the stack utilizing the Array Data Structure.<br>
- *Push* The operation of adding an element to the top of the stack. Example: If you push 5 onto an empty stack, the stack now contains [5].<br>
- *Pop* The operation of removing the top element from the stack. Example: If you pop from a stack containing [5, 10], it removes 10 and leaves [5].<br>
- *Peek (or Top)* A function that returns the top element of the stack without removing it. This operation is not included in the initial implementation but is commonly used.<br>
- *Display* The operation to show all elements currently in the stack.

## Codes :
### 1.
```
//sourabh
//entc B2
//23070123129
//experiment 17
#include <iostream>
using namespace std;
#define size 5
#define error -9999

class stack 
{
    int top, ar[size];

public:
    stack() 
    {
        top = -1;
        ar[0]=0;
    }
    void push(int);
    int pop();
    int peak();
    void disp();
};

void stack::push(int num) 
{
    if (top == size - 1) 
    {
        cout << "Stack overflow: stack is full" << endl;
        return;
    } else 
    {
        ar[++top] = num;
    }
}

int stack::pop() {
    int val;
    if (top == -1) 
    {  // Corrected this line
        cout << "Stack underflow: stack is empty" << endl;
        return error;
    } else 
    {
        val = ar[top--];
        return val;
    }
}

int stack::peak() 
{
    if (top == -1) 
    {
        cout << "Stack underflow: stack is empty" << endl;
        return error;
    } else 
    {
        return ar[top];
    }
}

void stack::disp() 
{
    if (top == -1) 
    {
        cout << "Stack underflow: stack is empty" << endl;
        return;
    } else 
    {
        for (int i = 0; i <= top; i++) 
        {
            cout << ar[i] << " ";
        }
        cout << endl;  // Added for better output readability
    }
}

int main() 
{
    stack s1;
    s1.push(10);
    s1.push(7);
    s1.push(4);
    int val = s1.pop();
    cout << "Popped value: " << val << endl;
    int top = s1.peak();
    cout << "Top value: " << top << endl;
    cout << "Stack contents: ";
    s1.disp();
    return 0;
}
```

### 2.
```
//sourabh
//entc B2
//23070123129
//experiment 17
#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
```

### Outputs :
### 1.
![Screenshot 2024-09-27 120454](https://github.com/user-attachments/assets/ff8a349f-911d-4108-a043-1138a694f4f6)

### 2.
![Screenshot 2024-09-27 120640](https://github.com/user-attachments/assets/d67deb42-2f15-49a4-aa16-60a631e22638)
