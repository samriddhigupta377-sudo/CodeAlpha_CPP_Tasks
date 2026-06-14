#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void registerUser()
{
    string username, password;

    cout << "\nEnter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    ofstream file("users.txt", ios::app);

    file << username << " " << password << endl;

    file.close();

    cout << "\nRegistration Successful!\n";
}

void loginUser()
{
    string username, password;
    string u, p;
    bool found = false;

    cout << "\nEnter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    ifstream file("users.txt");

    while(file >> u >> p)
    {
        if(username == u && password == p)
        {
            found = true;
            break;
        }
    }

    file.close();

    if(found)
        cout << "\nLogin Successful!\n";
    else
        cout << "\nInvalid Username or Password!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                registerUser();
                break;

            case 2:
                loginUser();
                break;

            case 3:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 3);

    return 0;
}