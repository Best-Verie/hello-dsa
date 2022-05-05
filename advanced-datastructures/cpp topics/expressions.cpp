/**
 * @file expressions.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-05-03
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief Binary expressions
 * - Bitwise and (&)
 * - Bitwise or (|)
 * - Bitwise exclusive or (^)
 * - Bitwise left shift (<<)
 */

/**
 * @brief Other operators
 * - class name::member  -> class scope resolution
 * - namespace name::member -> namespace resolution
 * - bool exp ? true exp : false exp -> conditional expression
 */

/**
 * @brief Casting
 * Casting is technique that allows you to change type of a variable
 */

#include <iostream>

using namespace std;

int main()
{
    // c-style cast
    int cat = 5;
    double dog = (double)cat;
    cout << dog << endl;
    // c++  functional cat
    double pig = double(cat);
}
