#include <iostream>

using namespace std;

int main()
{
    int int_variable;
    int *int_pointer = &int_variable;
    int &int_ref = int_variable;
    const int const_int = 10;

    int_variable = 5;
    (*int_pointer) += 1;
    cout << "Pointer increment: " << int_variable << "\n";

    ++int_ref;
    cout << "Reference increment: " <<int_variable << "\n";

    cout << (int)0xf3f2 << "\n";
    cout << (int)0437 << "\n";
    cout << (char)'a' << "\n";
}