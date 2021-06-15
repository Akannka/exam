#include <iostream>
#include <string>

bool isLowerCase(char ch) {
    return (ch < 'z' && ch >= 'a');
}

void proccess(const std::string& input)
{
    std::string result = "";
    int start = 0, end = 0;
    int i = 0;
    while (i < input.length()-1) // Until the penultimate element
    {
        if (isLowerCase(input[i]) && isLowerCase(input[i + 1])) // If both elements are in the range [a..z]
        {
            // one more "if"
        }
        i++;
    }
    std::cout << "No such string!" << std::endl;

}