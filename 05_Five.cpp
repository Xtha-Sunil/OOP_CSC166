//  Write a program to input string number. 
// Convert the string into number. Do not use any library.
#include <iostream>
using namespace std;

int strToNum(string myStr) {
    int result = 0;
    for (char ch: myStr) {
        result = result*10 + ch - '0';
    }
    return result;
}

int main () {
    string myStr;
    cout << "Enter number (compiler will read as string) : ";
    cin >> myStr;
    int result = strToNum(myStr);
    cout << result;
    return 0;
}
