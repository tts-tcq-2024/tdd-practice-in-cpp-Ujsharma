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
