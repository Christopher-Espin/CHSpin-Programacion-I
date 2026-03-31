#include <stdio.h>

int main (int argc, char *argv[]) {
    int num1, num2;
    int incremento;
    do
    {
        printf("INGRESE EL NUMERO INICIAL: \n");
        scanf("%d", &num1);
        if (num1 < 0)
        {
            printf("INGRESE UN NUMERO VALIDO\n");
        }
        
    } while (num1 <0);
    do
    {
        printf("INGRESE EL NUMERO FINAL: \n");
        scanf("%d", &num2);
        if (num2 < 0)
        {
            printf("INGRESE UN NUMERO VALIDO\n");
        }
        if (num2 <= num1)
        {
            printf("INGRESE UN NUMERO MAYOR AL NUMERO INICIAL\n");
        }
        
        
    } while (num2 <0 || num2 <= num1 );
    do
    {
        printf("INGRESE EL VALOR DEL INCREMENTO: \n");
        scanf("%d", &incremento);
        if (incremento <= 0)
        {
            printf("EL INCREMENTO NO PUEDE SER MENOR O IGUAL A 0\n");
        }
        
    } while (incremento <= 0);

    for (int i = num1; i <= num2; i+=incremento)
    {
        printf("EL VALOR DEL INCREMENTO HASTA EL MOMENTO ES DE: %d \n", i);
        if (i+incremento > num2)
        {
            printf("NO SE PUEDE CONTINUAR YA QUE EL SIGUIENTE NUMERO ES:%d EL CUAL NO CUMPLE CON LAS CONDICIONES DEL PROGRAMA", i+incremento);
        }
        
    }
    

    
    return 0;
}