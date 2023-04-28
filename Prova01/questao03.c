#include <stdio.h>

void entrada03(int *vlrPag,int *vlrCmp){
    printf("Digite valor da compra: ");
    scanf("%d", vlrCmp);
    printf("Digite valor do pagamento: ");
    scanf("%d", vlrPag);
}

void processamento03(int vlrPag, int vlrCmp, int *notas100, int *notas10, int *notas1){
    int troco;
    if(vlrPag<vlrCmp){
            printf("Pagamento Negado");
    }else{
        troco = vlrPag - vlrCmp;
        *notas100 = troco/100;
        troco = troco%100;
        *notas10 = troco/10;
        troco = troco%10;
        *notas1 = troco;
    }
}

void saida03(int notas100, int notas10, int notas1, int troco){
    printf("O troco sera de %d, com %d notas de 100, %d notas de 10 e %d notas de 1", troco, notas100, notas10, notas1);
}

void questao03(void){
    int vlrPag;
    int vlrCmp;
    int notas100;
    int notas10;
    int notas1;
    int troco;

    entrada03(&vlrPag,&vlrCmp);
    processamento03(vlrPag,vlrCmp,&notas100,&notas10,&notas1);
    saida03(notas100,notas10,notas1,vlrPag-vlrCmp);
}
