// The Implementation File: statistics.cpp

#include <cmath>
#include "statistics.h"     // Include the header file

/* fUNCTIONS TO RETURN THE AVERAGE AND STANDARD DEVIATION OF RESPECTIVELY OF 1,  2, 3, or 4 REAL NUMBER VALUES */


// Function to calculate the average
double average(double r1)
{
    return r1;
}

double average(double r1, double r2) {
    return (r1 + r2) / 2.0;
}

double average(double r1, double r2, double r3) {
    return (r1 + r2 + r3) / 3.0;
}

double average(double r1, double r2, double r3, double r4) {
    return (r1 + r2 + r3 + r4) / 4.0;
}


// Applying Polymorphism and Overloading to Define Function to calculate the standard_deviation
// WHen number_of_values == 1
double standard_deviation(double r1) {
    return 0; // Standard deviation for a single value is always 0
}

// WHen number_of_values == 2
double standard_deviation(double r1, double r2) {
    double avg = average(r1, r2);
    return sqrt(((r1 - avg) * (r1 - avg) + (r2 - avg) * (r2 - avg)) / 2.0);
}

// WHen number_of_values == 3
double standard_deviation(double r1, double r2, double r3) {
    double avg = average(r1, r2, r3);
    return sqrt(((r1 - avg) * (r1 - avg) + (r2 - avg) * (r2 - avg) + (r3 - avg) * (r3 - avg)) / 3.0);
}

// WHen number_of_values == 4
double standard_deviation(double r1, double r2, double r3, double r4) {
    double avg = average(r1, r2, r3, r4);
    return sqrt(((r1 - avg) * (r1 - avg) + (r2 - avg) * (r2 - avg) + (r3 - avg) * (r3 - avg) + (r4 - avg) * (r4 - avg)) / 4.0);
}
