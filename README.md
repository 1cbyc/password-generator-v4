# passwrod-generator-v4

the thing is, this project was first built with c# by me 3 years ago. i intend to modify it solely in C, since i have some personal needs for that.

the core functionality:

1. generate strong random passwords of variable lengths.
2. include options for character sets (lowercase, uppercase, digits, symbols).
3. allow users to specify the length and complexity.

that said, i have to make the main module i will use to manage the program flow. then, build the randomness module for generating secure random integers. after which i will design the password generation module to help me with constructing passwords based on what the user defined for it. that said, i am thinking i should add a configuration file input handling method to allow anyone have their own configuration method for passwords in case anyone wants to use my tool for their application. since all that would've been done i will make a way for logging errors; atleast to save generation history in a way.

## this is how it works

1. run the make command
2. run the program

