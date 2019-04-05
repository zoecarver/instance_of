#include<instance_of>

template<class T>
struct Foo { T x; };

template<class T, class U>
struct Bar { T x; U y; };

int main(int, char**)
{
    static_assert(std::instance_of<Foo, Foo<int>>::value);
    static_assert(std::instance_of<Bar, Bar<int, double>>::value);
    static_assert(!std::instance_of<Foo, Bar<int, double>>::value);
    static_assert(!std::instance_of<Bar, Foo<bool>>::value);
}