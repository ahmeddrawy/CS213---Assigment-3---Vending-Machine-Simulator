/*
 * Class money that handles billValue of value 0.5, 1, 5, 10, 20
 */


#ifndef _MONEY_H
#define _MONEY_H

#include <vector>

class Money {
protected:
    enum{HALF, ONE, FIVE, TEN, TWENTY};
    std::vector<double> billValue;
    std::vector<int> billCount;
    const double EPS;
public:
    //default constructor
    Money();
    /*
     * Method getBillCount()
     * --------------------------
     * Takes bill value and returns its count in stock
     */
    int getBillCount(double bill) const;
    /*
     * Method IncreaseBillCount
     * ---------------------------
     * Takes bill value and and increases its count in stock by 'count'
     */
    void IncreaseBillCount(double bill, int count = 1);
    /*
     * Method decreaseBillCount
     * ---------------------------
     * Takes bill value and and decreases its count in stock by 'count'
     */
    void decreaseBillCount(double bill, int count = 1);
    /*
     * Method giveChane()
     * ----------------------
     * Takes a double value of change and returns vector of int with amount of bills that should be returned of each value
     */
    std::vector<int> giveChange(double Change);
    /*
     * Method doubleCompare()
     * ----------------------
     * Compares 2 doubles and takes the double imprecision in consideration
     * ----------------------
     * returns -1 if a > b, 0 if a == b and 1 if a < b
     */
    int doubleCompare(double a, double b) const;
    virtual ~Money();

};


#endif
