#include "StringCalculator.h"
#include <stdexcept>
#include <sstream>
#include <algorithm>
#include <vector>

bool checkifInput0orEmpty(const std::string& input) {
    return input.empty() || input == "0";
}
