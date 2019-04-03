#include <stdio.h>
#include <math.h>

void Primo();
void Fatorial();
void VerificaListaPrimo();
float Potencia(float,int);
void Caso4();
float Raiz(double, double);
void Caso5();
void Caso6();
void Caso7();
void Caso8();
void Caso9();
bool notaValida(float);
void caseMenu(int);
int main();


int main(){
	int x = 1;
	while(x!=0){
		printf("Escolha uma opcao de 0 a 9 \n");
		printf("/*****************************************/ \n");
		printf("                                              \n");
		printf("0 - Sair \n");
		printf("1 - Calcula Fatorial \n");
		printf("2 - Calcula se um numero é primo \n");
		printf("3 - Verifica uma lista de primo \n");
		printf("4 - Recebe base e expoente, calcula a potencia, depois retorna em cientifico");
		printf("5 - Calcula a raiz recebendo base e a raiz\n");
		printf("6 - Calcula se o ano é bissexto \n");
		printf("7 - Calcula a media de duas notas testando se é validas \n");
		printf("8 - Calcula a media ponderada de 3 notas \n");
		printf("9 - Printa o nome do aluno e a matricula em hexadecimal");
		printf("                                                 \n");
		printf("/****************************************/ \n");
		scanf("%d",&x);
		caseMenu(x);
	}
	return 0;
}

//Menu recebendo um numero
void caseMenu(int x){
	
	switch(x){
		case(1):{
			Fatorial();
			break;
		}
		case(2):{
			Primo();
			break;
		}
		case(3):{
			VerificaListaPrimo();
			break;
		}
		case(4):{
			Caso4();
			break;
		}
		case(5):{
			Caso5();
			break;
		}
		case(6):{
			Caso6();
			break;
		}
		case(7):{
			Caso7();
			break;
		}
		case(8):{
			Caso8();
			break;
		}
		case(9):{
			Caso9();
			break;
		}
	}
}


//Calcula se o numero é primo ou não
void Primo(){
	int x;
	printf("Digite o numero para saber se eh primo:\n");
	scanf("%d",&x);
	bool primo = true;
	if(x>1){
		int i = 0;
		for(i = 2;i<x;i++){
			if(x%i==0){
				primo = false;
			}
		}
		if(primo){
			printf("Primo \n");
		}else{
			printf("Nao primo \n");
		}
	}else{
		printf("Numero invalido otr\n ");
	}
	

	
	
}

//Calcula a fatorial de um numero
void Fatorial(){
	int x;
	printf("Escolha um numero para ser fatorizado\n");
	scanf("%d",&x);
	int somafatorial;
	for(somafatorial=x;x>1;x){
		x--;
		somafatorial = somafatorial * (x);
	}
	printf("%d\n",somafatorial);
}

//Verifica uma lista de numeros se cada um é primo
void VerificaListaPrimo(){
	int qtNumeros;
	printf("Digite a quantidade de numeros:\n");
	scanf("%d", &qtNumeros);
	int i;
	int numeros[qtNumeros];
	for(i=0;i<qtNumeros;i++){
		Primo();
	}
}

//Calcula a potencia de um numero
float Potencia(float base,int expoente){
	int i ;
	float novaBase = base;
	for(i = 1;i<expoente;i++){
		base = base * novaBase;
	}
	return base;

}

//Recebe base e expoente, calcula a potencia, depois retorna em cientifico
void Caso4(){
	double base;
	double expoente;		
	printf("Digite a o ponto flutante para calcular expoente\n");		
	scanf("%f", &base);
	printf("Digite o expoente\n");		
	scanf("%d", &expoente);
	base = Potencia(base,expoente);
	printf("%0.1fe10 \n",base);
}

//Calcula a raiz recebendo base e a raiz
float Raiz(double base, double raiz){
	base = pow(base,1/raiz);
	return base;
}

//Chama o calculo da raiz
void Caso5(){
	float base;
	int raiz;
	printf("Digite a o ponto flutante para calcular sua raiz\n");
	scanf("%f", &base);
	printf("Digite a raiz\n");
	scanf("%d", &raiz);
	base = Raiz(base,raiz);
	printf("%0.1fe10 \n",base);
	
}

//Calcula se o ano é bissexto
void Caso6(){
	int ano;
	printf("Digite o ano para calcular  se é bissexto\n");
	scanf("%d", &ano);
	if(ano%4==0){
		printf("O ano é bissexto\n");
	}else{
		printf("O ano não é bissexto\n");
	}
}

//Indetifica se a nota é valida baseado nos especificações
bool notaValida(float nota){
	if(nota<0 || nota >10){
		return false;
	}else{
		return true;
	}
}

//Calcula a media de duas notas testando se é validas
void Caso7(){
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
void Caso8(){
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
		printf ("Você foi aprovado com a media %0.1f \n",mediaPonderada);
	}else{
		printf ("Você foi reprovado com a media %0.1f \n",mediaPonderada);
	}
	
	
}

//Printa o nome do aluno e a matricula em hexadecimal
void Caso9(){
	printf("Saulo\n");
	printf("%d \n", 0x1510010437);
}




