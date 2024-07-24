#include<iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include<vector>
#include "item.h"
#include<bits/stdc++.h>
using namespace std;
class orderDetails :public item
{
protected:
    vector<int> ItemsKey;
public:
    void getItemdetails();
    int selectedItems();
    int generateBill();
};
