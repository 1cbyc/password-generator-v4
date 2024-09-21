#include <stdio.h>
#include "config.h"

#include <stdio.h>
#include "config.h"

Config get_user_preferences() {
    Config config;
    printf("Enter password length: ");
    scanf("%d", &config.length);
    printf("Use uppercase letters? (1 for yes, 0 for no): ");
    scanf("%d", &config.use_uppercase);
    printf("Use digits? (1 for yes, 0 for no): ");
    scanf("%d", &config.use_digits);
    printf("Use symbols? (1 for yes, 0 for no): ");
    scanf("%d", &config.use_symbols);

    return config;
}
