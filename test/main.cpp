#include "../head/type_traits.hpp"

#include <iostream>


int main(int, char**) {
    int i[mylib::integral_sequence<int, 10>::value];
}
