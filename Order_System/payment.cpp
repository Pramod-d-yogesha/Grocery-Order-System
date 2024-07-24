#include "payment.h"
void cash::authorized()
{
    cout<<"Order Sucessfull :) "<<endl;
}
void card:: authorized()
{
    cout<<"ENTER THE DETAILS......"<<endl;
    while(1)
    {
    cout<<"Card-Number(Last 6-Digit) : ";
    cin>>cardNumber;
    cout<<endl<<"CVV : ";
    cin>>cvv;
    cout<<endl<<"Expaire-Date : ";
    cin>>date;
    cout<<endl;
    if(cvv>=100 && cvv<=999 && cardNumber>=100000 && cardNumber<=999999)
    {
        cout<<"Order Sucessful--:)"<<endl<<endl;
        break;
    }
    else
    {
        cout<<"Credential is Incurrect"<<endl;
        cout<<"Example : "<<endl;
        cout<<"\tCard Number : 987654\tCVV : 231\tdate : 12/may/2050"<<endl;
        cout<<"Enter the details currectly"<<endl;
    }
    }
}
void UPI::authorized()
{
    cout<<"Enter the UPI"<<endl;
    cin>>upiID;
    cout<<"Once you done with payment plese press 1 Else Press 2"<<endl;
    cin>>option;
    if (option==1)
    {
        cout<<"order SucessFull!...."<<endl;
    }
    else
    {
        cout<<"Your Transaction is failed\nPlease Try again"<<endl;
    }

}
