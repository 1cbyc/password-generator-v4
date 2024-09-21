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
