#include <stdio.h>
#include <math.h>

void Primo(){
	int x;
	printf("Escolha um numero para descobrir se é primo\n");
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


