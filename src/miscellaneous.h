#include <iostream>
#include <math.h>
using namespace std;

void factorial();
void absoluteValue();
void percentage();
void reciprocal(); // 1/x
void funcCeiling();
void funcFloor();
void round();
void fractionalPart();

bool is_miscrunning = true;

void selmiscellaneous()
{

    while(is_miscrunning)
    {
    cout<<"1. Factorial\n2. Absolute Value\n3. Percentage\n4. Reciprocal\n5. Ceiling\n6.Floor\n7. round\n8. Fractional Part\n9. Exit"<<endl;
    int usrchoice;
    cin>>usrchoice;
    switch(usrchoice)
    {
        case 1:factorial();break;;
        case 2:absoluteValue();break;
        case 3:percentage();break;
        case 4:reciprocal();break;
        case 5:funcCeiling();break;
        case 6:funcFloor();break;
        case 7:round();break;
        case 8:fractionalPart();break;
        case 9: is_miscrunning = false;break;
        default:
        {
            cout<<"please Enter a valid selection!"<<endl;
            // selmiscellaneous();
        }
    }  
    }

}

void factorial()
{
    unsigned long long fact = 1;
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    if(n<0)
    {
        cout<<"Factorial Doesnt exist for negative number!"<<endl;

    }else if(n)
    {

    }else{
        for(int i =1;i<=n;i++)
        {
            fact *= i;
        }
        cout<<"Result: "<<endl;
    }
}

void absoluteValue()
{
    cout<<"Enter the number: "<<endl;
    double a = 0;cin>>a;
    cout<<"Result"<<abs(a)<<endl;
}

void percentage()
{
    
    double total, percent;
    cout << "Enter the total amount: " << endl;
    cin >> total;
    
    cout << "Enter the percentage you want to find: " << endl;
    cin >> percent;
    double result = total * (percent / 100.0);
    
    cout << percent << "% of " << total << " is: " << result << endl;

}
void reciprocal()
{
    cout<<"Enter the number: "<<endl;
    double a=0;cin>>a;
    a = 1/a;
    cout<<"Result: "<<a<<endl;
}

void funcCeiling()
{
    cout<<"Enter the number: "<<endl;
    double a = 0;cin>>a;
    cout<<"Result; "<<ceil(a)<<endl;
}
void funcFloor()
{
    cout<<"Enter the number: "<<endl;
    double a = 0;cin>>a;
    cout<<"Result: "<<floor(a)<<endl;

}

void round()
{
    cout<<"Enter the number: "<<endl;
    double a = 0;cin>>a;
    cout<<"Result: "<<round(a)<<endl;

}
void fractionalPart()
{
    
}
// fractional part remaining