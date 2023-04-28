#include <stdio.h>

void entrada01(int *raio){
    printf("Digite o raio: ");
    scanf("%d", raio);
}

void processamento01(int raio, int *diametro, int *perimetro, int *area){
    *diametro = 2*raio;
    *perimetro = (2*3.14)*raio;
    *area = 3.14*(raio^2);
}

void saida01(int diametro,int perimetro,int area){
    printf("Diametro de %d, perimetro de %d e area de %d", diametro, perimetro, area);
}

void questao01(void){
    int raio;
    int perimetro;
    int diametro;
    int area;

    entrada01(&raio);
    processamento01(raio, &diametro, &perimetro, &area);
    saida01(diametro,perimetro,area);
}
