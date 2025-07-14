#include<iostream>
#include<cstring> 
using namespace std;
int main() {
    const char* s1 = "Hello"; // First string
    const char* s2 = "World"; // Second string
    // Using strcmp to compare s1 and s2
    int result = strcmp(s1, s2);
    if (result == 0) {
        cout << "Both strings are equal." << endl;
    } else if (result < 0) {
        cout << "String s1 is less than string s2." << endl;
    } else {
        cout << "String s1 is greater than string s2." << endl;
    }
    return 0;
}
