
#include<iostream>
using namespace std;
class payment
{
    float amount;
    public:
    virtual void authorized()=0;

};
class cash : public payment
{
    public:
    void authorized();
};
class card: public payment
{
    int cardNumber;
    int cvv;
    string date;
    public:
    void authorized();
};
class UPI :public payment
{
    string upiID;
    int option;
    public:
    void authorized();
};
