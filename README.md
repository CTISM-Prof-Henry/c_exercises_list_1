# Trabalho Algoritmos e Programação - Lista de exercícios

## Instruções

1. Esta lista possui 10 exercícios. Cada um deles vale a mesma nota. Faça todos para gabaritar a lista!
2. Para cada exercício, existe um arquivo de código-fonte correspondente no repositório (por exemplo, para a primeira tarefa, existe um arquivo chamado `tarefa_1.c`). Modifique este arquivo de código-fonte para resolver o exercício.
3. Se estiver com dúvidas sobre a saída de uma das tabelas-verdade, use o [WolframAlpha](https://www.wolframalpha.com/input/?i=P+%26%26+Q)
4. Para quem está em dia com os estudos da linguagem de programação C, esta lista não deve ser difícil. Se perceber que os exercícios estão difíceis demais, revise o conteúdo. Há tempo suficiente para revisar o material de aula, aprender o conteúdo, e realizar a lista.
5. O professor elaborou esta lista com exercícios tirados da cabeça dele. Não existe um gabarito na Internet.
6. Você pode discutir os exercícios com seus colegas, porém evite copiar as resoluções. Se você copiar o trabalho do coleguinha e der o azar do professor descobrir, será zero para o exercício dos dois alunos: quem copiou, e quem deixou copiar.

## Introdução

Segundo a Wikipedia, a [tabela-verdade](https://pt.wikipedia.org/wiki/Tabela-verdade) é uma estrutura usada em lógica para decidir a validade de uma fórmula.

Vamos tomar por exemplo duas frases: _hoje faz sol_ e _sem vento_. Com base nestas duas frases, vamos decidir se hoje é um bom dia para jogar futebol no campinho:

* **Se** _hoje faz sol_ **e** _sem vento_ **então** _vou jogar futebol_
* **Se** _hoje faz sol_ **e** _com vento_ **então** _não vou jogar futebol_
* **Se** _hoje não faz sol_ **e** _sem vento_ **então** _não vou jogar futebol_
* **Se** _hoje não faz sol_ **e** _com vento_ **então** _não vou jogar futebol_

Para facilitar o raciocínio, vamos substituir _hoje faz sol_ por `P` e _sem vento_ por `Q`, e _hoje não faz sol_ pela negativa de `P`, `~P`, e _com vento_ pela negativa de `Q`, `~Q`. Assim, a lista anterior ficaria

* **Se** `P` **e** `Q` **então** _vou jogar futebol_
* **Se** `P` **e** `~Q` **então** _não vou jogar futebol_
* **Se** `~P` **e** `Q` **então** _não vou jogar futebol_
* **Se** `~P` **e** `~Q` **então** _não vou jogar futebol_

É fácil ver que podemos organizar essas **premissas** (`P` e `Q`) em uma tabela; no caso, a tabela-verdade. O resultado das premissas é a **consequência**, ou conclusão. 

Para usarmos a tabela, vamos dizer que

* `P` significa _hoje faz sol_
* `Q` significa _sem vento_
* `~P` significa _hoje não faz sol_ (na linguagem C seria `!P`)
* `~Q` significa _com vento_ (na linguagem C seria `!Q`)
* `P && Q` significa _vou jogar futebol_
* `&&` significa **E**
* `||` significa **OU**
* `1` significa **verdadeiro**
* `0` significa **falso**
* `<->` significa **equivalente** (ou seja, com o mesmo significado; o mesmo resultado)

Logo, a tabela-verdade para o exemplo anterior é

|  P  |  Q  | P && Q |
|:---:|:---:|:------:|
|  1  |  1  |   1    |
|  1  |  0  |   0    |
|  0  |  1  |   0    |
|  0  |  0  |   0    |


## Aritmética 

* `~P` é a negação de `P` (ou seja, se `P` é verdadeiro, `~P` é falso)
* `~(P)` é igual a `~P`
* A negação do **OU** (`||`) é **E** (`&&`), e a negação de **E** (`&&`) é **OU** (`||`)
  * `~(P && Q) <-> ~P || ~Q`
* Parênteses têm precedência sobre outras operações. Ou seja, resolva antes o que está entre parêntes, para depois fazer
  o resto  
* `&&` tem precedência sobre `||`
  * Pense no `&&` como uma multiplicação, e o `||` como uma soma

## Exercícios

Agora que você sabe _quase tudo_ sobre tabelas-verdade, transforme as seguintes sentenças para a linguagem de programação C, usando instruções `if` e `else`:

 0. `P || Q` (resolvido, veja exemplo)
 1. `P && (Q || R)`
 2. `P && Q || R`
 3. `(P && Q) && R`
 4. `(P && Q) || (R && S)`
 5. `~P`
 6. `~(P && Q)`
 7. `~P || ~Q`
 8. `~P && Q`
 9. `~(P && (Q || R))`
10. `~((P && Q) || (R && S))`