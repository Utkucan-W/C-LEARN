#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;


main () {
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};
    
    cout << first_name; 
    
    cout << "Please enter you first name." << endl;
    cin >> first_name;
    
    cout << "Please enter you last name." << endl;
    cin >> last_name;
    cout << "--------------------" << endl;
    
    
    cout << "Hello," << first_name << "your first name has " << strlen (first_name) << "characters" << endl;
    cout << "Hello," << last_name << "your last name has " << strlen (last_name) << "characters" << endl;
 strcpy (full_name,first_name);
strcpy (full_name," ");
strcat (full_name,last_name);
cout << "Your full name is:" << full_name << endl;  
    
    
    
    
    return 0;
}