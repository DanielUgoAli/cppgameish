#include <iostream>

// Function to reverse the number
int reverse(int num){
    int reversed_Num = 0;

    while(num){
        // Gets the last number of the input and adds to the reversed number sequence
        reversed_Num = reversed_Num * 10 + num % 10;
        // Removes the last number of the input
        num /= 10;
    }

    return reversed_Num;
}

int main(void){

    int a;
    std::cout << "Input the number to be reversed: ";
    std::cin >> a;
    int b = reverse(a);
    std::cout << b;

    return 0;
}
