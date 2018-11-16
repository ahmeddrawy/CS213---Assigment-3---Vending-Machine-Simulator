#include <iostream>
using namespace std;
#include "Money.h"
#include "Stock.h"
#include "VendingMachine.h"

int main()
{
//    freopen("input.txt", "r", stdin);
    VendingMachine V;
    V.setVendingMachine();
    V.runVendingMachine();
    return 0;
}