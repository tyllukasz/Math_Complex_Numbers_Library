# Math_Complex_Numbers_Library
Basic mathematical operations for complex numbers - OOP exercise

## Table of Contents
* [General Info](#general-information)
* [Technologies Used](#technologies-used)
* [Features](#features)
* [Setup](#setup)
* [Usage](#usage)
* [Project Status](#project-status)
* [Room for Improvement](#room-for-improvement)
* [Contact](#contact)


## General Information
- Simple C++ library - Object Orientated Programming exercise

## Technologies Used
- C++


## Features
List the ready features here:
- addition
- substraction
- multiplication
- division
- get real part
- get imaginary part
- get modulus
- get argument
- conjugate


## Setup
Include cxnumlib.hpp header file inside the project.


## Usage

class name: ComplexNumber
private parameters: `double re` (real part), `double im` (imaginary part)

Constructor: two parameters - real and imaginary part (default values for both parameter = 0)
`ComplexNumber c1(2,-4)` - real part = 2, imaginary part = -4

Operators:
- addition - use "+" operator to add two ComplexNumber class objects (returns ComplexNumber class object)
`ComplexNumber c1(2,3);`
`ComplexNumber c2(4,-6);`
`ComplexNumber c3;`
`c3 = c1 + c2;`

- substraction - use "-" operator to substract two ComplexNumber class objects (returns ComplexNumber class object)
`ComplexNumber c1(2,3);`
`ComplexNumber c2(4,-6);`
`ComplexNumber c3;`
`c3 = c1 - c2;`

- multiplication - use "*" operator to multiply two ComplexNumber class objects (returns ComplexNumber class object)
`ComplexNumber c1(2,3);`
`ComplexNumber c2(4,-6);`
`ComplexNumber c3;`
`c3 = c1 * c2;`

- division - use "/" operator to divide two ComplexNumber class objects (returns ComplexNumber class object)
`ComplexNumber c1(2,3);`
`ComplexNumber c2(4,-6);`
`ComplexNumber c3;`
`c3 = c1 / c2;`

Public methods:

- display() - shows complex number using standard output stream 'cout'

- getRe() - returns real part of complex number (double)

- getIm() - returns imaginary part of complex number (double)

- getMod() - returns modulus of complex number

- getArg() - returns argument (in radians, <-PI;PI>) of complex number

- con() - returns complex conjugate of complex number (ComplexNumber class object)




## Project Status
Project is: _in progress_


## Room for Improvement
Error handling, additional operations, f.e. powers, roots.

Room for improvement:
- Error handling

To do:
- powers
- roots


## Contact
Created by [@tyllukasz](tyl.lukasz@protonmail.com)
