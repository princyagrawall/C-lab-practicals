#include <stdio.h>

struct Complex {
     float real, imag;
};

struct Complex read() {
    struct Complex c;
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

void print(struct Complex c) {
    printf("%.1f + %.1fi\n", c.real, c.imag);
}

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex r = {a.real + b.real, a.imag + b.imag};
    return r;
}

struct Complex sub(struct Complex a, struct Complex b) {
    struct Complex r = {a.real - b.real, a.imag - b.imag};
    return r;
}

int main() {
    struct Complex x, y, s, d;
    printf("Enter first complex (real imag): ");
    x = read();
    printf("Enter second complex (real imag): ");
    y = read();
    s = add(x, y);
    d = sub(x, y);
    printf("Sum: ");
    print(s);
    printf("Difference: ");
    print(d);
    return 0;
}
