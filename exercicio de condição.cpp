#include<stdio.h>
#include<locale.h>
int main ()
{
	char resp;
	
  setlocale(LC_ALL, "Portuguese");
	printf("� mamifero?\n");
	scanf("%c", &resp);
	
	if(resp=='S' || resp=='s')
	{
		printf("� quadripede?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	{
		printf("� carnivoro?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	{
		printf("� um le�o");
	}	
	else
	{
	printf("� herbivoro?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	printf("� cavalo\n");
	else
	printf("Animal desconhecido");
	}	
	}
	else
	{
		printf("� bipede?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	{
	printf("� onivero?\n");
		fflush(stdin);
		scanf("%c", &resp);
	
	if (resp=='S' || resp=='s')
	printf("homem\n");
	else
	{
	
	printf("� frutifero?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	printf("Macaco\n");
	else
	printf("Animal desconhecido");
	}
}
else
{
	printf("� voador?\n");
		fflush(stdin);
		scanf("%c", &resp);
		if (resp=='S' || resp=='s')
	printf("Morcego\n");
	else
	{
	printf("� aquatido?\n");
		fflush(stdin);
		scanf("%c", &resp);
		if (resp=='S' || resp=='s')
	printf("Baleia\n");
	else
	printf("Animal desconhecido");
	}
		
}
	
}

}
else
{
	printf("� ave?\n");
		fflush(stdin);
		scanf("%c", &resp);
		if(resp=='S' || resp=='s')
	{
		printf("� n�o voadora?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	{
		printf("� tropical?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	{
		printf("� um avestruz");
	}	
	else
	{
	printf("� polar?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	printf("� pinguin\n");
	else
	printf("Animal desconhecido");
	}	
	}
	else
	{
		printf("� nadador?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	printf("� um pato\n");
	else
	{
		printf("� de-repina?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	printf("aguia\n");

	else
	printf("Animal desconhecido");
	}
	
	}
}
else
{
	printf("� r�pitel?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	{
		printf("com casco?\n");
		fflush(stdin);
		scanf("%c", &resp);
		if (resp=='S' || resp=='s')
		printf("Tartaruga\n");
		else
		{
			printf("� carnivoro?\n");
		fflush(stdin);
		scanf("%c", &resp);
		if (resp=='S' || resp=='s')
		printf("Crocodilo");
		else
		{
		printf("� sem patas?\n");
		fflush(stdin);
		scanf("%c", &resp);
		if (resp=='S' || resp=='s')
		printf("Cobra\n");
		else
		printf("Animal desconhecido");
		
		}
		}
	}
	else
	printf("Animal desconhcido");
}
;}
}

