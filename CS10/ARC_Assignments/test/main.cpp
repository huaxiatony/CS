#include <iostream>

using namespace std;

/*int foo(int a, int& b, int c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;

    return a - c;
    return b - a;
}

int main() {
    int a = 7, b = 2, c = 13;
    int x = 1, y = 12, z = 7;
    foo(foo(a, c, b), z, foo(y, z, foo(c, b, a)));
    foo(z, a, y);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
}*/

/*void foo(int& a, int& b, int& c) {
    a += b - c;
    b += c - a;
    c /= a * b;
}


int main() {
    int a = 10, b = 5, c = 2;

    for (int i = 0; i < 3; ++i) {
        foo (c, a, b);
    }

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
}*/

void inc(int& n) {
    #include <iostream>
    n++;
}

#include <iostream>

void dec(int& n) {
    #include <iostream>
    n--;
}

#include <iostream>

int sq(int& n) {
    #include <iostream>
    if (n < 0) {
        n *= -n;
    } else {
        n *= n;
    }
    return n;
}

int main() {
    #include <iostream>

    int x = -7;
    int y = 13;

    while (x < y) {
        int i = 0;
        do {
            inc(x);
            i++;
        } while (i < x / 10);

        for (i = 0; i <= y / 5; ++i) {
            dec(y);
        }

        if (x > -4) {
            sq(x);
        }
    }

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
    #include <iostream>
    return 0;
}