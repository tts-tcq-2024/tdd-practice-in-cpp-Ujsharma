#include "StringCalculator.h"
#include <stdexcept>
#include <sstream>
#include <algorithm>
#include <vector>

int StringCalculator::add(const std::string& input) {
    if (input.empty()) {
        return 0;
    }}

std::string delimiter = ",";
    if (input.substr(0, 2) == "//") {
        size_t pos = input.find("\n");
        delimiter = input.substr(2, pos - 2);
        input = input.substr(pos + 1);
    }

    // Extracting numbers
    std::vector<int> numbers = extractNumbers(input, delimiter);

for (int num : numbers) {
        if (num < 0) {
            throw std::runtime_error("Negatives not allowed");
        }
    }

