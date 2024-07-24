#include <iostream>
#include "order.h"
#include "customer.h"
using namespace std;

int main()
{
    int choice;
    order OS;
    while (1)
    {
        cout << "\t===================================================" << endl;
        cout << "\t\t.....| WELCOME TO ORDER SYSTEM |......." << endl;
        cout << "\t===================================================" << endl;
        customer LS;
        cout << "1 : signUp\n2 : Login\n3 : Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (LS.signUp() == 0)
            {
                cout << "Account Created  Sucessfully!." << endl;
                cout<<"You Can Login Now"<<endl;
            }
            else
            {
                cout << "Account Not Created" << endl;
            }
                
            break;

        case 2:
            if (choice == 2)
            {
                if (LS.login() == 0)
                {
                    cout << "Login Sucessfully!." << endl;
                    OS.orderSystem();
                }
                else
                {
                    cout << "Login UnsucessFull!.." << endl;
                }
            }
            break;
        case 3:
                cout<<"\t\tTHANK YOU"<<endl;
            exit(0);

        default:
            cout << "Invalid choice!..." << endl;
        }
         
        
       
    }
     return 0;
}