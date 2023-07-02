#include "question2.h"

using std::cout; using std::cin;
int main()
{   
    double sales, commission ;
    cout << "Please Enter a valid sales amount: (Enter 0 to exit)\n";
    cin >> sales;
    do
    {
        if(sales > 0)
        {
            commission = get_sales_commission(sales); //initialize the variable commission with the return value of the get_sales_commission function.
            cout << "Sales of $"<<sales << " yields a commission of $" << commission<<".\n";
            cout << "Enter a valid non-negative number: (Enter 0 to exit)\n";
            cin >>sales;
        }else if(sales < 0)
        {
            cout << "Invalid Input!!\nEnter a valid non-negative number: (Enter 0 to exit)\n";
            cin >>sales;
        }
        else
        {
            cout << "Exiting...\n";
             return 0;
        }

    }while(sales != 0);
    cout << "Exiting...\n";
    return commission;
}