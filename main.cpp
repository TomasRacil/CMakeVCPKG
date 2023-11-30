#include <iostream>
#include <fmt/format.h>

int main(int, char**){
    std::cout << "Hello, from Example!\n";
    fmt::print(stdout, "Hello world ={}\n", 2);
    return 0;
}
