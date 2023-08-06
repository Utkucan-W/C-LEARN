#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    
string s0;
string s1 {"Apple"}; 
string s2 {"Banana"}; 
string s3 {"Kiwi"}; 
string s4 {"apple"}; 
string s5 {s1};  //Apple
string s6 {s1,0,3}; //App
string s7 {10,'X'};  // XXXXXXXXXX (10 tane X) 

cout << s0 << endl; //no garbage 

cout << s0.length() << endl; //empty string

    
    
    
    return 0;
}
