#include<stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version 
*/

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    printf("Farhrenheit Celsius\n"); 

    fahr = lower; //initalization 
    while (fahr <= upper){ // test or conditon that controls the loop
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%6.0f %11.1f\n", fahr, celsius); 
        /* %6.0f means a flaoting point number at least 6 characters wide is to be printed here
           %11.1f means a floating point number at least 11 characters wide with 1 digit after the decimal is to be printed here */
        fahr = fahr + step; //increment
    }

}