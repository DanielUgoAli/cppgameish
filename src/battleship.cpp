#include <iostream>
#define N 4

int main(void){
    int row, col;
    bool ships[N][N] = { 
        { 0, 1, 1, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 1, 0 }
        };
    int hits = 0;
    int Numberofturns = 0;
    

    while (hits < 4){
        std::cout << "Selecting coordinates" << "\n";

        std::cout << "Enter a number between 0 and 3: ";
        std::cin >> row;

        std::cout << "Enter a number between 0 and 3: ";
        std::cin >> col;

        if (ships[row][col]){
            ships[row][col] = 0;
            std::cout << "You successfully hit a ship\n";
            hits++;
            std::cout << "You have " << (4-hits) << "hits remaining \n\n";

        }else{
            std::cout << "Oof!! Missedd.Try again\n\n";
        }

    Numberofturns++;
    }

    std::cout << "Victory\n";
    std::cout <<"You won in " << Numberofturns << "turns.";
    return 0;
}
