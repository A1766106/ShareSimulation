#include "Console.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>

int main()
{
    Console UserConsole;
    if(UserConsole.Get_Existing_User() == 1)
    {
        UserConsole.Login();
    }
    else
    {
        UserConsole.Create_Account();
    }
    while(UserConsole.Logged_In())
    {

    }
    UserConsole.Bye_Message();
    return 0;
}