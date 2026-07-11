#include <iostream>
#include <math.h>
using namespace std;
void sum();
void subtract();
void multiply();
void devide();
void modulus1();

void selarithmatic()
{
    int usrchoice;
    cout<<"1.Sum\n2.Subtract\n3.multiply\n4.Devide\n5.Modulus"<<endl;
    cin>>usrchoice;
    switch(usrchoice)
    {
        case 1: sum() ; break;
        case 2: subtract() ; break;
        case 3: multiply() ; break;
        case 4: devide() ; break;
        case 5: modulus1() ; break;
        default :{

            cout<< " Please Enter a Valid number:" <<endl;
            selarithmatic();
        } 
    }
}
void sum()
{
 
    int a,b;
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    cout<<"Enter the scond number:"<<endl;
    cin>>b;
    cout<<"Sum: "<<a + b<<endl;selarithmatic();

}
void subtract()
{
 
    int a,b;
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    cout<<"Enter the scond number:"<<endl;
    cin>>b;
    cout<<"Result: "<<a - b<<endl;selarithmatic();

}
void devide()
{
 
    int a,b;
    cout<<"Enter the Divident:"<<endl;
    cin>>a;
    cout<<"Enter the Devisor:"<<endl;
    cin>>b;

    if(b==0)
    {
        cout<<"Math Error"<<endl;selarithmatic();
    }else
    {

        cout<<"Result: "<<a / b<<endl;selarithmatic();
    }
    

}
void multiply()
{
 
    int a,b;
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    cout<<"Enter the scond number:"<<endl;
    cin>>b;
    cout<<"Result: "<<a * b<<endl;selarithmatic();

}
void modulus1()
{
 
    int a,b;
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    cout<<"Enter the scond number:"<<endl;
    cin>>b;
    if(a<0||b<0)
    {
        cout<<"Number cannot be Negative:"<<endl;modulus1();
    }if(b==0)
    {
        cout<<"Math Error"<<endl;selarithmatic();
    }else{

        cout<<"Result: "<<a % b<<endl;selarithmatic();
    }
    

}
