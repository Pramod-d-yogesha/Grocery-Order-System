#include <iostream>
#include<fstream>
#include <string>
using namespace std;
class customer
{
    string name;
    string address;
    string UserID;
    string Passwd;

public:
    void getCustomerDetails();
    int login();
    int signUp();
};
