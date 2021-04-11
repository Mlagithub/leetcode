#include <iostream>
#include <vector>

#include "67.二进制求和.cpp"

template<typename T>
std::ostream& operator << (std::ostream& os, std::vector<T> v)
{
    os << "[";
    for(auto it : v)
    {
        os << it << ",";
    }
    os << "\n";
    return os;
}   

int main(void)
{
    Solution solution;
    auto s1 = "11", s2 = "1";
    std::cout << solution.addBinary(s1, s2);


    return 0;
}