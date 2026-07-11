#include <iostream>
#include <math.h>
using namespace std;
//declarations
void naturalLog();
void logBase10();
void exponential();
void tenRaisedToPowerOfx();

bool is_running = true; 
//def
void naturalLog()
{
    cout<<"Enter the Value: "<<endl;
    double a;cin>>a;
    if(a<=0)
    {
        cout<<"Math Error"<<endl;
    }else{
        cout<<log(a)<<endl;
    }
    
}
void logBase10()
{
    cout<<"Enter the Value: "<<endl;
    double a;cin>>a;
        if(a<=0)
    {
        cout<<"Math Error"<<endl;
    }else{
        cout<<log10(a)<<endl;
    }
}
void exponential()
{

    cout<<"Enter the Value: "<<endl;
    double a;cin>>a;
    if(a>709)
    {
        cout<<"Math Error : Result is too large"<<endl;
    }else
    {
        cout<<exp(a)<<endl;
    }
    
}
//10^x
void tenRaisedToPowerOfx()
{

    cout<<"Enter the Value Of X: "<<endl;
    double a=0;cin>>a;
    if(a>308)
    {
        cout<<"Math Error : Result is too large!"<<endl;

    }else if(a<-323)
    {
        cout<<"Math Error : Result is too small!"<<endl;
    }else
    {
        cout<<pow(10,a)<<endl;
    }
    
}
void sellogarithexponential()
{
    while(is_running)
    {
       cout<<"1. Natural Log\n2. Common Logarithm\n3. Exponential\n4. 10^x\n5. Exit"<<endl;
    int usrchoice;
    cin>>usrchoice;
    switch(usrchoice)
    {
        case 1:naturalLog();break;
        case 2:logBase10();break;
        case 3:exponential();break;
        case 4:tenRaisedToPowerOfx();break;
        case 5:is_running = false;break;
        default:{
            cout<<"Please Enter a Valid Selection: "<<endl;
            
        }

    } 
    }

}