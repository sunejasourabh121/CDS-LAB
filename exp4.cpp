//Sourabh Suneja
//23070123129
//entc b2
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