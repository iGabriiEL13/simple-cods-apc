#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//função para gerar valores aleatorios de 0 a 10 para o usuario
int gerando_numeros(){
    return rand()%11;
}

//função que soma para ajudar na verificação de par ou impar
int soma(int valor1,int valor2){
    int valor,aux;
    valor = (valor1 +valor2);
    aux = valor % 2;
    return aux;
    

}
int main(){
    srand(time(0)); //Para inicializar o gerador de numeros aleatorios

    int numPC = gerando_numeros(); //pegar os valores aleatorios

    //Primeiro vamos ver como o usuario prefere jogar
    printf("Ola, bem vindo ao jogo de par ou impar, vamos nos divertir\n");
    printf("Digite (1) para iniciar o jogo\n");

    //lendo a resposta do usuario
    int resposta_usuario;
    scanf("%d", &resposta_usuario);

    //Se for jogar contra o sozinho/comtra a maquina
    if (resposta_usuario ==1){
        printf("Escolha (1) para impar ou (2) para par\n");
        int nova_resposta;
        scanf("%d", &nova_resposta);

        if (nova_resposta == 2)
        {   
            printf("Escolha o seu numero\n");
            int numero_usuario;
            scanf("%d",&numero_usuario);
            printf("o numero escolhido pelo computador foi: %d\n",numPC);

            if (soma(numero_usuario,numPC)==0)
            {
                printf("Parabens, voce venceu!");
            }else if (soma(numero_usuario,numPC)!=0)
            {
                printf("Que pena,voce perdeu, tente de novo!");
            }
            
         if (nova_resposta == 1)
            {   
                printf("Escolha o seu numero\n");
                int numero_usuario;
                scanf("%d",&numero_usuario);
                printf("o numero escolhido pelo computador foi: %d\n",numPC);
    
                if (soma(numero_usuario,numPC)==0)
                {
                    printf("Que pena,voce perdeu, tente de novo!");
                }else if (soma(numero_usuario,numPC)!=0)
                {
                    printf("Parabens, voce venceu!");
                }
            }
        }
 
    } else if (resposta_usuario !=1)
    {
        printf("!!!! ERROR! INICIE NOVAMENTE PARA JOGAR !!!!!");
    }

}