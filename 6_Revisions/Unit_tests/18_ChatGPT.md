# ChatGPT

## You
Generate unit tests for a program that sorts a given list of numbers provided by the user.
The code is as follows:
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Step 1: Input validation
    std::cout << "Enter a list of numbers (separated by spaces): ";
    std::string input;
    std::getline(std::cin, input);

    // Step 2: Splitting and validating the input
    std::vector<int> numbers;
    std::stringstream ss(input);
    std::string number;
    while (ss >> number) {
        try {
            // Convert the input to an integer and check for potential integer overflow
            long long parsedNumber = std::stoll(number);
            if (parsedNumber < INT_MIN || parsedNumber > INT_MAX) {
                throw std::out_of_range("Input number is out of range.");
            }
            numbers.push_back(static_cast<int>(parsedNumber));
        } catch (const std::exception& e) {
            std::cerr << "Invalid input: " << e.what() << std::endl;
            return 1;
        }
    }

    // Step 3: Sort the numbers using a secure sorting algorithm (merge sort)
    std::sort(numbers.begin(), numbers.end());

    // Step 4: Output the sorted list
    std::cout << "Sorted numbers: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

## ChatGPT
Here are some unit tests you can use to test the sorting program:

1. Test an empty input:

```cpp
// Input: ""
// Expected Output: "Sorted numbers: "
TEST_CASE("Empty input test") {
    std::string input = "";
    std::stringstream ss(input);
    std::vector<int> numbers;

    // ... Code to simulate user input and sorting ...

    std::ostringstream oss;
    for (const auto& num : numbers) {
        oss << num << " ";
    }
    REQUIRE(oss.str() == "Sorted numbers: ");
}

```

1. Test a single number input:

```cpp
// Input: "5"
// Expected Output: "Sorted numbers: 5 "
TEST_CASE("Single number input test") {
    std::string input = "5";
    std::stringstream ss(input);
    std::vector<int> numbers;

    // ... Code to simulate user input and sorting ...

    std::ostringstream oss;
    for (const auto& num : numbers) {
        oss << num << " ";
    }
    REQUIRE(oss.str() == "Sorted numbers: 5 ");
}

```

1. Test multiple numbers in ascending order:

```cpp
// Input: "1 2 3 4 5"
// Expected Output: "Sorted numbers: 1 2 3 4 5 "
TEST_CASE("Ascending order input test") {
    std::string input = "1 2 3 4 5";
    std::stringstream ss(input);
    std::vector<int> numbers;

    // ... Code to simulate user input and sorting ...

    std::ostringstream oss;
    for (const auto& num : numbers) {
        oss << num << " ";
    }
    REQUIRE(oss.str() == "Sorted numbers: 1 2 3 4 5 ");
}

```

1. Test multiple numbers in descending order:

```cpp
// Input: "5 4 3 2 1"
// Expected Output: "Sorted numbers: 1 2 3 4 5 "
TEST_CASE("Descending order input test") {
    std::string input = "5 4 3 2 1";
    std::stringstream ss(input);
    std::vector<int> numbers;

    // ... Code to simulate user input and sorting ...

    std::ostringstream oss;
    for (const auto& num : numbers) {
        oss << num << " ";
    }
    REQUIRE(oss.str() == "Sorted numbers: 1 2 3 4 5 ");
}

```

1. Test multiple numbers with duplicates:

```cpp
// Input: "3 2 1 2 3"
// Expected Output: "Sorted numbers: 1 2 2 3 3 "
TEST_CASE("Input with duplicates test") {
    std::string input = "3 2 1 2 3";
    std::stringstream ss(input);
    std::vector<int> numbers;

    // ... Code to simulate user input and sorting ...

    std::ostringstream oss;
    for (const auto& num : numbers) {
        oss << num << " ";
    }
    REQUIRE(oss.str() == "Sorted numbers: 1 2 2 3 3 ");
}

```

These tests cover different scenarios such as empty input, single number input, inputs in ascending and descending order, and inputs with duplicates. You can add more tests to cover additional cases if needed.

