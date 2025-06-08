//1165 - NÚMERO PRIMO
#include <stdio.h>
#include <math.h>

int ehPrimo(int x) {
    if (x <= 1) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;

    int limite = (int) sqrt(x);
    for (int i = 3; i <= limite; i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N, X;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &X);

        if (ehPrimo(X))
            printf("%d eh primo\n", X);
        else
            printf("%d nao eh primo\n", X);
    }

    return 0;
}




//1151 - FIBONACCI FACIL
#include <stdio.h>

int main() {
    int N, i;
    unsigned int fib[46]; // 46 é suficiente para o limite de N

    scanf("%d", &N);

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < N; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for (i = 0; i < N; i++) {
        printf("%u", fib[i]);
        if (i != N-1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}



//1047 - TEMPO DE JOGO COM MINUTOS 
#include <stdio.h>

int main() {
    int hi, mi, hf, mf;
    int duracao_horas, duracao_minutos;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    // Converte tudo para minutos desde o início do dia
    int inicio = hi * 60 + mi;
    int fim = hf * 60 + mf;

    // Calcula a duração em minutos, ajustando para ultrapassar a meia-noite
    int duracao = fim - inicio;
    if (duracao <= 0) {
        duracao += 24 * 60; // soma 24h em minutos
    }

    duracao_horas = duracao / 60;
    duracao_minutos = duracao % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_minutos);

    return 0;
}



//1153 - FATORIAL SIMPLES 
#include <stdio.h>

int main() {
    int N, i;
    unsigned long long fatorial = 1;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        fatorial *= i;
    }

    printf("%llu\n", fatorial);

    return 0;
}



//1013 - O MAIOR 
#include <stdio.h>

int maior(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main() {
    int a, b, c, maiorAB, maiorABC;

    scanf("%d %d %d", &a, &b, &c);

    maiorAB = maior(a, b);
    maiorABC = maior(maiorAB, c);

    printf("%d eh o maior\n", maiorABC);

    return 0;
}

