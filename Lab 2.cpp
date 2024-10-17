#include <iostream>
main(){
    int number;

    std::cout<< "Enter a Number between 0 and 35:";
    std::cin >> number;

    if (number >= 0 && number <= 35) {
    if (number <= 9) {
        std::cout << "The output is: " << number << std::endl;
    } else {
        char letter = static_cast<char>('A' + (number - 10));
        std::cout << "The output is: " << letter << std::endl; 
    }
} else {
    std::cout << "Invalid. Please enter a number between 0 and 35." << std::endl; 
}


    return 0;
}