#include <stdio.h>
#include <math.h>




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

float Potencia(float base,int expoente){
	int i ;
	float novaBase = base;
	for(i = 1;i<expoente;i++){
		base = base * novaBase;
	}
	return base;

}

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

float Raiz(double base, double raiz){
	base = pow(base,1/raiz);
	return base;
}

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

bool notaValida(float nota){
	if(nota<0 || nota >10){
		return false;
	}else{
		return true;
	}
}

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

void Caso9(){
	printf("Saulo\n");
	printf("%d \n", 0x1510010437);
}



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

int main(){
	int x = 1;
	while(x!=0){
		printf("Escolha uma opcao de 0 a 9 \n");
		scanf("%d",&x);
		caseMenu(x);
	}
	return 0;
}


