#include <iostream>
#include <string>

/**
 * Выводит приветствие пользователю.
 * @param userName имя пользователя
 */
void printGreeting(const std::string& userName) {
    std::cout << "Hello, " << userName << "!" << std::endl;
}

int main() {
    std::string userName = "World";
    printGreeting(userName);
    return 0;
}
