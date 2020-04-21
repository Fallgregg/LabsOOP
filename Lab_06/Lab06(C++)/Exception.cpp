#include "Exception.h"

Exception::Exception(double a, double b, double c, double d) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
}

double Exception::value() {
    try {
        if (d > 41) {
            throw "Expression`s root has negative value";
        }
    }

    catch (const char* ch) {
        MessageBoxA(GetActiveWindow(), ch, "Error!", MB_ICONERROR);
        //exit(1);
    }

    try {
        if (sqrt(41 - d) - b * a + c == 0) {
            throw "Expression`s denominator is zero";
        }
    }

    catch (const char* ch) {
        MessageBoxA(GetActiveWindow(), ch, "Error message", MB_ICONERROR);
        //exit(1);
    }

    return (a * b / 4.0 - 1) / (sqrt(41 - d) - b * a + c);
}
