#include "../head/type_traits.hpp"

#include <corecrt.h>
#include <iostream>

struct eat_any {
    template<typename Type>
    eat_any(const Type&) throw()
    {}
};

template<size_t size>
void f(const eat_any(&)[size]) throw()
{
    std::cout << size << "\n";
}

int main(int, char**) {
    typedef int type[10];
    type(4);
    f({ 1, 2, 3 });
}
