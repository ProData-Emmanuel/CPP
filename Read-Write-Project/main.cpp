#include <iostream>
#include <fstream> //includes the File Stream library, to allow us read from (ifstream) and write to (ofstream) files.

using namespace std;

int main()
{
    // declares a variable named "character" of type char. It will be used to store individual characters read from the input file.
    char character;

    // Creating an input stream named "in_stream", and an output stream named "out_stream"
    ifstream in_stream;         // input file stream, in_stream, used to read from the file "Computer_Vision.txt"
    ofstream out_stream;        // used to write to the file "Copy_of_Computer_Vision.txt"

    // Perform some operations with the streams

    // Open the text file for reading
    in_stream.open("Computer_Vision.txt");              // Display or copy the content of the Computer Vision note to the screen
    out_stream.open("Copy_of_Computer_Vision.txt");     // opens a file named "Copy_of_Computer_Vision.txt" for writing using the output stream out_stream. If the file "Copy_of_Computer_Vision.txt" does not already exist, it will be created."Copy_of_Computer_Vision.txt"

    in_stream.get(character);          // reads a single character from the input file (in_stream) and stores it in the character variable.
    while (!in_stream.eof()) {         // while loop continues executing as long as the end-of-file (EOF) marker has not been reached.
        cout << character;             // prints the current character to the screen
        out_stream.put(character);     //  writes (copies) the current character to the output file (Copy_of_Computer_Vision.txt) using the put() function
        in_stream.get(character);      // reads the next character from the input file (Computer_Vision.txt) and stores it in character for the next loop iteration.
    }

    out_stream.close();                 // closes the output file stream (out_stream)
    in_stream.close();                  // closes the input file stream (in_stream)

    return 0;
}
