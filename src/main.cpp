
#include "includes/Main.hpp"

class ComplexNumber {
    public:
        int real;
        int comp;
};

class Point {
    public:
        ComplexNumber   x,
                        y,
                        z;
};



int main()
{
    initializeProgram();

    terminateProgram();
    return EXIT_SUCCESS;
}