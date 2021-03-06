#include <stdio.h>
#include <math.h>

//Codigo by: Saulo Terceiro
//Computa��o Unipe 2019 


bool primo(int);
void imprimePrimo();
float fatorial(float);
void caso1();
void verificaListaPrimo();
float potencia(float,int);
void caso4();
float raiz(double, double);
void caso5();
void caso6();
void caso7();
void caso8();
void caso9();
bool notaValida(float);
void caseMenu(int);
int main();


int main(){
	int x = 1;
	while(x!=0){

		printf("/*************************************************************************************************************/ \n");
		printf("                                              \n");
		printf("Escolha uma opcao de 0 a 9 \n");
		printf("                                              \n");
		printf("0 - Sair \n");
		printf("1 - Calcula Fatorial \n");
		printf("2 - Calcula se um numero eh primo \n");
		printf("3 - Verifica uma lista de primo \n");
		printf("4 - Recebe base e expoente, calcula a potencia, depois retorna em cientifico\n");
		printf("5 - Calcula a raiz recebendo base e a raiz\n");
		printf("6 - Calcula se o ano eh bissexto \n");
		printf("7 - Calcula a media de duas notas testando se � validas \n");
		printf("8 - Calcula a media ponderada de 3 notas \n");
		printf("9 - Printa o nome do aluno e a matricula em hexadecimal\n");
		printf("                                              \n");
		printf("/*************************************************************************************************************/ \n");
		scanf("%d",&x);
		if(x<0||x>9){
			printf("Numero invalido\n");
		}else{

			caseMenu(x);
		}

	}
	return 0;
}

//Menu recebendo um numero
void caseMenu(int x){
	
	switch(x){
		case(1):{
			caso1();
			break;
		}
		case(2):{
			imprimePrimo();
			break;
		}
		case(3):{
			verificaListaPrimo();
			break;
		}
		case(4):{
			caso4();
			break;
		}
		case(5):{
			caso5();
			break;
		}
		case(6):{
			caso6();
			break;
		}
		case(7):{
			caso7();
			break;
		}
		case(8):{
			caso8();
			break;
		}
		case(9):{
			caso9();
			break;
		}
	}
}

//Imprime se o numero � primo ou n�o, chamando Primo()
void imprimePrimo(){
	int x;
	printf("Digite o numero para saber se eh primo:\n");
	scanf("%d",&x);
	bool primoNumero;
	if(x>=1){
		primoNumero = primo(x);
		if(primo){
			printf("Primo \n");
		}else{
			printf("Nao primo \n");
		}	
	}else{
		printf("Numero invalido otr\n ");
	}

}


//Calcula se o numero � primo ou n�o
bool primo(int x){
	bool primo = true;
	int i = 0;
	for(i = 2;i<x;i++){
		if(x%i==0){
			primo = false;
		}
	}	
	return primo;
}

//Facade fatorial
void caso1(){
	float x;
	printf("Escolha um numero para ser fatorizado\n");
	scanf("%f",&x);
	x = fatorial(x);
	printf("%.f \n",x);
}

//Calcula a fatorial de um numero
float fatorial(float x){
	float somafatorial;
	for(somafatorial=x;x>1;x){
		x--;
		somafatorial = somafatorial * (x);
	}
	return somafatorial;
}

//Verifica uma lista de numeros se cada um � primo
void verificaListaPrimo(){
	int qtNumeros;
	printf("Digite a quantidade de numeros:\n");
	scanf("%d", &qtNumeros);
	int i;
	int numeros[qtNumeros];
	for(i=0;i<qtNumeros;i++){
		imprimePrimo();
	}
}

//Calcula a potencia de um numero
float potencia(float base,int expoente){
	int i ;
	float novaBase = base;
	for(i = 1;i<expoente;i++){
		base = base * novaBase;
	}
	return base;

}

//Recebe base e expoente, calcula a potencia, depois retorna em cientifico
void caso4(){
	double base;
	double expoente;		
	printf("Digite a o ponto flutante para calcular expoente\n");		
	scanf("%f", &base);
	printf("Digite o expoente\n");		
	scanf("%d", &expoente);
	base = potencia(base,expoente);
	printf("%0.1fe10 \n",base);
}

//Calcula a raiz recebendo base e a raiz
float raiz(double base, double raiz){
	base = pow(base,1/raiz);
	return base;
}

//Chama o calculo da raiz
void caso5(){
	float base;
	int raizNumero;
	printf("Digite a o ponto flutante para calcular sua raiz\n");
	scanf("%f", &base);
	printf("Digite a raiz\n");
	scanf("%d", &raizNumero);
	base = raiz(base,raizNumero);
	printf("%0.1fe10 \n",base);
}

//Calcula se o ano � bissexto
void caso6(){
	int ano;
	printf("Digite o ano para calcular  se eh bissexto\n");
	scanf("%d", &ano);
	if(ano%4==0){
		printf("O ano eh bissexto\n");
	}else{
		printf("O ano nao eh bissexto\n");
	}
}

//Indetifica se a nota � valida baseado nos especifica��es
bool notaValida(float nota){
	if(nota<0 || nota >10){
		return false;
	}else{
		return true;
	}
}

//Calcula a media de duas notas testando se � validas
void caso7(){
	float nota1;
	float nota2;
	printf("Digite a sua nota\n");
	scanf("%f",&nota1);
	printf("Digite a sua segunda nota\n");
	scanf("%f",&nota2);
	bool validaNota1 = notaValida(nota1);
	bool validaNota2 = notaValida(nota2);
	if(validaNota1 && validaNota2){
		float media = (nota1+nota2)/2;
		printf ("%0.1f \n",media);
	}else{
		printf("Um dos valores eh invalido\n");
	}
}

//Calcula a media ponderada de 3 notas
void caso8(){
	float nota1;
	float nota2;
	float nota3;
	printf("Digite a sua primeira nota\n");
	scanf("%f",&nota1);
	printf("Digite a sua segunda nota\n");
	scanf("%f",&nota2);
	printf("Digite a sua terceira nota\n");
	scanf("%f",&nota3);
	float mediaPonderada = (nota1+nota2+(nota3*2))/4;
	if(mediaPonderada>=60){
		printf ("Voce foi aprovado com a media %0.1f \n",mediaPonderada);
	}else{
		printf ("Voce foi reprovado com a media %0.1f \n",mediaPonderada);
	}
}

//Printa o nome do aluno e a matricula em hexadecimal
void caso9(){
	printf("Saulo\n");
	printf("%d \n", 0x1510010437);
}




