#include<iostream>
#include "Account.h"
using namespace std;

int main()
{
    int maxAmt = 200;
    float debit = 0;
    int select = 0;
    int date = 0;
    float amt = 0;
    float accountBalance = maxAmt;


    Account object1;
    Account *pointer = &object1;

    do{
        cout << ("\nChoose an option no. below: \n");
        cout << ("0 : Debit money\n");
        cout << ("1 : Total amount in account\n");
        cout << ("2 : Daily budget left\n");
        cout << ("3 : Amount of meals left for a given price\n");
        cout << ("4 : Quit\n")<<endl;
        cin >> select;

        switch(select)
        {
            case 0:
                cout << "Enter the amount spent: ";
                cin >> debit;
                accountBalance  -= debit;
                break;
            case 1:
                object1.totalAmountLeft(accountBalance);
                break;
            case 2:
                cout << "Enter date today: ";
                cin >> date;
                pointer->dailyBudgetLeft(date, accountBalance);
                break;
            case 3:
                cout << "Enter average price of a meal: ";
                cin >> amt;
                pointer->amountOfMeals(amt,accountBalance);
                break;
            default:
                cout << "Exited Successfully" << endl;

        }
    }while(select!=4);


}
