 /*
    Steven O' Brien
    06/11/17
    Exercise 10
    555 Timer Astable Multivibrator Calculations
  */

#include <iostream>

using namespace std;
//Function declarations
void timer555(double r1 , double r2 , double c1 , double *Freq, double *DC);


int main()
{
    //Displays Programme Title
    cout << "555 Timer Astable Multivibrator Calculations" << endl;

    //Declaration of variables type double
    double R1=0, R2=0, C1=0, freq=0, dc=0;
    double *ptr_freq, *ptr_dc;

    // Assigned values to variables
    ptr_freq = &freq;
    ptr_dc = &dc;

    // While loop to ensure positive values are entered for components
    while (R1 <=0)
    {
       cout << "Enter a positive value for R1:";
       cin >> R1 ;
    }

      while (R2 <=0)
    {
       cout << "Enter a positive value for R2:";
       cin >> R2 ;
    }

      while (C1 <=0)
    {
       cout << "Enter a positive value for C1:";
       cin >> C1 ;
    }

    // Calling subfunction sphere
    timer555(R1 ,R2 ,C1 ,ptr_freq,ptr_dc);

     //Displays results to user
    cout << "The frequency is :" << *ptr_freq << endl;
    cout << "The duty cycle is :" << *ptr_dc << endl;


    return 0;
}

    // sub function to calculate Frequency and duty cycle
 void timer555(double r1 , double r2 , double c1 , double *Freq, double *DC)
 {
        *Freq  = (1.44/((r1+(2*r2))*c1));
        *DC = (r1+r2)/(r1+(2*r2));

        return;

 }
