

#include <iostream>
#include <ctime>

void PlayGame()
{
    int randomNumber = rand() % 251; //gets 0 ~ 250 randomlly
    std::cout << "GUESS THE NUMBER IN MY CPU\n";

    while (true)
    {
        int guess;
        std::cin >> guess;
        //std::cout << randomNumber;

        if (guess > randomNumber)
        {
            std::cout << "TOO HIGH\n";
        }
        else if (guess < randomNumber)
        {
            std::cout << "TOO LOW\n";
        }
        else
        {
            std::cout << "YOU WIN\n";
            break;
        }
    }
}

void RequestInput()
{

}

int main()
{
    srand(time(NULL));
    int reply;
    do 
    {
        std::cout << "0. Quit\n";
        std::cout << "1. Play\n";

        std::cin >> reply;

        switch (reply)
        {
        case 0:
            std::cout << "BYE\n";
            break;
        case 1:
            PlayGame();
            break;
        default:
            RequestInput();
        }

    } while (reply != 0);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
