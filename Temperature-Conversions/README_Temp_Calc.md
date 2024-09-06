Title: Temperature Calculator Using Functions

Description: This C++ project uses functional or procedural abstraction to build a project that accepts accepts lower entry temperature, upper entry temperature and the step size to produce a table that displays the Celsius and Absolute Kelvin (Value) temperatures for each value.

Approach: A Main program file (main.cpp), a header file (conversions.h), and an implementation file (conversions.cpp) were created top down on Code::Blocks from empty files. In order to be able to execute or run the codes successfully, an empty code block project file named "Splitting-Program.cbp" in the containing folder was created and have all the three (3) files (main file, header file, and the implementation file)added via the "Projects" panel on the Code Blocks.

Formula Applied: The standard Celsius to Kelvin temperature calculation formula was applied, by creating the functions to handle them:

#### Conversion Functions:
+  Convert a Fahrenheit temperature to Celsius using:
	Celsius = (9/5) × (Fahrenheit − 32)

+ Converts a Fahrenheit temperature to Kelvin (absolute value) using:
	Kelvin = (9/5) × (Fahrenheit − 32) + 273.15

Four (4) functions were declared using the void keyword as these functions do not return a value. The decalared functions include:
+ print_preliminary_message() --  prints a welcome message explaining the program's purpose.
+ input_table_specifications() --- takes user input for the minimum and maximum Fahrenheit temperatures and the difference between entries. 
				    This function uses pass-by-reference to modify the original lower, upper, and step variables in the main() function.

+ print_message_echoing_input() -- prints a message summarizing the user input.
+ print_table() -- generates a table of temperatures in Fahrenheit, Celsius, and Kelvin (absolute temperature).


setiosflags(ios::left) was used to set the text alignment to left for the output of the subsequent cout statements.

IDE Used: Code::Blocks