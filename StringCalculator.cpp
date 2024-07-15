#include "StringCalculator.h"
#include <sstream>
#include <stdexcept>

int StringCalculator::add(const std::string& input) {
    std::string modifiedInput = input;  // Create a local non-const copy for modification

    if (modifiedInput.empty()) {
        return 0;
    }

    std::string delimiter = ",";
    if (modifiedInput.substr(0, 2) == "//") {
        size_t pos = modifiedInput.find("\n");
        delimiter = modifiedInput.substr(2, pos - 2);
        modifiedInput = modifiedInput.substr(pos + 1);
    }
    return 0;}


    // Extract numbers
    std::vector<int> numbers = extractNumbers(const std::string& input,std::string delimiter);

    // Check for negatives
    for (int num : numbers) {
        if (num < 0) {
            throw std::runtime_error("Negatives not allowed");
        }
    }

    // Sum numbers, ignoring those greater than 1000
    int sum = 0;
    for (int num : numbers) {
        if (num <= 1000) {
            sum += num;
        }
    }

    return sum;
}

std::vector<int> StringCalculator::extractNumbers(const std::string& input, const std::string& delimiter) {
    std::vector<int> numbers;
    std::istringstream iss(input);
    std::string token;

    while (std::getline(iss, token, ',')) {
        size_t pos = token.find(delimiter);
        while (pos != std::string::npos) {
            token.replace(pos, delimiter.length(), ",");
            pos = token.find(delimiter, pos + 1);
        }
        numbers.push_back(std::stoi(token));
    }

    return numbers;
}
