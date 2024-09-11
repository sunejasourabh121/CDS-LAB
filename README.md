# To study and implement Constructor Overloading         

#### Aim 
To study and implement Constructor Overloading. 

#### Software                      
Visual Studio Code 

#### Theory  
Constructor Overloading in C++ means that we have more than one constructor ina class with the same name, as long as each have a different list of arguments. <br> 
A constructor is called depending upon the number and type of arguments passed. <br>                 
While creating the object, arguments must be passed to let compiler know, which constructor needs to be called. <br> 

#### Code 
(A) <br> 
```
// NAME -Sourabh
// PRN - 23070123129
// EXPERIMENT - 13(A) 

# include<iostream>
using namespace std;

class Room
{
    private:
    double length;
    double breadth;

    public:
    Room()                             // Constuctor with no argument 
    {
        length=7.8;
        breadth=5.1;
    }
    Room(double l, double b)      // Constructor with two arguments 
    {
        length=l;
        breadth=b;
    }
    Room(double len)         // Constructor with one argument                 
    {
        length = len;
        breadth=6.3;
    }

    double calculateArea() 
    {
        return length*breadth;
    }
};

int main() 
{
    Room room1, room2(8.2,6.6),room3(8.2);
    cout<<"When no argument is passed: "<<"endl";
    cout<<"Area of room="<<room1.calculateArea()<<endl;
    cout<<"nWhen (8.2,6.6) is passed: "<<endl;
    cout<<"Area of room = "<<room2.calculateArea()<<endl;
    cout<<"nWhen breadth is fixed to 6.3 and (8.2) is passed."<<endl;
    cout<<"Area of room = "<<room3.calculateArea()<<endl;

    return 0;
} 
```

(B) <br> 
```
// NAME -Sourabh
// PRN - 23070123129
// EXPERIMENT -13(B) 

#include<iostream>
using namespace std;

class fetch
{
    int num;
    public:
    fetch()
    {
        num = 3;
    }
    fetch(int x)
    {
        num = x;
    }
    fetch(fetch &b)
    {
        num = b.num;
    }
    void disp()
    {
        cout << num << endl;
    }
};

int main()
{
    fetch f1, f2(6), f3(f1);
    f1.disp();
    f2.disp();
    f3.disp();

    return 0;
}
``` 
#### Output  
(A) <br>
![](https://github.com/Shloka-Patel/Experiment---13/blob/main/Output_13A.png) 

(B) <br> 
![](https://github.com/Shloka-Patel/Experiment---13/blob/main/Output_13B.png) 

