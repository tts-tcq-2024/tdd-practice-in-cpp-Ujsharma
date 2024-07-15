#include "StringCalculator.h"
#include <stdexcept>
#include <sstream>
#include <algorithm>
#include <vector>

int StringCalculator::add(const std::string& input) {
    if (input.empty()) {
        return 0;
    }}

bool checkifInput0orEmpty(const std::string& input) {
    return input.empty() || input == "0";
}

void verifyUpdateInput(int& sum, const std::string& number) {
    int num = std::stoi(number);
    checkifInputNegative(num);
    if (checkifNumberLessThanOrEqualTo1000(num)) {
        sum += num;
    }
}

