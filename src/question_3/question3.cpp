#include "question3.h"
using std::cout;
bool test_config()
{
    return true;
}
string decimal_to_binary(int x)
{
    string str;
    if (x >= 128)
    {
        str.push_back('1');
        x = x - 128;
    } else
    {
        str.push_back('0');
    }
    if (x>= 64)
    {
        str.push_back('1');
        x = x - 64;
    }
    else
    {
        str.push_back('0');
    }
    if(x >= 32)
    {
        str.push_back('1');
        x = x - 32;
    }
    else
    {
        str.push_back('0');
    }
    if(x >= 16)
    {
        str.push_back('1');
        x = x - 16;
    }
    else
    {
        str.push_back('0');
    }
     if(x >= 8)
    {
        str.push_back('1');
        x = x - 8;
    }
    else
    {
        str.push_back('0');
    }
     if(x >= 4)
    {
        str.push_back('1');
        x = x - 4;
    }
    else
    {
        str.push_back('0');
    }
    if(x >= 2)
    {
        str.push_back('1');
        x = x - 2;
    }
    else
    {
        str.push_back('0');
    }
    if(x >= 1)
    {
        str.push_back('1');
        x = x - 1;
    }
    else
    {
        str.push_back('0');
    }
    cout << str <<"\n";
    return str;
}