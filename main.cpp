#include "Console.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    Console UserConsole;
    int Account_ID;
    if(UserConsole.Get_Existing_User() == 1)
    {
        Account_ID = UserConsole.Login();
        if(Account_ID == -1)
        {
            cout << "Login Failed! This Software Will Now Close!" << endl;
            UserConsole.Loading();
        }
        else
        {
            cout << "User Succesfully Logged In. " << endl;
            UserConsole.Loading();
        }
    }
    else
    {
        Account_ID = UserConsole.Create_Account();
        cout << "User Succesfully Created! " << endl;
        UserConsole.Loading();
    }

    while(UserConsole.Logged_In())
    {
        UserConsole.Log_Out();
    }
    UserConsole.Bye_Message();
    return 0;
}