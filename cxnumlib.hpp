//Complex numbers V1 - basic operations

#include <iostream>

//using namespace std;

class ComplexNumber {

    double re; //real part
    double im; //imaginary part

    public:

    //constructors
    ComplexNumber(double in_re, double in_im);
    ComplexNumber(double in_re): ComplexNumber(in_re, 0) {}
    ComplexNumber(): ComplexNumber(0,0) {}

    //destructor
    ~ComplexNumber();

    //methods

        //display number
        void display();

        //get real part value
        double getRe();

        //get imaginary part value
        double getIm();

        //get modulus
        double getMod();

        //get arg (radians)
        double getArg();

        //conjugate - returns complex conjugate
        ComplexNumber con() const;

    //operators overloading

        //operator << overloading
        friend std::ostream &operator << (std::ostream &out, const ComplexNumber &object); //output stream operator overloading
        
        //addition - operator "+" overloading
        ComplexNumber operator+ (const ComplexNumber &object);

        //substraction - operator "-" overloading
        ComplexNumber operator- (const ComplexNumber &object);

        //multiplication - operator "*" overloading
        ComplexNumber operator* (const ComplexNumber &object);

        //division - operator "/" overloading
        ComplexNumber operator/ (const ComplexNumber &object);



};