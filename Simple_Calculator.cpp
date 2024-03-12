#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple_Calculator
{
private:
    // First_Number, Second_Number;
    int a, b;
    char Operation;

public:
    Simple_Calculator();

    int Addition(int, int);
    int Subtraction(int, int);
    int Division(int, int);
    int Multiplication(int, int);
    
    void Perform();//Will choose the operation to perform and respond.
    
    ~Simple_Calculator();
};

Simple_Calculator::Simple_Calculator()
{
    cout << "Operation which can be performed are : (+ , - , * , /)" << endl;
    cout << "Enter the expression: " << endl;
    // Taking the input along with expression.
    cin >> a >> Operation >> b;
}

int Simple_Calculator::Addition(int a, int b)
{
    cout << "Sum of " << a << " + " << b << " = " << a + b << endl;
}

int Simple_Calculator::Subtraction(int a, int b)
{
    cout << a << " - " << b << " = " << a - b << endl;
}

int Simple_Calculator::Multiplication(int a, int b)
{
    cout << a << " * " << b << " = " << a * b << endl;
}

int Simple_Calculator::Division(int a, int b)
{
    if (b != 0)
    {
        cout << a << " / " << b << " = " << a / b << endl;
    }
    else
        cout << "ERROR! Division by zero is not allowed!";
}

void Simple_Calculator::Perform()
{
    switch (Operation)
    {
    case '+':
        Addition(a, b);
        break;
    case '-':
        Subtraction(a, b);
        break;
    case '*':
        Multiplication(a, b);
        break;
    case '/':
        Division(a, b);
        break;
    default:
        cout << "Invalid Input....." << endl;
        break;
    }
}

Simple_Calculator::~Simple_Calculator()
{
    cout << "Exiting..." << endl;
}

int main()
{
    cout << "\t\tSIMPLE CALCULATOR" << endl
         << endl;
         
    Simple_Calculator Equation;
    Equation.Perform();

    return 0;
}