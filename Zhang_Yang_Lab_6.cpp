//Yang Zhang -- Kirolos Dimian
//Lab 6
//10.15.2024

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
    //Variables
    ifstream inFile; //input file stream variable
    ofstream outFile; //output file stream variable
    int integer1, integer2; //variable to store the integers
    int integerSum; //variable to store the sum of the integers
    char character, newCharacter; // variable to store the character
    int charAscii; //variable to store the ascii value of the character
    string sentence; //variable to store the string

    inFile.open("inData.txt"); //Opens the file named "inData.txt"
    outFile.open("outData.txt"); //Opens the file named "outData.txt"
    
    cout << "Processing data" << endl;

    inFile >> integer1 >> integer2; //Gets the data for integer1 and integer2
    integerSum = integer1 + integer2; //Adds those two variables together
    outFile << "Sum of the integers is: " << integerSum << endl;

    inFile >> character; //Gets the data for the char
    charAscii = character; //the int is equal to the char so the char transfers into the ASCII value
    newCharacter = charAscii + 1; //the ASCII value plus one equals the next char
    outFile << "The letter that comes after " << character << " is " << newCharacter << endl;

    inFile >> sentence; //Gets the data for the string
    outFile << sentence << endl; //Outputs the string

    inFile.close(); //Close the infile
    outFile.close(); //Close the outfile

    return 0;
}