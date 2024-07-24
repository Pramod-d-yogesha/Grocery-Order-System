
#include "order.h"
void order::orderSystem()
{
    int nextStepOption;
    int paymentOption;
    orderDetails::getItemdetails();
    nextStepOption=orderDetails::selectedItems();
    if (nextStepOption==2)
    {
        amount=orderDetails::generateBill();
        cout<<endl;
        cout<<"\t...| PAYMENT OPTIONS |..."<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"1 : Cash\t  2 : card\t  3 : UPI\nSelect Any One : "<<endl;
        cin>>paymentOption;
        payment *paymentMode;
        switch(paymentOption)
        {
            case 1: paymentMode=new cash;
                    paymentMode->authorized();
                    break;
            case 2: paymentMode=new card;
                   paymentMode->authorized();
                    break;
            case 3: paymentMode=new UPI;
                   paymentMode->authorized();
                    break;
            case 4:
                exit(0);
            default: cout<<"Invalid Option"<<endl;

        }

    }
    else{
        cout<<"\t\tTHANK YOU :)"<<endl<<endl;
        return;
    }

}




