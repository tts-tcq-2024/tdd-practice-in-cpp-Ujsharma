#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include "StringCalculator.hpp"

// Definition of static methods
void StringCalculator::checkForNegative(int number) {
    if (number < 0) {
        throw std::runtime_error("Negative numbers not allowed.");
    }
}

int StringCalculator::checkforGreaterthan1000(int number) {
    return (number > 1000) ? 0 : number;
}

std::vector<int> StringCalculator::extractNumbers(const std::string& input) {
    std::vector<int> numbers;
    
    // Regex pattern to match numbers with 1 to 4 digits (including negative signs)
    std::regex pattern(R"(-?\d{1,4})");  // The -? allows for optional negative signs
    std::sregex_iterator iter(input.begin(), input.end(), pattern);
    std::sregex_iterator end;

    for (auto i = iter; i != end; ++i) {
        int number = std::stoi(i->str());

        // Check for negative numbers
        checkForNegative(number);
        // Check if number greater than 1000
        number = checkforGreaterthan1000(number);
        // Add the number to the vector if it's not excluded
        if (number != 0) {
            numbers.push_back(number);
        }
    }

    return numbers;
}


int StringCalculator::calculateSum(const std::vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    return sum;
}

int StringCalculator::add(const std::string& input) {
    // Check if the input is empty
    if (input.empty()) {
        return 0;
    }

    // Extract numbers from the input string
    std::vector<int> numbers = extractNumbers(input);

    // Calculate the sum of the extracted numbers
    return calculateSum(numbers);
}
