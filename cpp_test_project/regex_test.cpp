#include <iostream>
#include <chrono>
#include <string>
#include <regex>

std::string removeDuplicateBackslashes(const std::string& input)
{
    // Validate and sanitize the input string
    // (Perform additional validation as per your requirements)
    if (input.empty())
        return "";

    std::string sanitizedInput = input;

    // Remove duplicate backslashes using regular expressions
    std::regex regex("\\\\+");
    std::string result = std::regex_replace(sanitizedInput, regex, "\\");

    return result;
}

int main()
{
    // Get input string from user
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);
    typedef std::chrono::high_resolution_clock Clock;
    auto t1 = Clock::now();
    // Remove duplicate backslashes
    std::string output = removeDuplicateBackslashes(input);
    auto t2 = Clock::now();
    std::cout << (t2 - t1).count() << '\n';

    // Display the result
    std::cout << "Modified string: " << output << std::endl;

    return 0;
}

// "-Wnull-dereference",