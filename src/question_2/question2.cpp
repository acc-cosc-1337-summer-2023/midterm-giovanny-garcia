#include "question2.h"

bool test_config()
{
    return true;
}
double get_sales_commission(double sales)
{
    float commission;
    if(sales > 0 && sales < 500)
    {
        commission = sales * .05;
    }else if(sales >= 500 && sales < 1000)
    {
        commission = sales * .06;
    }else if(sales >= 1000 && sales < 1500)
    {
        commission = sales * .07;

    }else if(sales >= 1500)
    {
        commission = sales * .08;
    }
    return commission;
}