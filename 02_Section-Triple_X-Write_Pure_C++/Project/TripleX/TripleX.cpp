#include <iostream>

void PrintIntroduction()
{
    // Print welcome messages to the terminal
    std::cout << "\n============================================================";
    std::cout << "\nYou are a secret agent breaking into a secure server room...";
    std::cout << "\nEnter the correct code to continue...";
}

bool PlayGame()
{
    PrintIntroduction();

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << "\n\n+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << "\nGuessSum: " << GuessSum;
    std::cout << "\nGuessProduct: " << GuessProduct;

    // Check if the player guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou win!";
        return true;
    }
    else
    {
        std::cout << "\nYou lose!";
        return false;
    }

    std::cout << "\nHe said: \"Hello world!\"";
    std::cout << "\n============================================================";
}

int main()
{
    while (true)
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear();  // Clears any errors
        std::cin.ignore(); // Discards the buffer
    }

    return 0;
}