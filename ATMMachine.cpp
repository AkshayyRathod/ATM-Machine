#include <iostream>

void showMenu()
{
    std::cout << "*******MENU*******" << std::endl;
    std::cout << "1. Check Balance " << std::endl;
    std::cout << "2. Withdrawl " << std::endl;
    std::cout << "3. Deposit" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "****************" << std::endl;
}

int main()
{
        int option;

    //balance, deposit money, withdrawl, and menu
    do
    {
        showMenu();
        double balance = 500;

        std::cout << "Option: ";
        std::cin >> option;
        system("cls");

        switch (option)
        {
        case 1:
            std::cout << "Balance is: " << balance << " $" << std::endl;
            break;
        case 2:
            std::cout << "Withdrawl Amount: ";
            double withdrawlAmount;
            std::cin >> withdrawlAmount;
            if (withdrawlAmount <= balance)
                balance -= withdrawlAmount;
            else
                std::cout << "Not Enough Money" << std::endl;
                     
            break;
        case 3:
            std::cout << "Deposit Amount: ";
            double depositAmount;
            std::cin >> depositAmount;
             balance += depositAmount;

            break;
        }
    } while(option !=4);
    return 0;
}