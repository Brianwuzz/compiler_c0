#include "myio.h"

const int a = 0, a0 = 10;
int b = 0;

int func_int(int p) {
    return (p);
}

char func_char(int p, int q) {
    return ('0');
}

void func_no_ret() {
}

void main() {
    b = func_int(b);
    func_char(a, b);
    func_no_ret();;
    { ;
    }
    return;
}