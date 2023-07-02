#include "question3.h"
using std::cout; using std::cin;

int main()
{
    int choice;
    cout << "Enter a whole number between 0 and 255\n";
    cin >>  choice; 
    do{
        if (choice > 0 && choice <= 255)
        {
            decimal_to_binary(choice);
            cout << "Enter a whole number between 0 and 255\n";
            cin >>  choice;
        }
        else if (choice < 0 || choice > 255)
        {
            cout <<"Invalid choice! \nPlease try again with a number between 0 and 255\n(Optionally, Press 0 to exit)";
            cin >> choice;
        }
        else{
            cout << "Exiting Program...";
            return 0;
        }
    }while(choice != 0);
    return 0;
}