#include <iostream>
#include <string>

// Nested namespaces only available in C++17
// It is not going to compile with LLVM that embedded into Xcode
namespace a::b::c {
    int Hello() {
        return __cplusplus;
    }
}

int main() {
    std::cout << "Hello C++ " << a::b::c::Hello();
    return 0;
}