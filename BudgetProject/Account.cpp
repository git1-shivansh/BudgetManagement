//
// Created by Shivansh Shrivastava on 11/5/22.
//

#include "Account.h"
#include<iostream>
#include<cmath>
using namespace std;

Account::Account() {


}

void Account::amountOfMeals(float amt, float accountBalance)
{
    int meals  = floor(accountBalance/amt);
    cout << "Number of meals left: " << meals << endl;
}

void Account::dailyBudgetLeft(int date, float accountBalance)
{
    int daysLeft = 30 - date;
    cout << "Daily budget is " << accountBalance/daysLeft <<"$"<< endl;
}

void Account::totalAmountLeft(float accountBalance)
{
    cout << "The amount left is " << accountBalance << "$"<< endl;
}