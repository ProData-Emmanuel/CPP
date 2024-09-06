#### Title: Statistics Caculator

Objective: This C++ program is designed to calculate the average and standard deviation of up to four real numbers input by the user. It uses function overloading to handle different numbers of inputs (up to four), and it is organized into three separate files: main.cpp, statistics.h, and statistics.cpp.

Method: This project create a header file "statistics.h" and a corresponding implementation file "statistics.cpp" containing the 
functions "average()" and "standard_deviation()". The functions return the average and standard deviation 
respectively of 1, 2, 3 or 4 real number values, based on how many values the user indicated from the prompt.

Formula Declared:
Average, avg = (r1 + r2 + r3 + ... + rN) / N

The standard deviation of the numbers r1, ..., rN was defined as the square root of the average of the expressions: ((r1 - avg) x (r1 - avg)) , ((r2-avg) x (r2-avg)), ..., ((rN - avg) x (rN - avg)) where avg is the average value of r1, ..., rN; using the formular:

standard deviation= SQRT( ((r1 − avg)^2 + (r2 − avg)^2 + (r3 - avg)^2 + ... + (rN - avg)^2) / N )

FUNCTIONS DECLARED: In the:
##### Main Program File (main.cpp):
+ input_number_of_values(int& how_many_values): This function prompts the user to input the number of values they want to calculate statistics for (1 to 4) or 0 to exit the program.
+ test_one_value(), test_two_values(), test_three_values(), test_four_values(): Each function is responsible for reading the respective number of inputs from the user and calling the average() and standard_deviation() functions.

##### Header File (statistics.h):
First of all, the Include Guards (#ifndef STATISTICS_H ... #endif): to prevent the header file from being included multiple times in a single compilation unit, which could cause errors.
+ Average Functions: double average(double r1);, double average(double r1, double r2);, etc.: For calculating the average of different numbers of real number inputs.
+ double standard_deviation(double r1);, double standard_deviation(double r1, double r2);, etc.: for calculating the standard deviation of different numbers of real number inputs.

#### Implementation File (statistics.cpp):
Contains the actual code (implementations) for the functions declared in the header file. Defined the logic for calculating averages and standard deviations.
Formulas for all the averages and standard deviations are defined here.
+ Average function definition
+ Standard deviation definition