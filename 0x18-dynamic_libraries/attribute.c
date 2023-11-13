__attribute__((visibility("default"))) int add(int a, int b) {
    return a + b;
}

__attribute__((visibility("default"))) int sub(int a, int b) {
    return a - b;
}

__attribute__((visibility("default"))) int mul(int a, int b) {
    return a * b;
}

__attribute__((visibility("default"))) int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0;  // Handle division by zero error
    }
}

__attribute__((visibility("default"))) int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        return 0;  // Handle modulo by zero error
    }
}
