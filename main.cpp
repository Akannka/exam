#include <iostream>
#include <string>

bool isLowerCase(char ch) {
    return (ch < 'z' && ch >= 'a');
}

void proccess(const std::string& input) {
    std::string result;
    int i = 0;
    while (i < input.length()-1) // Until the penultimate element
    {
        if (isLowerCase(input[i]) && isLowerCase(input[i + 1])) // If both elements are in the range [a..z]
        {
            if (input[i] < input[i + 1])
            {
                result = input.substr(i, 2);
                std::cout << result.length() << " " << result << std::endl;
                return;
            }
        }
        i++;
    }
    std::cout << "No such string!" << std::endl;
}
int main() {
    std::cout << "Enter desired word: ";
    std::string input;
    std::cin >> input;
    proccess(input);
    return 0;
}