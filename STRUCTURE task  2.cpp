#include <iostream>
using namespace std;
struct User {
    string username; 
    string password; 
};
int main()
 {
    // Create a User structure with predefined credentials
    User u1;
    u1.username = "manahil"; 
    u1.password = "1234"; 

    string enterUsername;
    string enterPassword;

    // Prompt the user to enter their username and password
    cout << "Enter username: ";
    cin >> enterUsername;
    cout << "Enter password: ";
    cin >> enterPassword;

    if (enterUsername == u1.username && enterPassword == u1.password) {
        
    cout << "Welcome, " <<u1.username<< "! You have successfully logged in.\n";
    } else {
    cout << "Login failed. Please check your username and password.\n";
    }

    return 0;
}
