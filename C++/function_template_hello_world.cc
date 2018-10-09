
#include <iostream>

template<typename ReturnT, typename... ArgT>
using Function = ReturnT(*)(ArgT...);


void printHelloWorld() {
std::cout << "Hello, World!" << std::endl;
} 



int main(int argCount, char ** argValues) {

Function printIntro = printHelloWorld;

printIntro();


} 
