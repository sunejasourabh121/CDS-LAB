// NAME - Sourabh
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

// OUTPUT 
// When no argument is passed: endlArea of room=39.78
// nWhen (8.2,6.6) is passed: 
// Area of room = 54.12
// nWhen breadth is fixed to 6.3 and (8.2) is passed.
// Area of room = 51.66    