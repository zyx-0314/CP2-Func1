/*
    Accepts 2 value and has a choice from MDAS.
    The User of the system sometimes make mistake make sure only accept values stated on main menu.
    The owner also want to make the system loop so it can solve problems without reopening the system.
*/ 

#include <iostream>

int MainMenu();
int InputData(int, int&);
int Add(int, int, char&);
int Subtract(int, int, char&);
int Multiply(int, int, char&);
int Division(int, int, char&);
char EndTrail();

int main()
{
    int val1 = 0, val2 = 0, choice, result = 0;
    char action = '-';

    do
    {
        do
        {
            choice = MainMenu();
            switch (choice)
            {
            case 1:
                result = Add( InputData(1, val1), InputData(2, val2), action );
                break;
            case 2:
                result = Subtract(
                    InputData(1, val1),
                    InputData(2, val2),
                    action
                );
                break;
            case 3:
                result = Multiply(
                    InputData(1, val1),
                    InputData(2, val2),
                    action
                );
                break;
            case 4:
                result = Division(
                    InputData(1, val1),
                    InputData(2, val2),
                    action
                );
                break;
            default:
                std::cout << "User Input Incorrect\n\n";
                break;
            }

            if (choice > 0 || choice < 5) std::cout << val1 << " " << action << " " << val2 << " = " << result << "\n";
        } while (choice < 0 || choice > 5);

    } while (EndTrail() == 'y');
}

int MainMenu()
{
    int choice;

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

    return choice;
}

int InputData(int no, int& val)
{
    std::cout << "Please input value 1:";
    std::cin >> val;
    return val;
}

int Add(int x, int y, char& action)
{
    action = '+';
    return x + y;
}

int Subtract(int x, int y, char& action)
{
    action = '-';
    return x - y;
}

int Multiply(int x, int y, char& action)
{
    action = '*';
    return x * y;
}

int Division(int x, int y, char& action)
{
    action = '/';
    return x / y;
}

char EndTrail()
{
    char continueChoice = 'y';

    std::cout << "Do you want to Contninue [y/n]:";
    std::cin >> continueChoice;

    std::system("cls");

    return continueChoice;
}
