#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        double a, b;
        char op;

        // Lê na mesma linha: número, operador e outro número
        scanf("%lf %c %lf", &a, &op, &b);

        if (op == '+') {
            printf("%.2lf\n", a + b);
        } else if (op == '-') {
            printf("%.2lf\n", a - b);
        } else if (op == '*') {
            printf("%.2lf\n", a * b);
        } else if (op == '/') {
            if (b != 0)
                printf("%.2lf\n", a / b);
            else
                printf("Erro: divisão por zero\n");
        } else {
            printf("Operador inválido\n");
        }
    }

    return 0;
}
