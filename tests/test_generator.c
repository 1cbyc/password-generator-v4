#include <assert.h>
#include "generator.h"

void test_generate_password() {
    // while at it, i will keep adding specific tests
    generate_password(10, 1, 1, 1);
}

int main() {
    test_generate_password();
    return 0;
}
