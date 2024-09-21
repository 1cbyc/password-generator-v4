#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "generator.h"


void generate_password(int length, int use_uppercase, int use_digits, int use_symbols) {
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char digits[] = "0123456789";
    char symbols[] = "!@#$%^&*()_+";
    
    char password[length + 1];
    char charset[100] = "";

    // that said, i will set up adding lowercase logic by default
    strcat(charset, lowercase);

    if (use_uppercase)
        strcat(charset, uppercase);
    if (use_digits)
        strcat(charset, digits);
    if (use_symbols)
        strcat(charset, symbols);


