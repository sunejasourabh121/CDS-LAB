# To study and implement Classes and Objects

# Aim 
To study and implement Classes and Objects.  

# Software 
VS Code 

# Theory 
Class -> A class is a usser-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. <br> 

Object-> When a class is defined, only the specification for the object is defined, no memory or storage is allocated. To use the data and access functions defined in the clss, we need to create objects. <br> 

In C++, there are three access specifiers that are: <br> 
(1) Public: Members declared as public can be accessed from outside the class. <br> 
(2) Private: Members declared as private can only be accessed within the class itself. <br>  
(3) Protected: Members declared as protected cn be accessed within the class and by derived classes. <br>         

# Code 

(A) <br> 
```

# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h = 2.0;
    double b = 3.0;
    double l = 4.0;
};
int main()
{
  cuboid c1;
  double vol = c1.h * c1.b * c1.l;
  cout<<"Volume "<<vol<<endl;
}
```

(B) <br> 
```
# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h = 2.0,b = 3.0,l = 4.0;
    double volume()
    {
        double vol = h * b * l;
        cout<<"Volume "<<vol<<endl;
    }

};
int main()
{
    cuboid c1;
    c1.volume();
  
}
```

(C) <br> 
```
# include<iostream>
using namespace std;
class cuboid
{
    private:
    double h = 3.0,b = 2.0,l = 4.0;
    public:
    double volume()
    {
        double vol;
        vol = h * b * l;
        cout<<"Volume "<<vol<<endl;
    }

};
int main()
{
    cuboid c1;
    c1.volume();
  
}
```

(D) <br> 
```
# include<iostream>
using namespace std;
class cuboid
{
    private:
    double h = 2.0,b = 3.0,l = 4.0;
    public:
    double volume()
    {
        double vol;
        vol = h * b * l;
        return vol;
    }

    void disp(double vol)
    {
        cout<<"Volume "<<vol<<endl;

    }

};
int main()
{
    cuboid c1;
    double v = c1.volume();
    c1.disp(v);
  
}

```

(E) <br> 
```
# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h,b,l;
    void input()
    {
        cout<<"Enter the length: ";
        cin>>l;
        cout<<"Enter the breadth: ";
        cin>>b;
        cout<<"Enter the height: ";
        cin>>h;
    }
    double volume()
    {
        double vol;
        vol = h * b * l;
        return vol;
    }

    void disp(double vol)
    {
        cout<<"Volume "<<vol<<endl;

    }

};
int main()
{
    cuboid c1;
    c1.input();
    double v = c1.volume();
    c1.disp(v);
  
}
```

# Output 

(A) <br> 
![](https://github.com/Shloka-Patel/Experiment---11/blob/main/Output_11A.png)

(B) <br> 
![](https://github.com/Shloka-Patel/Experiment---11/blob/main/Output_11B.png) 

(C) <br> 
![](https://github.com/Shloka-Patel/Experiment---11/blob/main/Output_11C.png) 

(D) <br> 
![](https://github.com/Shloka-Patel/Experiment---11/blob/main/Output_11D.png) 

(E) <br> 
![](https://github.com/Shloka-Patel/Experiment---11/blob/main/Output_11E.png)

# Conclusion 
In this experiment, i learnt about classes and objects in C++ and performed programs using them and also learnt about local variables and global variables. 
