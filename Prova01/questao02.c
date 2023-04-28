#include <stdio.h>

entrada02(int *salarioBr){
    printf("Digite o salario bruto: ");
    scanf("%d", salarioBr);
}

processamento02(int salarioBr, int *salarioLiq){
    *salarioLiq = (salarioBr<2000) ? salarioBr - (salarioBr*0.1) : salarioBr - (salarioBr*0.2);
}

saida02(int salarioLiq){
    printf("O salario liquido e: %d", salarioLiq);
}

void questao02(void){
    int salarioBr;
    int salarioLiq;

    entrada02(&salarioBr);
    processamento02(salarioBr,&salarioLiq);
    saida02(salarioLiq);
}
