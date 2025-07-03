// Author: Amrit Singh
// Created: 2025-07-02 09:19:02
// Notes: variables, datatype and operator
#include <iostream>
using namespace std;

int main() {
    // (data types)

    int marks = 94;
    char grade = 'A';
    float PI = 3.14f;
    double point = 99.99;
    bool pass = true;

    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    cout << "Value of Pi: " << PI << endl;
    cout << "Dettol germs killing accuracy: " << point << endl;
    cout << "Status: " << pass << endl;

    // (Type casting)

    int int_value_of_char = grade;
    cout << int_value_of_char << endl;

    int double_to_int = point;
    cout << double_to_int << endl;

    // (input by user)

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;

    // (arithmatic operators)

    int m = 8, n = 2;

    int sum = m + n;
    cout << sum << endl;

    cout << "Sum: " << (m + n) << endl; // sum +
    cout << "Difference: " << (m - n) << endl; // difference -
    cout << "Product: " << (m * n) << endl; // times *
    cout << "Division: " << (m / n) << endl; // parts /
    cout << "Modulo: " << (m % n) << endl; // remainder %

    // Note: when you try to divide and the output is some decimal value then this happens
    cout << "3 / 2 = " << (3 / 2) << " (output should 1.5 but c++ ate .5)" << endl;
    // this is because we are dividing int to int so we get value in int
    // to solve this we need to divide a int value to a float or double
    // for that we need to make a float or double variable or we need to typecast one value
    cout << "3 / 2 = " << ((float)3 / 2); // problem solved
    
    // (rational operators): these return bool values only i.e. true - 1 or false - 0

    int x = 4, y = 7;
    cout << (x == y) << endl; // equal
    cout << (x != y) << endl; // not equal
    cout << (x < y) << endl; // less then
    cout << (x > y) << endl; // more then
    cout << (x <= y) << endl; // less then or equal
    cout << (x >= y) << endl; // more then or equal

    // (logical operators): and - &&, or - ||, not - !

    // not
    cout << true << endl; // true - 1
    cout << !(true) << endl; // not ture = false - 0
    cout << (3 < 4) << endl; // this is a ture statement so - 1
    cout << !(3 < 4) << endl; // this is a non ture statement so - 0
    // && and || you will understand better in loops and if-else statements later :)

    // (Unary number operator)

    int a = 10, b = a++; // first a stores in b then incremented
    cout << a << endl;   // 10 - so initaily a remains unchanged because it's not incremented 
    cout << b << endl;   // 11 - but now a was incremented and stored in b

    int c = 10, d = ++c; // first c get incremented then stores in d
    cout << c << endl;   // 11 - so initaily c increments and then stores in d
    cout << d << endl;   // 11 - incremented value of c was sotred in d

    int e = 10, f = e--; // first e stores in f then decremented
    cout << e << endl;   // 10 - so initaily e remains unchanged because it's not decremented 
    cout << f << endl;   // 9 - but now e was decremented and stored in f

    int g = 10, h = --g; // first g get decremented then stores in h 
    cout << g << endl;   // 9 - so initaily g decrements and then stores in h
    cout << h << endl;   // 9 - decremented value of g was sotred in h

    return 0;
}