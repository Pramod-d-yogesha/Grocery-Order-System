#include "customer.h"
void customer::getCustomerDetails()
{
    cout<<"------------------------------"<<endl;
    cout<<"Name       :  "<<name<<endl;
    cout<<"Address    :  "<<address<<endl;
    cout<<"UserID     :  "<<UserID<<endl;
    cout<<"Password   :    *******"<<endl;
     cout<<"------------------------------"<<endl;
}
int customer::login()
    {
        cout << "Enter the User ID : ";
        cin >> UserID;
        cout << endl;
        cout << "Enter the password : ";
        cin >> Passwd;
        fstream UserCredentials;
        UserCredentials.open("loginCredentials.txt", ios::in);
        if (!UserCredentials)
        {
            cerr << "Error While Opening the SignUp file" << endl;
        }
        else
        {
            string line;
            string StoredUID, StoredPWD;
            while (UserCredentials >> StoredUID >> StoredPWD)
            {
                //cout<<StoredPWD<< " "<<StoredUID<<endl;
                if (StoredUID == UserID && StoredPWD == Passwd)
                {
                    return 0;
                }
            }
            cout << "User-ID Or Password Is Incurrect!...." << endl;
           // cout << "Please Enter Currectly" << endl;
            UserCredentials.close();
           return -1;
        }
    return -1;
    }
int customer::signUp()
    {
        string RePSWD;
        int chanceTOEnterPSWD=4;
        cout << "Enter the User ID : ";
        cin >> UserID;
        cout << endl;
        cout << "Enter the password : ";
        cin >> Passwd;
        while (1)
        {

            cout << "Re-Enter the password :";
            cin >> RePSWD;
            cout << endl;
            if (Passwd == RePSWD)
            {
                break;
            }
            if(chanceTOEnterPSWD == 0)
            {
                cout<<"Your Tried More than 4 times. Please Sign-Up Again"<<endl;
                return 1;
            }
            cout << "Re-Entered Password is incurrect!....." << endl;
            cout<<"chance To Enter Password -4 Available chance = "<<chanceTOEnterPSWD<<endl;
            chanceTOEnterPSWD--;
           
        }

        fstream UserCredentials;
        UserCredentials.open("loginCredentials.txt", ios::app);
        if (!UserCredentials)
        {
            cerr << "Error While Opening the SignUp file" << endl;
            return -1;
        }
        else
        {
            UserCredentials << UserID << " " << Passwd << endl;
            //cout<<"Saved Sucessfully"<<endl;
            return 0;
        }
    }
