#pragma once
#include <iostream>
bool isKPeriodic(std::string str, int k)
{
    if (k > str.length() / 2)
        return false;
    int step = 0;
    std::string substr;
    for (int i = 0; i < str.length(); i++)
    {
        if (i < k)
        {
            substr += str[i];
            continue;
        }
        if (substr[step] != str[i])
            return false;
        step += 1;
        if (step == k)
            step = 0;
    }
    if (step != 0)
        return false;
    return true;
}