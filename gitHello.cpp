#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    std::vector<std::string> hello = {"Hello", "World", "OpenFOAM", "and", "git"};
    for(string& s : hello) {
        std::cout << s << " ";
    }

    std::cout << std::endl;
    return 0;
    std::cout << "CSAPP" << std::endl;
}
