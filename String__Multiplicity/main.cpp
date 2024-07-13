#include "IsKPeriodic.h"
int main()
{
    std::string str = "abcabcabcabc";
    int k = 3;
    if (isKPeriodic(str, k))
        std::cout << ("True");
    else
        std::cout << ("False");
    return 0;
}