#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int numDigits = static_cast<int>(log10(num)) + 1;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return sum == originalNum;
}

void findArmstrongNumbers(int start, int end) {
    cout << "Armstrong numbers between " << start << " and " << end << " are: ";

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    std::cout << std::endl;
}

int main() {
    int start, end;
    std::cout << "Enter the starting number: ";
    std::cin >> start;
    std::cout << "Enter the ending number: ";
    std::cin >> end;

    findArmstrongNumbers(start, end);

    return 0;
}