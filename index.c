#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	int pidPai = getpid(), ppidPai = getppid();
	
	printf("\n01-(PAI) EU SOU O PROCESSO PID=%d DE PAI PPID=%d\n", pidPai, ppidPai);
	printf("\n02-(PAI) Agora vou criar um novo filho\n");

	int processoFilho = fork();

	if (processoFilho == 0)
	{
		int pidFilho = getpid(), ppidFilho = getppid();

		printf("\n03-(FILHO1) EU SOU O PROCESSO PID=%d DE PAI PPID=%d\n", pidFilho, ppidFilho);
		printf("\n04-(FILHO1) VOU ENCERRAR MINHAS ATIVIDADES NORMALMENTE\n");

		return 0;
	}
	else
	{
		int primeiroStatusPai = 0, primeiroWaitPai = wait(&primeiroStatusPai);
		
		printf("\n05-(PAI) ACORDEI PORQUE MEU FILHO PID=%d TERMINOU\n", primeiroWaitPai);
		printf("\n06-(PAI) Agora vou criar um outro filho\n");

		int segundoProcessoFilho = fork();

		if (segundoProcessoFilho == 0)
		{
			int pidSegundoFilho = getpid(), ppidSegundoFilho = getppid();
	
			printf("\n07-(FILHO2) EU SOU O PROCESSO PID=%d DE PAI PPID=%d\n", pidSegundoFilho, ppidSegundoFilho);
			printf("\n08-(FILHO2) VOU ENTRAR EM UM LOOP ETERNO...\n");
			
			for(;;);
		}
		else
		{
			int segundoStatusPai = 0, segundoWaitPai = wait(&segundoStatusPai);

			printf("\n09-(PAI) ACORDEI DE NOVO PORQUE MEU FILHO PID=%d TERMINOU\n", segundoWaitPai);
			printf("\n10-(PAI) TERMINANDO O PROCESSO PAI PID=%d NORMALMENTE\n", pidPai);

			return 0;
		}
	}
}
