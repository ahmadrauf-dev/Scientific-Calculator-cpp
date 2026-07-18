#include <iostream>
#include <math.h>
#include <string>
#include "arithmatic.h"
#include "trignometry.h"
#include "powerroots.h"
#include "logarithmexponential.h"
#include "miscellaneous.h"
#include "numbertheory.h"
#include "StatisticalFunctions.h"

using namespace std;
void mainmenu();
void mainmenu()
{
    int usrchoice;
    cout<<"Enter a Selection\n1.Arithmatic\n2.Power & Roots\n3.Power & Roots\n4.Logarithm & Exponential\n5.Miscellaneous Math\n6.Number Theory\n7.Statistical Functions"<<endl;
    cin>>usrchoice;
    switch(usrchoice)
    {
        case 1: selarithmatic() ; break;
        case 2: seltrignometry() ; break;
        case 3: selpowerroot() ; break;
        case 4: sellogarithexponential() ; break;
        case 5: selmiscellaneous() ; break;
        case 6: selNumberTheory() ; break;
        case 7: selStatisticalFunc() ; break;
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