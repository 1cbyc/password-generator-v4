#include <stdio.h>
#include "generator.h"
#include "config.h"

int main() {
    Config config = get_user_preferences();
    generate_password(config.length, config.use_uppercase, config.use_digits, config.use_symbols);

    return 0;
}

// i want to connect everything i have done together at this point, let me even test
