// The Implementation File: conversions.cpp

#include "conversions.h"  // Include the header file "conversions.h" to properly link the function definitions with their declarations.


/*Function to convert Fahrenheit to Celsius */
double celsius_of(int fahr)
{
    return (static_cast<double>(5)/9) * (fahr - 32);
}
/* End of Function*/


/*Function to Convert Fahrenheit to Absolute Value */
double absolute_value_of(int fahr)
{
    return ((static_cast<double>(5)/9) * (fahr - 32)) + 273.15;
}
/* End of Function */
