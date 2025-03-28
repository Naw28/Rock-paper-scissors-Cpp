#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
char getUserChoice();
char getComputerChoice();
void showChoice(char &choice);
void chooseWinner(char &player, char &computer);

int main()
{
    char player;
    char computer;

    while (true)
    {
        player = getUserChoice();
        computer = getComputerChoice();

        cout << "Your choice: ";
        showChoice(player);
        cout << "Computer's choice: ";
        showChoice(computer);
        cout << "The result is: ";
        chooseWinner(player, computer);

        bool tmp;
        cout << "Play one more time?(1/0): ";
        cin >> tmp;
        if (!tmp)
        {
            cout << "Good bye!!!";
            return 0;
        }
    }

    return 0;
}

char getUserChoice()
{
    char choice;

    cout << "Rock-paper-scissors game\n";
    cout << "You compete with computer\n";
    do
    {
        cout << "------------------------\n";

        cout << "Choose one of the following: \n";
        cout << "\"r\" for rock\n";
        cout << "\"p\" for paper\n";
        cout << "\"s\" for scissors\n";
        cout << "Enter your choice: ";
        cin >> choice;

    } while (choice != 'r' && choice != 'p' && choice != 's');
    return choice;
}

char getComputerChoice()
{
    srand(time(0));
    int num = rand() % 3;
    switch (num)
    {
    case 0:
        return 'r';
    case 1:
        return 'p';
    case 2:
        return 's';
    }
    return 0;
}

void showChoice(char &choice)
{
    switch (choice)
    {
    case 'r':
        cout << "rock\n";
        break;
    case 'p':
        cout << "paper\n";
        break;
    case 's':
        cout << "scissors\n";
        break;
    }
}

void chooseWinner(char &player, char &computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << "It's a tie!\n";
        }
        else if (computer == 'p')
        {
            cout << "You lose!\n";
        }
        else
        {
            cout << "You win!\n";
        }
        break;
    case 'p':
        if (computer == 'p')
        {
            cout << "It's a tie!\n";
        }
        else if (computer == 's')
        {
            cout << "You lose!\n";
        }
        else
        {
            cout << "You win!\n";
        }
        break;
    case 's':
        if (computer == 's')
        {
            cout << "It's a tie!\n";
        }
        else if (computer == 'r')
        {
            cout << "You lose!\n";
        }
        else
        {
            cout << "You win!\n";
        }
        break;
    }
}