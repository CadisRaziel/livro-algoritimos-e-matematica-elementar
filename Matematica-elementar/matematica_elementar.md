# Dia 01: 22/07/2025

- ##### O que é uma proposição?
R: Uma proposição é uma frase que pode ser verdadeira (V) ou falsa (F), mas não ambas ao mesmo tempo.

--------------------------------------

##### Exemplo de proposições:
- 2 é par -> Proposição verdadeira.
- 5 > 10 -> proposição falsa.

--------------------------------------

##### Exemplo do que não é proposição:
- Fecha a porta -> comando
- Quem é você -> pergunta

--------------------------------------

##### Conectivos lógicos
- **Negação: ¬ ou !**, *Exemplo: ¬p (se p = V, então ¬p = F) ou !p (se p = V, então !p = F)*

--------------------------------------

- **Conjunção: ^ ou &&**, *Exemplo: p ∧ q (só é V se ambos forem V) ou p && q (só é V se ambos forem V)*

--------------------------------------

- **Disjunção ∨ ou ||**, *Exemplo: p ∨ q (é F só se ambos forem F) ou p || q (é F só se ambos forem F)*

--------------------------------------

- **Condicional -> ou if**, *Exemplo: p → q (F só se p = V e q = F) ou if (p) then q*

--------------------------------------

- **Bicondicional ↔ ou if (p == q)**, *Exemplo: p ↔ q (V somente se p e q forem iguais) ou if (p == q)*

--------------------------------------

#### Tabela verdade negação / !
| p | ¬p |
| - | -- |
| V | F  |
| F | V  |

--------------------------------------

#### Tabela verdade E / &&
| p | q | p ∧ q |
| - | - | ----- |
| **V** | **V** | **V**     |
| V | F | F     |
| F | V | F     |
| F | F | F     |

--------------------------------------

#### Tabela verdade OU / ||
| p | q | p ∨ q |
| - | - | ----- |
| V | V | V     |
| V | F | V     |
| F | V | V     |
| **F** | **F** | **F**     |

--------------------------------------

#### Tabela verdade IF / ->
| P (antecedente) | Q (consequente) | P → Q |
| --------------- | --------------- | ----- |
| V               | V               | V     |
| **V**           | **F**           | **F** |
| F               | V               | V     |
| F               | F               | V     |

--------------------------------------
 
#### Tabela verdade se e somente se / ==
| p | q | p ↔ q |
| - | - | ----- |
| V | V |  V   |
| **V** | **F** |  **F**   |
| **F** | **V** |  **F**   |
| F | F |  V   |

--------------------------------------

#### equivalencias importantes
| Expressão Original | Equivalente Lógica |
| ------------------ | ------------------ |
| ¬(p ∧ q)           | ¬p ∨ ¬q            |
| ¬(p ∨ q)           | ¬p ∧ ¬q            |
| p → q              | ¬p ∨ q             |
| p ↔ q              | (p → q) ∧ (q → p)  |

#### Implicação
P *implica* q quando na tabela de *p* e *q* **não ocorre VF em nenhuma linha** ou seja **quando não temos simultaneamente *p verdadeira* e *q falsa***

--------------------------------------

#### Relação de equivalencia
P é *equivalente* a q quando **p e q tem tabelas verdades iguais**


--------------------------------------

# Dia 02: 29/07/2025

#### Sentenças abertas
- São variaveis cujo valor lógico (verdadeiro ou falso) vai dependenr do valor atribuido a variavel.

Exemplos: 
    - x + 1 = 7 -> é verdadeira se colocarmos o numero 6 no X porém se colocar 5 é falso..


--------------------------------------

#### Quantificador universal

**∀** -> Qualquer que seja, para todo, para cada
Exemplos:
    - (**∀x**)(x + 1 = 7) -> qualquer que seja o numero X, o numero X, para todo numero X, para cada numero X...
    A atribuição vai depender de como a gente interpreta o que esta pedindo o enunciado..

--------------------------------------

#### Quantificador existencial

**∃** -> existe, existe pelo menos um, existe um
Exemplos:
    - (**∃**x)(x + 1 = 7) -> existe um numero X, existe pelo menos um numero X...
    A atribuição vai depender de como a gente interpreta o que esta pedindo o enunciado..


--------------------------------------

#### Quantificador existencial (unico)


**∃|** -> existe um unico, existe só um, existe um e um só
Exemplos

Exemplos:
    - (∃|x)(x + 1 = 7) -> existe um unico numero X, existe um e um só numero X, existe um unico numero X..
    A atribuição vai depender de como a gente interpreta o que esta pedindo o enunciado..


--------------------------------------

#### Negação

*~* -> Nega algum valor igual a expressão ! na programaçao

    - p: a == true
    - q: b == true
    - x: p == q (true)
    - y: ~p == q (false)


--------------------------------------

#### Conjuntos

Exemplos de conjuntos:
- conjunto das vogais: a,e,i,o,u
- conjunto dos numeros positivos: 2,4,6,8..
- conjunto dos planetas do sistema solar: terra, marte, mercurio...
- conjunto dos algarismos romanos: I, V, IV, X...
- conjunto dos numeros primos: 2,3,5,7...
etc...

Existem varios tipos de conjuntos, e os itens dentro de um conjunto são chamados de **elementos** e dentro de um conjunto pode ter **elementos** de varios tipos, strings, inteiros, objetos...

Um conjunto pode ser um **elemento** de outro conjunto, exemplo: Seleções que disputam um campeonato mundial é um conjunto formado por equipes e as equipes tem conjuntos formado por jogadores..

*Convenção:*
- Indicamos o nome do conjunto com letra **maiuscula**, exemplo: A, B, C, PLANETA, TIME.
- Indicamos os elementos do conjunto com letra **minuscula**.

*Simbolos pertence e não pertence*:
- ∈ -> Pertence
- ∉ -> Não pertence

Exemplo:
- Ronaldo -> elemento
- TIME -> Conjunto
- Ronaldo ∈ TIME
- Ronaldo ∉ TIME
