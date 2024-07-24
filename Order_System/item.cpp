#include "item.h"
item::item() // working
{

    fstream readFile;
    int mapKey = 1;
    string line, word;
    ItemData ID;
    string price;
    readFile.open("itemData.txt", ios::in);
    if (!readFile)
    {
        cout << "File Error" << endl;
    }
    else
    {
        while (getline(readFile, line))
        {
            stringstream sWords(line);
            while (getline(sWords, word, ','))
            {
                ID.name = word;
                getline(sWords, word, ',');
                ID.discription = word;
                getline(sWords, word, ',');
                ID.weight = word;
                getline(sWords, word, ',');
                ID.price = stoi(word);
            }
            mapItems.insert({mapKey, ID});
            mapKey++;
        }
    }
    readFile.close();
}

void item::getItems() // working
{
    // loadData();
    for (it = mapItems.begin(); it != mapItems.end(); it++)
    {
        cout << "   " << setw(9) << left << it->first;
        cout << setw(19) << left << (it->second).name;
        cout << setw(65) << left << (it->second).discription;
        cout << setw(30) << left << (it->second).weight;
        cout << setw(30) << left << (it->second).price;
        cout << endl;
    }
}
int item::getItemUsingKey(int key) // working
{
    for (it = mapItems.begin(); it != mapItems.end(); it++)
    {
        if (it->first == key)
        {
            cout << "   " << setw(9) << left << it->first;
            cout << setw(19) << left << (it->second).name;
            cout << setw(65) << left << (it->second).discription;
            cout << setw(30) << left << (it->second).weight;
            cout << setw(30) << left << (it->second).price;
            cout << endl;
            return (it->second).price;
        }
    }
    return 0;
}