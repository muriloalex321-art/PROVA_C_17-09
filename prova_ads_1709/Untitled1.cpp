
#include <stdio.h>

int main() {

    char nome[50];
    int idade;
    int a, b;
    float compra; //foi adicionado essa variavel para a realização da etapa 2
    float nota1, nota2, media;
    int numero;
    float salario;
    int opcao;
    float x, y, resultado;
    float altura, peso;

    // 1. Nome
    printf("Digite seu nome: ");
    scanf("%s", &nome); //faltou o &
    printf("Ola, %s!\n", nome); //foi feita a substituição do %d por %s

    // 2. Idade
    printf("\nDigite sua idade: ");
    scanf("%d", &idade); //foi feita a substituição do %f por %d

    if (idade >= 18){ // foi adicionado {}
	
        printf("Entrada permitida\n");
	}
	else {
	
        printf("Entrada nao permitida\n");
    }
    // 3. Soma
    printf("\n Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    // essa linha foi retirada : printf("%d", &b);
    int soma; //foi adicionado a variavel soma 
	soma = a + b;   
    printf("Soma = %d\n",soma);

    // 4. Maior numero
    printf("\nDigite dois inteiros: ");
    scanf("%d %d", &a, &b); // foi adicionado outro %d

    if (a > b){ // foi adicionado {} e feito a troca de < por >
    	printf("Maior = %d\n", a);
	}
    else
        printf("Maior = %d\n", b);

    // 5. Media
    printf("\nDigite duas notas: ");
    scanf("%f %f", &nota1, &nota2);
    media = (nota1 + nota2) / 2; // foi feita a alteração na variavel media de (media = nota1 - nota2) para (media = (nota1 + nota2) / 2)

    if (media >= 7){ // foi adiconado {}
	
        printf("Aprovado\n");
    }
    else
        printf("Reprovado\n"); // foi adicionado ;

    // 6. Positivo, negativo ou zero
    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    if (numero < 0) { // foi adiconado {} e substituição de > por <
	    printf("Negativo\n");
    }
    else if (numero > 0){ // foi adiconado {} e substituição de < por >
        printf("Positivo\n");
    }
    else
        printf("Zero\n");

    // 7. Par ou impar
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) // feita a substituição de 1 por 0
        printf("Par\n");
    else
        printf("Impar\n");

    // 8. Calculadora
    printf("\nDigite dois numeros: ");
    scanf("%f %f", &x, &y);

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = x + y;
            break;
        case 2:
            resultado = x - y;
            break;
        case 3:
            resultado = x * y;
            break;
        case 4:
            resultado = x / y;
            break;
        default:
            printf("Opcao invalida\n");
    }

    printf("Resultado = %f\n", resultado); // feito a troca de %d para %f

    // 9. Salario
    float salarionovo //foi adicionado a variavel float salarionovo
    printf("\nDigite seu salario: ");
    scanf("%f", &salario);

    salarionovo = salario + salario * 0.10; // feito a troca de (    salario = salario - salario * 0.10;) para (salarionovo = salario + salario * 0.10;)

    printf("Novo salario: %.2f\n", salarionovo);

    // 10. Concurso
    printf("\nDigite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua nota: ");
    scanf("%f", &nota1); // feito a troca de %d para %f

    if (nota1 >= 60)
        printf("%s: aprovado\n", nome);
    else
        printf("%s: reprovado\n", nome);

    // DESAFIO
    printf("\n===== RELATORIO =====\n");

    printf("Nome: ");
    scanf("%s", &nome); // foi trocado %c por %s e adicionado &

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura: "); // foi trocado %d por %f
    scanf("%f", &altura);

    printf("Peso: "); // foi trocado %d por %f
    scanf("%f", &peso);


    printf("\n===== RELATORIO =====\n"); 
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Peso: %.2f kg\n", peso);


//Etapa 2: Forma de Pagamento
//Exiba um menu com as opções de pagamento:
//1 - A vista (Dinheiro/Pix)
//2 - Cartao de Credito
//Leia a opção do usuário (inteiro) usando switch:
//Opção 1: Aplique mais 5% de desconto extra sobre o valor final da Etapa 3.
//Opção 2: Mantenha o valor final calculado na Etapa 3.
//Opção padrão (default): Exiba Opcao invalida, mantendo valor sem desconto extra.


//Etapa 3: Relatório Final
//Ao final, imprima um resumo organizado na tela contendo:
//Nome do cliente.
//Valor original da compra.
//Valor final a pagar (formatado com 2 casas decimais, ex: R$ 150.00).


    float compra; //foi adicionado essa variavel para a realização da etapa 2
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite o valor da sua compra: ");
    scanf("%f", &compra);
    printf("Escolha a forma de pagamento: \n");
    printf("1 - A vista (Dinheiro/Pix)\n");
    printf("2 - Cartao de Credito\n");
    printf("Qual a forma de pagamento: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = compra - compra * 0.10;
            break;
        case 2:
            resultado = compra;
            break;

        default:
            printf("Exiba Opcao invalida, mantendo valor sem desconto extra.");
	}
    printf("=========RESUMO DA COMPRA=========\n");       
    printf("Nome do cliente: %s\n", nome);
    printf("Valor original da compra: %.2f\n", compra);
    printf("Valor da compra com desconto: %.2f\n", resultado);




    return 0; // foi trocado 01 por 0
}





