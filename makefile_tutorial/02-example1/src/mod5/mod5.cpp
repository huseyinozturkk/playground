#include <iostream>
#include "mod2.h"
#include "mod4.h"

int main() {
    std::clog << "mod5 calling fun2 of mod2.so\n";
    func2();

    std::clog << "mod5 calling f4 of mod4.a - static lib function\n";
    f4();
    
    return EXIT_SUCCESS;
}