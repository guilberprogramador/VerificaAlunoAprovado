#include <stdio.h>
#include <stdlib.h>

int verificar(int x){
	if (x>=60)
			return 1;
	    else
			return 0;		
}

int main()
{
	int nota[50], contador[3] = {0,0,0};
		
	printf(" Atencao sao 50 notas digite uma nota seguida da outra\n ");

    for(contador[0] = 0; contador[0] < 3; contador[0]++)
	{
		printf("Digite a nota:");
        scanf("%i",&nota[contador[0]]);
        
        if(verificar(nota[contador[0]]) == 1)
        {
        	contador[1]++;
		}
		else
		{
			contador[2]++;
		}        
	}
	
	printf("%i alunos tiveram nota acima da media e %i abaixo da media.",contador[1],contador[2]);

    getch();
}
