#include "orderDetails.h"
void orderDetails::getItemdetails()
{

    cout << endl;
    cout << "\t\t\t\t\t\t\t::ITEM DETAILS::" << endl
         << endl;
    cout << "=====================================================================================================================================" << endl;

    cout << setw(12) << left << "Number";
    cout << setw(20) << left << "Name";
    cout << setw(64) << left << "description";
    cout << setw(30) << left << "weight";
    cout << setw(30) << left << "Price" << endl;
    cout << "=====================================================================================================================================" << endl;

    item::getItems();
    cout << endl;
}
int orderDetails::selectedItems()
{
    int key;
    while (1)
    {
        cout << "Enter The Item Number To Select  :  ";
        cin >> key;
        cout << endl;
        ItemsKey.push_back(key);
        cout << "1 : Continue Order\t2 : Book the Selected items\t3 : exit Without Booking  :  ";
        cin >> key;
        cout << endl;
        if (key == 2 || key == 3)
            return key;
        else if (key > 2 || key < 1)
            cout << "Invalid Options Please Select Valid One" << endl;
    }
}
int orderDetails::generateBill()
{
    int totalAmount = 0;
    cout << endl;
    cout << "\t\t\t\t\t\t...|| YOUR ORDER DETAILS ||...." << endl
         << endl;
    ;
    cout << setw(12) << left << "Number";
    cout << setw(20) << left << "Name";
    cout << setw(64) << left << "description";
    cout << setw(30) << left << "weight";
    cout << setw(30) << left << "Price" << endl;
    cout << " -------------------------------------------------------------------------------------------------------------------------------------" << endl;

    for (auto it = ItemsKey.begin(); it != ItemsKey.end(); it++)
    {
        totalAmount += item::getItemUsingKey(*it);
    }
    cout << endl;
    cout << endl;
    cout << "Total Amount is : " << totalAmount << "rs" << endl;
    cout << endl;
    return totalAmount;
}
