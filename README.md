# PROGRAMA DE SIMULAÇÃO DE VOTOS - ALGORITMOS E LÓGICA DE PROGRAMAÇÃO

[![MIT license](https://badgen.net/github/license/Naereen/Strapdown.js)](https://github.com/Naereen/StrapDown.js/blob/master/LICENSE)

## Tecnologia
![C language]( https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

Este programa é um programa de console que implementei para simular uma votação. Basicamente ele permite realizar votação e apuração de votos para alguns candidatos predefinidos. Ele é baseado nos requisitos abaixo.

<br/><br/>
<strong>OBS:</strong> Esta atividade, é uma atividade que foi proposta pela [UNICESUMAR](https://www.unicesumar.edu.br/ead/) do curso de Engenharia de Software modulo 52/2021, disciplina ALGORITMOS E LÓGICA DE PROGRAMAÇÃO II.
 <br/><br/>

# REQUISITOS DO SISTEMA
As disputas para uma eleição de prefeitos e vereadores em uma cidade estavam muito acirradas, foi então que a imprensa local lançou a ideia de criar algumas urnas de pesquisa pela cidade para fazer uma pesquisa eleitoral sobre o panorama da votação. Você como funcionário de TI da imprensa responsável pela ideia foi designado para fazer um programa eleitoral em C para simular uma votação.

- Os vereadores que serão pesquisados são:
    * 111 - Vereador Joao do Frete
    * 222 - Vereador Maria da Pamonha
    * 333 - Vereador Ze da Farmacia
    * 444 - Voto Nulo
<br/><br/>
- Para prefeito:
    * 11 - Prefeito Dr. Zureta
    * 22 - Prefeito Senhor Gomes
    * 44 - Voto Nulo

O programa deve apresentar um menu com 3 opções, são elas:
   * 1 - Votar
   * 2 - Apuração dos votos
   * 3 - Sair

Na opção 1, os candidatos devem ser votados através do número, se o número digitado estiver fora dos números apontados, este voto deve ser invalidado.<br/>
Na opcao 2, será mostrado a soma de todos os votos computados.<br/>
Na opcao 3, o programa se encerrará.