##### Copying and Reading Files in C++
	This program uses the technique of file streaming to simultaneously read the contents of a file named "Computer_Vision.txt" and then displays it on the screen while also writing a copy to another file named "Copy_of_Computer_Vision.txt".

Approach:
+ #include <iostream>: -- includes the Input/Output Stream library, which is necessary for using standard input (cin) and output (cout) objects.
+ #include <fstream>: -- includes the File Stream library, which allows us to read from (ifstream) and write to (ofstream) files.

+ using namespace std; -- Allows us to use all the standard C++ library objects and functions (such as cin, cout, ifstream, ofstream, etc.) without needing to prefix them with std::

Method:
+ Reads characters from a file named "Computer_Vision.txt".
+ Displays each character on the console.
+ Copies the contents to another file named "Copy_of_Computer_Vision.txt".
+ Continues reading, displaying, and copying until the end of the file (EOF) is reached.
+ Closes both input and output files to release resources properly.