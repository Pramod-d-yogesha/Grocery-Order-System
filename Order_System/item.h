#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include<sstream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

struct ItemData
{
    string name;
    string weight;
    string discription;
    int price;
};

class item
{
    map<int, struct ItemData> mapItems;
    map<int, struct ItemData>::iterator it;
public:
    item();
    void getItems();
    int getItemUsingKey(int);
    //int loadData();

};
