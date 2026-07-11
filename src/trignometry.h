#include <iostream>
#include <math.h>
using namespace std;
//function declarations
void tcos();
void tsin();
void ttan();
void tacos();
void tasin();
void tatan();
void tatan2();
void tcosh();
void tsinh();
void ttanh();
void tacosh();
void tasinh();
void tatanh();

double pi = 3.14;
void seltrignometry()
{

    //printing available functions 
    cout<<"1.cosine\n2.sine\n3.Tangent\n4.Arc cosine\n5.Arc sine\n6.Arc tangent"<<endl;
    //funtion accoring to usr coice 
    int usrchoice;
    cin>>usrchoice;
    switch(usrchoice)
    {
        case 1 : tcos() ;break;
        case 2 : tsin() ;break;
        case 3 : ttan() ;break;
        case 4 : tacos();break;
        case 5 : tasin();break;
        case 6 : tatan();break;
        default: cout<<"Please Enter a valid selection:"<<endl;
    }


}
//function definitions 
void tcos()
{

    cout<<"Enter the number"<<endl;
    double a;cin>>a;
    a = a * (pi/180);
    cout<<"The cosine is: "<<cos(a);

}
void tsin()
{

    cout<<"Enter the number"<<endl;
    double a;cin>>a;
    a = a * (pi/180);
    cout<<"Result: "<<sin(a);

}
void ttan()
{

    cout<<"Enter the number"<<endl;
    double a;cin>>a;
    a = a * (pi/180);
    cout<<"Result: "<<tan(a);

}
void tacos()
{

    cout<<"Enter the number"<<endl;
    double a;cin>>a;
    a = a * (pi/180);
    cout<<"Result: "<<acos(a);

}
void tasin()
{

    cout<<"Enter the number"<<endl;
    double a;cin>>a;
    a = a * (pi/180);
    cout<<"Result: "<<asin(a);

}
void tatan()
{

    cout<<"Enter the number"<<endl;
    double a;cin>>a;
    a = a * (pi/180);
    cout<<"Result: "<<atan(a);

}
// function are remainig to intigrate complete these first and test them and add the after that
// void tatan2()
// {

//     cout<<"Enter the number"<<endl;
//     int a;cin>>a;
//     cout<<"Result: "<<atan2(a);

// }

