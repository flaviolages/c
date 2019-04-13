/*

 Programa para verificar a quantidade de primos entra dois números.
 Número primo é aquele que é apena dividido pelo número 1 e por ele mesmo;

 Obs: Todos números primos são impares mas nem todos números impares são primos.
 5/1 e 5/5     É Primo 
 9/1, 9/3, 9/9 Não é primo

*/
#include <stdio.h>


int main(){

	int cont1,cont2,cont3 = 0,res,primo = 0,n1,n2;

	n1 = 2;  //numero recebido pelo usuario
	n2 = 14; //numero recebido pelo usuario

	//SE N1 maior N2
	for(cont1 = n1; cont1 <= n2; cont1++){//1
		
		for(cont2 = 1;cont2 <= cont1; cont2++){//2

			res = cont1%cont2;     //Verifica se tem resto.
			if(res == 0){cont3++;} //SE não teve resto adiciona 1

		}//for 2
		
		if(cont3 == 2)primo++;//SE cont3 teve 2 restos 0 conta 1 primo.
		cont3 = 0;//Limpa contador para o proximo loop
		
	}//for 1

	printf("\n\n%d Primos\n\n",primo);
	return 0;
}