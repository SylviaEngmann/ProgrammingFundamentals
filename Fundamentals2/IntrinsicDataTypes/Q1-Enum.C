#include <iostream>

using namespace std;

int main()
{
    enum{RED, YELLOW, AMBER=YELLOW, GREEN};
    cout << "The values in the ENUM are: " << RED << "," << YELLOW << "," << AMBER << "," << GREEN << "\n";
}