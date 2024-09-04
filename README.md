# To study and implement Pointer Operations (Call by value and Call by reference

### Aim  
To study and implement Pointer Operations (Call by value and Call by reference). 

### Software Used 
VS Code 

### Theory 
Pointers are symbolic representations of addresses.  <br> 
We can pass arguments to funtions using different methods mainly call by value and call by reference. <br> 
##### Call by value 
In the call-by-value method, function arguments are passed by copying the value of the actual parameter, ensuring the original values remain unchanged. <br> 
The value is copied to the formal parameter. <br> 
Any changes made to the parameters within the function do not change the original values outside the function. <br> 
##### Call by reference 
In the call-by-reference method, the memory address (reference) of the actual parameter is passed to the function, allowing direct access and modification of the original values. <br> 
The actual and the formal parameters point to the same memory address.  <br>                                                         
Any changes made to the parameters within the function are directly reflected in the original values outside the function. <br> 

### Code 

(A) <br> 
```
// Printing the values by using callby value 

#include<iostream> 
using namespace std; 
void swap(int x, int y) 
{
    int swap;
    swap=x;
    x=y;
    y=swap;
}

int main() 
{
    int a=4, b=7;
    swap(a,b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
}

```

(B) <br> 
```
// Swapping the values 

#include<iostream> 
using namespace std; 
void swap(int *x, int *y) 
{
    int *swap;
    swap=x;
    x=y;
    y=swap;
}

int main() 
{
    int a=4,b=7;
    swap(a,b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
} 
```

(C) <br> 
```
// Swapping the values using call by reference  

#include<iostream> 
using namespace std; 
void swap(int *x, int *y) 
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}

int main() 
{
    int a=4,b=7;
    swap(&a,&b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
}
```

### Output 

(A) <br> 
![](https://github.com/Shloka-Patel/Experiment---10/blob/main/Output_10A.png) 

(B) <br> 
![](https://github.com/Shloka-Patel/Experiment---10/blob/main/Output_10B.png) 

(C) <br> 
![](https://github.com/Shloka-Patel/Experiment---10/blob/main/Output_10C%20.png) 

### Conclusion  
I learnt about pointers and how to pass arguments to functions using call by value and call by reference methods. I also learnt how to swap values using call by reference. 
