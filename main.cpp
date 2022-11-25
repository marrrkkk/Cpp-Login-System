#include <iostream>
#include <stdlib.h> //for clearing console
using namespace std;

int main(){
    string username;
    string password;
    int len = 0;
    int retry = 2;
    int mode = 0;

    cout << "|======================|\n"
            "|   C++ Login System   |\n"
            "|                      |\n"
            "|[1] Register          |\n"
            "|[2] Login             |\n"
            "|======================|\n"
            "Choose: ";
    cin >> mode;

    //switch
    switch(mode){
        case 1:
        system("CLS");
        while(len < 8){   //while loops
            cout << "Create Username: ";
            cin >> username;
            cout << "Create Password: ";
            cin >> password;
            
            if(password.length() >= 8){ //if else
                len+=password.length();
            } else {
                system("CLS");
                cout << "Password must contain 8 characters or above!\n";
            }
        }
        system("CLS");
        cout << "Account Succesfully Created!\n";
        cout << "|======================|\n"
                "|     Account Info     |\n"
                "|======================|\n"
                "|Username: " << username << "\n"
                "|Password: " << password << "\n"
                "'-----------------------\n\n";
        break;
        case 2:
        system("CLS");
        for(int i = 0; i < 3; i++){ //for loops
            cout << "Username: ";
            cin >> username;
            cout << "Password: ";
            cin >> password;

            if(username == "mark" && password == "mark1234"){
                system("CLS");
                cout << "Welcome back Mark!\n";
                cout << "|======================|\n"
                        "|     Account Info     |\n"
                        "|======================|\n"
                        "|Username: " << username << "\n"
                        "|Password: " << password << "\n"
                        "'-----------------------\n\n";
                return 0;
            } else {
                system("CLS");
                cout << "Invalid credentials (" << retry-- << " retries left)\n"; 
            }
        }
        cout << "Too many login attempts!!";
        break;

        default:
        cout << "Invalid input";
        return 0;
    }

}