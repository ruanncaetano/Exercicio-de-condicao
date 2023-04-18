#include<stdio.h>
#include<locale.h>
int main ()
{
	char resp;
	
  setlocale(LC_ALL, "Portuguese");
	printf("É mamifero?\n");
	scanf("%c", &resp);
	
	if(resp=='S' || resp=='s')
	{
		printf("É quadripede?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	{
		printf("É carnivoro?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	{
		printf("É um leão");
	}	
	else
	{
	printf("É herbivoro?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	printf("É cavalo\n");
	else
	printf("Animal desconhecido");
	}	
	}
	else
	{
		printf("É bipede?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	{
	printf("É onivero?\n");
		fflush(stdin);
		scanf("%c", &resp);
	
	if (resp=='S' || resp=='s')
	printf("homem\n");
	else
	{
	
	printf("É frutifero?\n");
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
	printf("É voador?\n");
		fflush(stdin);
		scanf("%c", &resp);
		if (resp=='S' || resp=='s')
	printf("Morcego\n");
	else
	{
	printf("É aquatido?\n");
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
	printf("É ave?\n");
		fflush(stdin);
		scanf("%c", &resp);
		if(resp=='S' || resp=='s')
	{
		printf("É não voadora?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	{
		printf("É tropical?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	{
		printf("É um avestruz");
	}	
	else
	{
	printf("É polar?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	printf("É pinguin\n");
	else
	printf("Animal desconhecido");
	}	
	}
	else
	{
		printf("É nadador?\n");
		fflush(stdin);
		scanf("%c", &resp);
	if (resp=='S' || resp=='s')
	printf("É um pato\n");
	else
	{
		printf("É de-repina?\n");
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
	printf("É répitel?\n");
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
			printf("É carnivoro?\n");
		fflush(stdin);
		scanf("%c", &resp);
		if (resp=='S' || resp=='s')
		printf("Crocodilo");
		else
		{
		printf("É sem patas?\n");
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

