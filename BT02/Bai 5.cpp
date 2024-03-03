#include <iostream>
#include <string>

std::string NumberToEnglish(int num) {
    if (num == 0) {
        return "zero";
    } else if (num < 0) {
        return "negative " + NumberToEnglish(-num);
    } else if (num <= 20) {
        std::string numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                                 "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                                 "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
        return numbers[num - 1];
    } else if (num < 100) {
        std::string tens[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
        return tens[num / 10 - 2] + (num % 10 ? "-" + NumberToEnglish(num % 10) : "");
    } else if (num < 1000) {
        return NumberToEnglish(num / 100) + " hundred" + (num % 100 ? " and " + NumberToEnglish(num % 100) : "");
    } else if (num < 1000000) {
        return NumberToEnglish(num / 1000) + " thousand" + (num % 1000 ? ", " + NumberToEnglish(num % 1000) : "");
    } else {
        return NumberToEnglish(num / 1000000) + " million" + (num % 1000000 ? ", " + NumberToEnglish(num % 1000000) : "");
    }
}

int main() {
    int num;
    std::cout << "Nhap vao so nguyen trong khoang tu -999.999.999 den 999.999.999: ";
    std::cin >> num;

    std::cout << NumberToEnglish(num);

    return 0;
}
