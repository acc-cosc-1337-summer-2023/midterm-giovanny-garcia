#include "question1.h"
using std::cout; using std::cin;
int main()
{
    int x;
    cout << "Please Enter a whole number between 1 and 15: (Enter 0 to exit)\n";
    cin >> x;
    do{
        if (x > 0 && x <= 15)
        {
            get_fib_sequence(x);
            cout << "Please Enter a whole number between 1 and 15: (Enter 0 to exit)\n";
            cin >> x;   
        }
        else if(x > 15 || x < 0){
            cout << "Invalid Number!! \nPlease Enter a whole number between 1 and 15: (Enter 0 to exit)\n";
            cin >> x;
            get_fib_sequence(x);
        }else break;
    }while(x != 0);
    cout << "Exiting...\n";
    return 0;
}