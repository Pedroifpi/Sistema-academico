#include <stdio.h>
int main(void){
    char url[]="notas.txt";
    float nota,
    media=0.0;
    FILE*arq;

    arq=fopen(url,"w");
    if(arq==NULL)
    printf("Erro,nao foi possivel abrir o arquivo\n");
    else{
        printf("nota de matematica:");
        scanf("%f",&nota);
        fprintf(arq,"matematica:%.2f\n",nota);
        media+=nota;
        printf("nota de fisica:");
        scanf("%f",&nota);
        fprintf(arq,"fisica:%.2f\n",nota);
        media+=nota;

        printf("nota de quimica:");
        scanf("%f",&nota);
        fprintf(arq,"quimica:%.2f\n",nota);
        media+=nota;

        media/=3;
         fprintf(arq,"media final:%.2f\n",media);
    }
    fclose(arq);
    return 0;
}
