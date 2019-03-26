#include <stdio.h>
#include <math.h>

int Fatorial(){
	int x;
	printf("Escolha um numero para ser fatorizado\n");
	scanf("%d",&x);
	int somafatorial;
	for(somafatorial=x;x>1;x){
		x--;
		somafatorial = somafatorial * (x);
	}
	return somafatorial;
	printf("%d\n",fatorialN);
}
void caseMenu(*int x){
	
	switch(x){
		case(1):{
			Fatorial();
		}
	}
	
}

int main(){
	int x = 1;
	while(x!=0){
		printf("Escolha uma opcao de 0 a 9 \n");
		scanf("%d",&x);
		caseMenu(&x);
	}
	return 0;
}


