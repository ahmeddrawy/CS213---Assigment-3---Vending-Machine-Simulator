/*
 * A class that represents a Vending Machine
 */
#ifndef _VENDINGMACHINE_H
#define _VENDINGMACHINE_H

#include "Stock.h"
#include "Money.h"

class VendingMachine : public Stock, public Money {
private:

public:
    VendingMachine();
    /*
     * sets initial values for vending machine to work
     */
    void setVendingMachine();
    /*
     * User experience while working
     */
    void runVendingMachine();
    /*
     * Method printMenu()
     * ----------------
     * prints available items, their count, and their prices
     */
    void printMenu();
    void checkTerminate();
    virtual ~VendingMachine();
};


#endif //PROG_II_ASS3_TEAMTASK0_VENDINGMACHINE_H
