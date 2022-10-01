#include "Console.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

Console::Console()
{
    Logged_In_Status = 0;
    Welcome_Message();
}

void Console::Welcome_Message()
{
   system("Clear"); // Clears terminal
    cout << " .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  " << endl;
    cout << "| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. | " << endl;
    cout << "| | _____  _____ | || |  _________   | || |   _____      | || |     ______   | || |     ____     | || | ____    ____ | || |  _________   | | " << endl;
    cout << "| ||_   _||_   _|| || | |_   ___  |  | || |  |_   _|     | || |   .' ___  |  | || |   .'    `.   | || ||_   \\  /   _|| || | |_   ___  |  | | " << endl;
    cout << "| |  | | /\\ | |  | || |   | |_  \\_|  | || |    | |       | || |  / .'   \\_|  | || |  /  .--.  \\  | || |  |   \\/   |  | || |   | |_  \\_|  | | " << endl;
    cout << "| |  | |/  \\| |  | || |   |  _|  _   | || |    | |   _   | || |  | |         | || |  | |    | |  | || |  | |\\  /| |  | || |   |  _|  _   | |  " << endl;
    cout << "| |  |   /\\   |  | || |  _| |___/ |  | || |   _| |__/ |  | || |  \\ `.___.'\\  | || |  \\  `--'  /  | || | _| |_\\/_| |_ | || |  _| |___/ |  | | " << endl;
    cout << "| |  |__/  \\__|  | || | |_________|  | || |  |________|  | || |   `._____.'  | || |   `.____.'   | || ||_____||_____|| || | |_________|  | | " << endl;
    cout << "| |              | || |              | || |              | || |              | || |              | || |              | || |              | |  " << endl;
    cout << "| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |  " << endl;
    cout << " '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'   " << endl << endl; // Output welcome message

    string Confirmation = ""; // Initialises confirmation
    cout << "Do you already have an account? (Y/N) "; // Requests input from user clarrifying if user has an existing account
    cin >> Confirmation;
    while(Confirmation != "Y" && Confirmation != "y" && Confirmation != "n" && Confirmation != "N") // Confirms valid entry from user.
    {
        cout << "You entered an invalid input! Do you already have an account? (Y/N) "; // Requests input from user clarrifying if user has an existing account
        cin >> Confirmation;
    }
    if(Confirmation == "Y" || Confirmation == "y")
    {
        Existing_User = 1;
    }
    else
    {
        Existing_User = 0;
    } 

}

int Console::Get_Existing_User()
{
    return Existing_User;
}

void Console::Login()
{

}

void Console::Create_Account()
{

}

void Console::Log_Out()
{
    Logged_In_Status = 0;
}

bool Console::Logged_In()
{
    if(Logged_In_Status == 1)
    {
        return true;
    }
    return false;
}

void Console::Bye_Message()
{
    system("Clear"); // Clears terminal
    cout << ".----------------.  .----------------.  .----------------."   << endl;
    cout << "| .--------------. || .--------------. || .--------------. |" << endl;
    cout << "| |   ______     | || |  ____  ____  | || |  _________   | |" << endl;
    cout << "| |  |_   _ \\    | || | |_  _||_  _| | || | |_   ___  |  | |" << endl;
    cout << "| |    | |_) |   | || |   \\ \\  / /   | || |   | |_  \\_|  | |" << endl;
    cout << "| |    |  __'.   | || |    \\ \\/ /    | || |   |  _|  _   | |" << endl;
    cout << "| |   _| |__) |  | || |    _|  |_    | || |  _| |___/ |  | |" << endl;
    cout << "| |  |_______/   | || |   |______|   | || | |_________|  | |" << endl;
    cout << "| |              | || |              | || |              | |" << endl;
    cout << "| '--------------' || '--------------' || '--------------' |" << endl;
    cout << "'----------------'  '----------------'  '----------------'  " << endl;
}
