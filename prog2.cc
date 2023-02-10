/*
 * File: prog1.cc
 * Author: Troy Gentry
 * Date: 2/10/2023
 * Description: Wage Plan
 * Email:  tg767621@ohio.edu
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//constant
const double RATE = 5.50;
const double hours = 40;
//varaibles
double sales;
double planA;
double planB;

int main()
{

    //Sets the amount of #s behind the decmial to 2
    cout << fixed << setprecision(2) <<endl;

    // promte user weekly sales
    cout << "Enter The weekly sales amount: ";
    cin >> sales;

    //varable equations
    planA = (sales * .1) + (RATE * hours);
    planB = (sales * .15);

   
    //
    cout << "Amount of sales  " << sales << endl
         << "Plan 1 pays $" << planA << endl
         << "Plan 2 pays $" << planB << endl;

    if (planA > planB)
    {
        cout << "Plan 1 is better"<<endl;
    }
    else if (planA < planB)
    {
        cout << "Plan 2 is better"<<endl;
    }
    else
    {
        cout << "Plan 1 = Plan 2 "<<endl;
    }

    return (EXIT_SUCCESS);
}
