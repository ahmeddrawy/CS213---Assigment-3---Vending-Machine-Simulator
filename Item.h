/*
 * Class for items in a vending machine
 * each item has a +name::string and a +price::double
 */

#ifndef _ITEM_H
#define _ITEM_H

#include <string>

class Item
{
private:
    std::string mName;
    double mPrice;
public:
    Item(std::string s = "", double price = 0);
    std::string getName() const;
    double getPrice() const;
    void setName(const std::string &s);
    void setPrice(const double &price);
    virtual ~Item();
};


#endif //PROG_II_ASS3_TEAMTASK0_ITEM_H
