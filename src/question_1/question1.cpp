#include "question1.h"

using std::cout;

bool test_config()
{
    return true;
}

int get_fib_sequence(int x)
{
    int firstNum = 1, secondNum = 1, nextTerm, answer;
    for (int i = 1; i <= x; i++)
    {
        if(i == x)
        {   answer = firstNum;
            cout << firstNum <<"\n";
        }
        nextTerm = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = nextTerm;
    }
    return answer;
}   