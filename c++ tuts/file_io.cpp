// program for basic io operations in cpp
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string str1;
    ofstream out("file1.txt"); // create an object of class ofstream and use constructor
    cout << "Enter string to write in file file1.txt - " << endl;
    // cin >> str; //this will not include whitespace
    getline(cin, str1);
    out << str1;
    //read operation from file
    string str2;
    ifstream in("file2.txt");
    // in >> str2; // will read the first word only
    getline(in,str2);
    cout << str2 + "ok"; // syntax like javascript
    return 0;
}