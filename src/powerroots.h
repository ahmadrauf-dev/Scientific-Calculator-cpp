#include <iostream>
#include <math.h>

using namespace std;

//function declarations

void raisetopower();
void square();
void squareroot();
void cuberoot();
void hypotenuse();

void selpowerroot()
{
    cout<<"1.Raise To Power\n2.Square\n3.Square root\n4.Cube root\n5.Hypotenuse"<<endl;
    int usrchoice;
    cin>>usrchoice;
    switch(usrchoice)
    {
        case 1: raisetopower();break;
        case 2: square();break;
        case 3: squareroot();break;
        case 4: cuberoot();break;
        case 5: hypotenuse();break;
        default: cout<<"Please Enter a Valid Selection:"<<endl;
    }
}

void raisetopower()
{
    double a=0;
    cout<<"Enter the base: "<<endl;
    cin>>a;
    cout<<"Enter the Exponent: "<<endl;
    double b = 0;cin>>b;
    if(a==0&&b<0)
    {
        cout<<"Math Error!"<<endl;
    }else{
        cout<<pow(a,b)<<endl;
    }
    

}

void square()
{
    cout<<"Enter the number you want to take square of:"<<endl;
    double a = 0;cin>>a;
    cout<< a*a<<endl;
}

void squareroot()
{
    cout<<"Enter the Number: "<<endl;
    double a = 0;cin>>a;
    if(a<0)
    {
        cout<<"Math Error"<<endl;

    }else
    {
        cout<<sqrt(a)<<endl; 
    }
    
}

void cuberoot()
{
    cout<<"Enter the number you want to take cube root of: "<<endl;
    double a = 0;
    cin>>a;
    cout<<cbrt(a)<<endl;
}
void hypotenuse()
{
    cout<<"Enter the value of base: "<<endl;
    double a = 0;cin>>a;
    cout<<"Enter the value of Perpendicular: "<<endl;
    double b = 0;cin>>b;
    cout<<hypot(a,b)<<endl;
}
