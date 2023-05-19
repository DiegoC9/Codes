#include <stdio.h>

int main() {
    
    double s, a, b, c, d, e;

    scanf("%lf", &s);

    a = s * 1.15;
    b = s * 1.12;
    c = s * 1.1;
    d = s * 1.07;
    e = s * 1.04;

    if(s >= 0 && s <= 400) {
        printf("Novo salario: %.2lf\n", a);
        printf("Reajuste ganho: %.2lf\n", a - s);
        printf("Em percentual: 15 %%\n");
    }
    if(s > 400 && s <= 800) {
        printf("Novo salario: %.2lf\n", b);
        printf("Reajuste ganho: %.2lf\n", b - s);
        printf("Em percentual: 12 %%\n");
    }
    if(s > 800 && s <= 1200) {
        printf("Novo salario: %.2lf\n", c);
        printf("Reajuste ganho: %.2lf\n", c - s);
        printf("Em percentual: 10 %%\n");
    }
    if(s > 1200 && s <= 2000) {
        printf("Novo salario: %.2lf\n", d);
        printf("Reajuste ganho: %.2lf\n", d - s);
        printf("Em percentual: 7 %%\n");
    }
    if(s > 2000) {
        printf("Novo salario: %.2lf\n", e);
        printf("Reajuste ganho: %.2lf\n", e - s);
        printf("Em percentual: 4 %%\n");
    }
    
    return 0;
}