#include<iostream>
#include <string>
#include <iomanip>
#include "orderDetails.h"
#include "payment.h"
class order : public orderDetails
{
    int amount;
public:
    void orderSystem();
};
