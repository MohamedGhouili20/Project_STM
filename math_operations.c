#include "math_operations.h"

// Implémentation de la fonction d'addition
int add(int a, int b) {
    return a + b;
}

// Implémentation de la fonction de soustraction
int subtract(int a, int b) {
    return a - b;
}

// Implémentation de la fonction de multiplication
int multiply(int a, int b) {
    return a * b;
}

// Implémentation de la fonction de division
float divide(int a, int b) {
    if (b == 0) {
        // Gestion de la division par zéro
        return 0;
    }
    return (float)a / b;
}
