#ifndef CONFIG_H
#define CONFIG_H

typedef struct {
    int length;
    int use_uppercase;
    int use_digits;
    int use_symbols;
} Config;

Config get_user_preferences();

#endif

// so i am trying to define configurations for input handling and settings, hope it works