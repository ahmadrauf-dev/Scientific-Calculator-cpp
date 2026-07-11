#include <iostream>
#include <math.h>
#include <string>
#include "arithmatic.h"
#include "trignometry.h"
#include "powerroots.h"
#include "logarithmexponential.h"
#include "miscellaneous.h"
#include "numbertheory.h"

using namespace std;
void mainmenu();
void mainmenu()
{
    int usrchoice;
    cout<<"Enter a Selection\n1.Arithmatic\n2.Power & Roots\n3.Power & Roots\n4.Logarithm & Exponential\n5.Miscellaneous Math"<<endl;
    cin>>usrchoice;
    switch(usrchoice)
    {
        case 1: selarithmatic() ; break;
        case 2: seltrignometry() ; break;
        case 3: selpowerroot() ; break;
        case 4: sellogarithexponential() ; break;
        case 5: selmiscellaneous() ; break;
        case 6: selNumberTheory() ; break;
        default : 
        {

            cout<< "===Please Enter a Valid Selection:===" <<endl;
            mainmenu();
        } 
    }
}

int main()
{

    std::cout<<"=========Scientific Calculator========"<<std::endl;
    
    mainmenu();


}