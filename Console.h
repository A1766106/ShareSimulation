#ifndef CONSOLE_H
#define CONSOLE_H

class Console
{
    protected:
        int User_Type;
        int Existing_User;
        int Logged_In_Status;
    public:
        Console(); // Constructor
        void Welcome_Message(); // Displayes Welcome Message for User
        int Get_Existing_User(); // Returns Existing user status
        void Login(); // Logs User in
        void Create_Account(); // Creates Account
        void Log_Out(); // Logs User Out
        bool Logged_In(); // Bool function which is true when logged in
        void Bye_Message(); // Displays bye message

};

#endif