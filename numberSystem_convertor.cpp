#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

char digitToChar(int digit) {
    if (digit >= 0 && digit <= 9) {
        return '0' + digit;
    }
    return 'A' + (digit - 10);
}

string convertSingleNumber(int number, int base) {
    if (number == 0) {
        return "0";
    }

    string result = "";

    while (number > 0) {
        int remainder = number % base;
        result += digitToChar(remainder);
        number /= base;
    }

    reverse(result.begin(), result.end());
    return result;
}

string convertNumbers(const vector<int>& numbers, int base) {
    string result = "";

    for (int i = 0; i < numbers.size(); i++) {
        result += convertSingleNumber(numbers[i], base);

        if (i != numbers.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    int amount;
    cout << "How many numbers will you convert? ";
    cin >> amount;

    vector<int> numbers(amount);

    cout << "Insert the numbers you want to convert:\n";
    for (int i = 0; i < amount; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    string system;
    cout << "Choose the conversion system (binary / octal / hexa): ";
    cin >> system;

    if (system == "binary") {
        cout << convertNumbers(numbers, 2) << endl;
    }
    else if (system == "octal") {
        cout << convertNumbers(numbers, 8) << endl;
    }
    else if (system == "hexa") {
        cout << convertNumbers(numbers, 16) << endl;
    }
    else {
        cout << "Syntax Error!" << endl;
    }

    return 0;
}
