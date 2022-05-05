/**
 * @file datatypes.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-05-03
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief There exists so many data types in cpp
 *
 *   1. Int
 *         short int (plain)  -> 16 bits
 *         long int           -> 32 bits
 *
 *   2. Enumeration is a user-defined type that can hold any of a set of discrete values.
 *   3. Floating points
 *        All floating types below  3.14× 105 are double whereas those greater are floats
 *   3. String
 *       1. Strings from string class
 *       2. C-style strings: these are one diamensional arrays terminated by '\0'
 *
 */

#include <iostream>

using namespace std;

int main()
{
    enum Day
    {
        SUN,
        TUE,
        WED,
        THU
    };

    // c-style strings
    // char name[] = "Kindle";

    // string from string class
    string name = "Veritem";

    /**
     * @brief  string manipulation methods from c
     *   To use these functions you need to include <cstring>
     *   - strcpy: copy string
     *   - strcat: concatenate string
     *   - strlen: length of string
     *   - strcmp: compare string
     *   - strchr: find character in string
     *   - strstr: find substring in string
     */

    /**
     * @brief String manupulation functions from c++
     *   To use these functions you need to include <string>
     *  - string::c_str() : returns a pointer to the string
     * - string::length()  : returns the length of the string
     * - string::compare() : compares two strings
     * - string::find()  : finds a substring in a string
     * - string::substr() : extracts a substring from a string
     * - string::append() : appends a string to another string
     * - string::insert() : inserts a string into another string
     * - string::replace() : replaces a substring in a string
     * - string::erase() : erases a substring from a string
     * - string::clear() : clears a string
     * - string::resize() : resizes a string
     *
     */

    /**
     * @brief Arrays
     *  Arrays is a datastructure that holds a collection of elements of the same type in contiguous memory and can acced by index
     *
     */

    /**
     * @brief C-structures
     *
     */

    enum MealType
    {
        NO_PREF,
        REGULAR,
        LOW_FAT,
        VEGETARIAN
    };

    struct Passenger
    {
        string name;
        MealType mealType;
    };

    Passenger p1 = {"John", NO_PREF};

    cout << p1.name << endl;

    // A typedef declaration lets you define your own identifiers that can be used in place of type specifiers such as int , float , and double
    // Basically it provide shorter or more meaningful synonyms for various types.

    return 0;
}

/**
 * @brief Abstract data types
 *
 * ADT is a type for objects whose behavior is defined by a set of values and a set of operations
 *
 */
