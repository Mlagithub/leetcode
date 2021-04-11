#include <iostream>

#include "66.加一.cpp"

template<typename T>
std::ostream& operator << (std::ostream& os, std::vector<T> v)
{
    os << "[";
    for(auto it : v)
    {
        os << it << ",";
    }
    os << "\b]\n";
    return os;
}   

int main(void)
{
    Solution solution;
    std::vector<int> in{9};
    std::cout << solution.plusOne(in);

    return 0;
}