// Completely optimized and written by CGPT :D

#include <iostream>
#include <ctime>

void PlayerIntroduction(int difficulty) {
    std::cout << "\nSolomon: Hello agent 47, my name is Solomon, and I am the director of the FBI";
    // ... (rest of the dialogue)
    std::cout << "\nYou are in Level " << difficulty << " of the server.\n";
}

bool PlayGame(int difficulty) {
    PlayerIntroduction(difficulty);

    const int CodeA = rand() % difficulty + difficulty;
    const int CodeB = rand() % difficulty + difficulty;
    const int CodeC = rand() % difficulty + difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "\n+ There are three numbers in the code..." << std::endl;
    std::cout << "+ The codes add up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "\nYou have successfully hacked the server and obtained a file. Keep going, agent.";
        return true;
    } else {
        std::cout << "\nYou have entered the wrong code, be careful, agent. Try again!!!";
        return false;
    }
}

int main() {
    srand(time(NULL));
    int levelDifficulty = 1;
    const int maxDifficulty = 10;

    while (levelDifficulty <= maxDifficulty) {
        bool isLevelComplete = PlayGame(levelDifficulty);
        std::cin.clear();  // Clears any errors
        std::cin.ignore(); // Discards input buffer

        if (isLevelComplete) {
            ++levelDifficulty; // Increase level difficulty
        }
    }

    std::cout << "\n***You have obtained all the files, agent. Well done. Now get out of there.***\n";
    return 0;
}
