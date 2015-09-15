#include <iostream>

template <int N> struct Factorial
{
    enum { val = Factorial<N-1>::val * N };
};

template<>
struct Factorial<0>
{
    enum { val = 1 };
};

int main()
{
    // Note this value is generated at compile time.
    // Also note that most compilers have a limit on the depth of the recursion available.
    std::cout << Factorial<4>::val << "\n";
}