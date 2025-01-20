# **Projeto: Controle de GPIO com Teclado Matricial 4x4**


## **Índice**

1. [Descrição](#descrição)  
2. [Componentes](#componentes)  
3. [Funcionalidades](#funcionalidades)  
4. [Mapeamento de Teclas](#mapeamento-de-teclas)  
5. [Estrutura do Código](#estrutura-do-código)  
6. [Exemplo do Código](#exemplo-do-código)
7. [Como Rodar o Projeto](#como-rodar-o-projeto)  
   - [Requisitos](#requisitos)  
   - [Passos para Rodar](#passos-para-rodar)  

## **Descrição**
Este projeto simula o controle de pinos GPIO do microcontrolador Raspberry Pi Pico W, permitindo o acionamento de 3 LEDs RGB e dois buzzers por meio de um teclado matricial 4x4. O código foi desenvolvido em C utilizando o Pico SDK, com suporte à simulação no Wokwi.

## **Componentes**

Microcontrolador: Raspberry Pi Pico W.

Teclado Matricial 4x4: Para entrada de comandos.

LEDs RGB (x3): Para exibição de cores.

Buzzer: Para geração de sinais sonoros.

Simulador: Wokwi (para testes e validação do código).                                                                                                          

## **Funcionalidades**

1. Teclado Matricial:

- Detecta teclas pressionadas.

- Cada tecla é mapeada para uma ação específica.


2. Controle dos LEDs RGB:

- Alterna cores como ciano, branco, rosa, amarelo, entre outras.

- Liga ou desliga os LEDs com base no comando recebido.


3. Controle do Buzzer:

- Gera tons audíveis de diferentes frequências.


4. Função Piscar:

- Faz o LED piscar na última cor ativada.


## **Mapeamento de Teclas**
As funções associadas a cada tecla do teclado matricial 4x4 são:

| Tecla | Função                  |
|-------|-------------------------|
| 1     | LED ciano               |
| 2     | LED branco              |
| 3     | LED rosa                |
| 4     | LED amarelo             |
| 5     | LED vermelho            |
| 6     | LED azul                |
| 7     | LED verde               |
| 8     | Buzzer A (tom padrão)   |
| 9     | Buzzer B (tom alternado)|
| 0     | Apaga todos os LEDs     |
| *     | Piscar última cor usada |
| #     | Desliga os buzzers      |


## **Estrutura do Código**

O projeto é modular e organizado em arquivos separados para facilitar a manutenção:

main.c: Código principal que coordena a leitura do teclado e as ações dos LEDs e buzzer.


iniciarPinos.c: Configura os pinos GPIO para os LEDs e o buzzer.


cores.c: Implementa as funções para controlar as cores dos LEDs RGB.


buzzers.c: Contém as funções para controlar os tons emitidos pelo buzzer.


KeyPad.c: Gerencia a configuração e a leitura do teclado matricial, incluindo a definição dos pinos utilizados.

Cada arquivo desempenha um papel específico, tornando o código fácil de entender e modificar.


## **Como Rodar o Projeto**

### Requisitos

1. Ambiente de Desenvolvimento:

- Visual Studio Code com extensões de C/C++.

- Extensão Raspberry Pi Pico 

- Pico SDK instalado e configurado.


2. Simulador Wokwi:

- Conta ativa no Wokwi e vinculada ao VsCode.


3. Repositório Git:

- Clone o projeto: 
```bash
git clone https://github.com/Marianasls/controle-gpio.git
```

### Passos para Rodar

1.Se for a primeira vez para executar o projeto, acesse no VsCode o menu lateral da extensão "Raspberry Pi Pico Project", vá na aba "Project" e clique na opção "Configure CMake" para gerar a pasta de build com os arquivos necessários para a compilação do projeto.

2. Compile o código no ambiente configurado.

3. Clique no arquivo diagram.json, execute a simulação e teste as funcionalidades:

- Pressione as teclas para alterar o estado dos LEDs ou tocar o buzzer.
