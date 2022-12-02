### PT-BR

# Processos em C

Esse repositório contem um código fonte que eu desenvolvi em linguagem C para que eu pudesse praticar meus conhecimentos em Linguagem C relacionados a criação de Processos no sistema operacional utilizando linguagem C.
Nesse programa foram usadas as seguintes funções:
- wait();
- getpid();
- getppid();
- fork();

### wait()

Essa função foi usada para fazer com que o processo Pai esperasse seus processos filhos morrer para que ele continuasse seu processamento.

### getpid()

Essa função foi usada para pegar o PID do processo Pai e dos processos Filhos.

### getppid()

Essa função foi usada para pegar o PPID do processo Pai e dos processos Filhos.

### fork()

Essa função foi usada para criar processos (processos filhos).

Quando o arquivo for Compilado e Executado, o programa entrará em loop infinito, pois o segundo processo filho iniciou um loop infinito.
Até então, serão exibidas as mensagens de 1 até 8.

Para que as mensagens de 9 a 10 sejam impressas, é necessário matar o segundo processo filho através do comando kill, como no exemplo abaixo.

*kill PID_number*.

Depois desse comando ser executado, o programa irá exibir as mensagens 9 e 10, como esperado.

### EN

Process in C

This repository contains a C source code developed by me in order to practice my C knowledge related to System Process creating.
In this application were used the following functions:

- wait();
- getpid();
- getppid();
- fork();

### wait()

This function was used in order to make the Parent process wait its child process ends and after that continue its processing flow.

### getpid()
 
This function was used in order to get the Parent and Child process PID.

### getppid()

This function was used in order to get the Parent and Child process PPID.

### fork()

This function was used in order to create new child processes in the system.

After compile and run the source file the application will start an infinit loop flow, because the second child started it. 
Until it starts the messages between 1 and 8 will be printed.

The 9° and 10° messages will be displayed if you kill the second child process.

To kill the process you will need enter the following command:

*kill PID_number*.

After you execute that command the application will disply the 9° and 10° message.
