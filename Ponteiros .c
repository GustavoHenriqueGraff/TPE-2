//1020 - IDADE EM DIAS 
#include <stdio.h>

int main() {
    int dias, anos, meses, dias_restantes;
    scanf("%d", &dias);
    anos = dias / 365;
    dias = dias % 365;
    meses = dias / 30;
    dias_restantes = dias % 30;
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias_restantes);

    return 0;
}



//1040 - MÉDIA 3
#include <stdio.h>

int main() {
    float N1, N2, N3, N4, media, exame, media_final;

    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;

    printf("Media: %.1f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        media_final = (media + exame) / 2;
        if (media_final >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media_final);
    }

    return 0;
}



//1173 - PREENCHIMENTO DE VETOR II
#include <stdio.h>

int main() {
    int N, i;

    scanf("%d", &N);

    for (i = 2; i <= N; i += 2) {
        printf("%d^2 = %d\n", i, i * i);
    }

    return 0;
}



/1074 - PAR OU IMPAR
  #include <stdio.h>

int main() {
    int N, X, i;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &X);

        if (X == 0) {
            printf("NULL\n");
        } else {
            if (X % 2 == 0) {
                printf("EVEN ");
            } else {
                printf("ODD ");
            }

            if (X > 0) {
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        }
    }

    return 0;
}




//1021 - NOTAS E MOEDAS 
  #include <stdio.h>

int main() {
    double valor;
    int notas, moedas;
    int centavos;

    scanf("%lf", &valor);
    centavos = (int)(valor * 100 + 0.5);

    printf("NOTAS:\n");

    // Notas
    notas = centavos / 10000;
    printf("%d nota(s) de R$ 100.00\n", notas);
    centavos %= 10000;

    notas = centavos / 5000;
    printf("%d nota(s) de R$ 50.00\n", notas);
    centavos %= 5000;

    notas = centavos / 2000;
    printf("%d nota(s) de R$ 20.00\n", notas);
    centavos %= 2000;

    notas = centavos / 1000;
    printf("%d nota(s) de R$ 10.00\n", notas);
    centavos %= 1000;

    notas = centavos / 500;
    printf("%d nota(s) de R$ 5.00\n", notas);
    centavos %= 500;

    notas = centavos / 200;
    printf("%d nota(s) de R$ 2.00\n", notas);
    centavos %= 200;

    printf("MOEDAS:\n");

    moedas = centavos / 100;
    printf("%d moeda(s) de R$ 1.00\n", moedas);
    centavos %= 100;

    moedas = centavos / 50;
    printf("%d moeda(s) de R$ 0.50\n", moedas);
    centavos %= 50;

    moedas = centavos / 25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);
    centavos %= 25;

    moedas = centavos / 10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);
    centavos %= 10;

    moedas = centavos / 5;
    printf("%d moeda(s) de R$ 0.05\n", moedas);
    centavos %= 5;

    moedas = centavos / 1;
    printf("%d moeda(s) de R$ 0.01\n", moedas);

    return 0;
}

