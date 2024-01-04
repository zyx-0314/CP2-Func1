/*
    Accepts 2 value and has a choice from MDAS.
    The User of the system sometimes make mistake make sure only accept values stated on main menu.
    The owner also want to make the system loop so it can solve problems without reopening the system.
*/ 

#include <iostream>

int main()
{
    int val1, val2, choice;
    char continueChoice = 'y';

    do
    {
        do
        {
            std::cout
                << "--- Please Select for Math Solution to use ---\n"
                << "1. Add\n"
                << "2. Subtract\n"
                << "3. Multipliction\n"
                << "4. Division\n"
                << "\n"
                << "Enter Choice: ";
            std::cin >> choice;

            std::system("cls");

            switch (choice)
            {
            case 1:
                std::cout << "Please input value 1:";
                std::cin >> val1;
                std::cout << "Please input value 2:";
                std::cin >> val2;
                std::cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
                break;
            case 2:
                std::cout << "Please input value 1:";
                std::cin >> val1;
                std::cout << "Please input value 2:";
                std::cin >> val2;
                std::cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
                break;
            case 3:
                std::cout << "Please input value 1:";
                std::cin >> val1;
                std::cout << "Please input value 2:";
                std::cin >> val2;
                std::cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
                break;
            case 4:
                std::cout << "Please input value 1:";
                std::cin >> val1;
                std::cout << "Please input value 2:";
                std::cin >> val2;
                std::cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
                break;
            default:
                std::cout << "User Input Incorrect\n\n";
                break;
            }
        } while (choice < 0 || choice > 5);

        std::cout << "Do you want to Contninue [y/n]:";
        std::cin >> continueChoice;

        std::system("cls");

    } while (continueChoice == 'y');
}
