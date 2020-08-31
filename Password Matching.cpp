#include <iostream>

using namespace std;

int main()
{
    string password = "password123";
    string username = "admin";
    
    string user, pd;
    
    cout << "enter username  \n";
    cin >> user;
    
    cout << "enter password  \n";
    cin >> pd;
    
    
    if (username.size() != user.size())
    {
        cout << "wrong username\n";
    }
    else
    {
        for (int i = 0; i < username.size(); i++)
        {
            if (username[i] != user[i])
            {
                cout << "wrong username\n";
                break;
            }
        }
        cout << "correct username\n";
    }
    
    
    if (password.size() != pd.size())
    {
        cout << "wrong password\n";
    }
    else
    {
        for (int i = 0; i < password.size(); i++)
        {
            if (password[i] != pd[i])
            {
                cout << "wrong password\n";
                break;
            }
        }
        cout << "correct password\n";
    }
    
}
