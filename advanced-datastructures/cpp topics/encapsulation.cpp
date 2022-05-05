/**
 * @file encapsulation.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-05-03
 *
 * @copyright Copyright (c) 2022
 *
 */

// Encapsulation is a mechanism using to restrict access to some components of an object.
// A class is a template from which objects can be created from.

#include <iostream>

using namespace std;

class BoxClass
{
public:
    double getVolume(void)
    {
        return length * breadth * height;
    }
    BoxClass(double length, double breadth, double height)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

private:
    double length;
    double breadth;
    double height;
};

/**
 * @brief Modes of inheritance
 *
 * @return int
 *    - private
 *    - protected
 *    - public
 * */

int main()
{
    BoxClass box = new BoxClass(10, 20, 30);

    cout << box.getVolume() << endl;

    return 0;
}

/**
 * @brief Types of inheritanc
 *  single inheritance
 *  Multiple inheritance
 *
 *
 *  🫣: The diamond problem occurs when two superclasses of a class have a common base class
 */
