/*
 * Name: Vending Machine Simulator
 * Purpose: Simulate user experience using Vending Machine
 * Author 1: Mostafa Omar Mahmoud 20170292 G16
 * Author 2: Ahmed Mohamed Hanafy 20170357 G15
 * Date: Nov. 16th 2018
 * Version: 1.1
 */


#include <iostream>
using namespace std;
#include "Money.h"
#include "Stock.h"
#include "VendingMachine.h"

int main()
{
    VendingMachine V;
    V.setVendingMachine();
    V.runVendingMachine();
    return 0;
}