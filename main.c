#include <stdio.h>
#include <stdbool.h>
int main()
{
    char op;
    float vel_inicio, vel_fim, acel, tempo;
    
    while(true)
    {
        printf("--------- M.R.U.V ---------\n");
        printf("[1] Velocidade Inicial\n"
               "[2] Velocidade Final\n"
               "[3] Aceleração\n[4] Tempo\n"
               "[5] Sair\nOpção: ");
        op = getchar();
        printf("---------------------------\n\n");
        switch(op)
        {
            case '1':
                printf("Velocidade final (Km/h): ");
                scanf("%f", &vel_fim);
                printf("Aceleração (Km/h²): ");
                scanf("%f", &acel);
                printf("Tempo (h): ");
                scanf("%f", &tempo);
                vel_inicio = vel_fim - acel*tempo;
                printf("Velocidade inicial de %g Km/h\n\n", vel_inicio);
                break;
            case '2':
                printf("Velocidade inicial (Km/h): ");
                scanf("%f", &vel_inicio);
                printf("Aceleração (Km/h²): ");
                scanf("%f", &acel);
                printf("Tempo (h): ");
                scanf("%f", &tempo);
                vel_fim = vel_inicio + acel*tempo;
                printf("Velocidade final de %g Km/h\n\n", vel_fim);
                break;
            case '3':
                printf("Velocidade inicial (Km/h): ");
                scanf("%f", &vel_inicio);
                printf("Velocidade final (Km/h): ");
                scanf("%f", &vel_fim);
                printf("Tempo (h): ");
                scanf("%f", &tempo);
                acel = (vel_fim-vel_inicio)/tempo;
                printf("Aceleração de %g Km/h²\n\n", acel);
                break;
            case '4':
                printf("Velocidade inicial (Km/h): ");
                scanf("%f", &vel_inicio);
                printf("Velocidade final (Km/h): ");
                scanf("%f", &vel_fim);
                printf("Aceleração (Km/h²): ");
                scanf("%f", &acel);
                tempo = (vel_fim-vel_inicio)/acel;
                printf("Tempo de %g h\n\n", tempo);
                break;
            case '5':
                return 0;
            default:
                printf("Opção inválida!\n\n");
        }
        if(op!='\n')
            getchar();
    }
}