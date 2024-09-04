//SOURABH SUNEJA
//23070123129
// EXPERIMENT -- 11(D) 

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

// Output  
// Volume 24        
