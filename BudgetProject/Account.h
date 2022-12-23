//
// Created by Shivansh Shrivastava on 11/5/22.
//

#ifndef BUDGETPROJECT_ACCOUNT_H
#define BUDGETPROJECT_ACCOUNT_H


class Account {
public:
    Account();
    void amountOfMeals(float amt, float accountBalance);
    void totalAmountLeft(float accountBalance);
    void dailyBudgetLeft(int date, float accountBalance);
};


#endif //BUDGETPROJECT_ACCOUNT_H

