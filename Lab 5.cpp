#include <iostream>
#include <cmath>   
#include <cctype>  

int main() {
    double number;
    char character;

    std::cout << "Welcome to Aarshna's Fun Science Fact Generator" << std::endl;
    std::cout << "As a future tech wizard, let's explore some interesting numbers" << std::endl;

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Enter a character: ";
    std::cin >> character;

    double ceilValue = ceil(number);
    double floorValue = floor(number);
    double absValue = fabs(number);
    double expValue = exp(number);
    double cosValue = cos(number);
    char lowerChar = tolower(character);

    std::cout << "1. The ceiling of " << number << " is: " << ceilValue << std::endl;
    std::cout << "2. The floor of " << number << " is: " << floorValue << std::endl;
    std::cout << "3. The absolute value of " << number << " is: " << absValue << std::endl;
    std::cout << "4. The exponential of " << number << " is: " << expValue << std::endl;
    std::cout << "5. The cosine of " << number << " is: " << cosValue << std::endl;
    std::cout << "6. The lowercase of '" << character << "' is: '" << lowerChar << std::endl;

    return 0;
}
