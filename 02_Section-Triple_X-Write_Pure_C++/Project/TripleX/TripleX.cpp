#include <iostream>

int main()
{
    // Print welcome messages to the terminal
    std::cout << std::endl;
    std::cout << "============================================================";
    std::cout << std::endl;
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue..." << std::endl;

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

    // Declare 3 number Guess
    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << std::endl;
    std::cout << "GuessSum : " << GuessSum << std::endl;
    std::cout << "GuessProduct : " << GuessProduct << std::endl;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else
    {
        std::cout << std::endl;
        std::cout << "You lose!";
    }
    

    std::cout << "============================================================" << std::endl;
    return 0;
}