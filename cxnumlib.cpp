#include <iostream>
#include <cstdlib>
#include <cmath> 
#include "cxnumlib.hpp"

//constructor
ComplexNumber::ComplexNumber(double in_re, double in_im): re(in_re), im(in_im) {}

//destructor
ComplexNumber::~ComplexNumber() {}

//methods
    //display number
    void ComplexNumber::display() {

        if (im > 0 ) {
            std::cout << re << " + " << im << "i";
        }
        else if (im < 0) {
            std::cout << re << " - " << abs(im) << "i";
        }
        else if (re == 0 && im != 0) {
            std::cout << im <<"i";
        }
        else if (im == 0) {
            std::cout << re;
        }
    }

    //get real part value
    double ComplexNumber::getRe() {
        return re;
    }

    //get imaginary part value
    double ComplexNumber::getIm() {
        return im;
    }

    //get modulus
    double ComplexNumber::getMod() {
        return sqrt(re*re + im*im);
    }

    //get argument
    double ComplexNumber::getArg() {
        
        double out = 0;
        try {
            if (re > 0 || im != 0) {
                out = 2 * atan( im / (re + getMod()) ); 
            }
            else if (re < 0 && im == 0) {
                out = M_PI;
            }
            else if (re == 0 && im == 0) {
                throw "Undefined value!";
            }
        }
        catch (const char* msg) {
            std::cerr << msg << std::endl;
            out = 0; //to be improved
        }

        return out;
    }

    //conjugate - returns complex conjugate
    ComplexNumber ComplexNumber::con() const {
        ComplexNumber temp;
        temp.re = re;
        temp.im = -im;

        return temp;    
    }

//operators overloading

    //operator << overloading
    std::ostream &operator << (std::ostream &out, const ComplexNumber &object) {

        if (object.im > 0 && object.re != 0) {
            out << object.re << " + " << object.im << "i";
        }
        else if (object.im < 0 && object.re != 0) {
            out << object.re << " - " << abs(object.im) << "i";
        }
        else if (object.re == 0 && object.im != 0) {
            out << object.im <<"i";
        }
        else if (object.im == 0) {
            out << object.re;
        }
        return out;
    }

    //addition - operator "+" overloading
    ComplexNumber ComplexNumber::operator+ (const ComplexNumber &object) {
        ComplexNumber temp;
        temp.re = re + object.re;
        temp.im = im + object.im;
        return temp;
    }

    //substraction - operator "-" overloading
    ComplexNumber ComplexNumber::operator- (const ComplexNumber &object) {
        ComplexNumber temp;
        temp.re = re - object.re;
        temp.im = im - object.im;
        return temp;
    }

    //multiplication - operator "*" overloading
    ComplexNumber ComplexNumber::operator* (const ComplexNumber &object) {
        ComplexNumber temp;
        temp.re = re * object.re - im * object.im;
        temp.im = re * object.im + im * object.re;

        return temp;
    }

    //division - operator "/" overloading
    ComplexNumber ComplexNumber::operator/ (const ComplexNumber &object) {
        ComplexNumber temp;
        double denominator;

        temp = *this * object.con();
        denominator = object.re * object.re + object.im * object.im;

        temp.re = temp.getRe() / denominator;
        temp.im = temp.getIm() / denominator;
        
        return temp;
    }