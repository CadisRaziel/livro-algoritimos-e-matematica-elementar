# Dia 01: o que são proposições (Noções lógicas)

- ##### O que é uma proposição?
R: Uma proposição é uma frase que pode ser verdadeira (V) ou falsa (F), mas não ambas ao mesmo tempo.

##### Exemplo de proposições:
- 2 é par -> Proposição verdadeira.
- 5 > 10 -> proposição falsa.

##### Exemplo do que não é proposição:
- Fecha a porta -> comando
- Quem é você -> pergunta

##### Conectivos lógicos
- **Negação: ¬ ou !**, *Exemplo: ¬p (se p = V, então ¬p = F) ou !p (se p = V, então !p = F)*

- **Conjunção: ^ ou &&**, *Exemplo: p ∧ q (só é V se ambos forem V) ou p && q (só é V se ambos forem V)*

- **Disjunção ∨ ou ||**, *Exemplo: p ∨ q (é F só se ambos forem F) ou p || q (é F só se ambos forem F)*

- **Condicional -> ou if**, *Exemplo: p → q (F só se p = V e q = F) ou if (p) then q*

- **Bicondicional ↔ ou if (p == q)**, *Exemplo: p ↔ q (V somente se p e q forem iguais) ou if (p == q)*


#### Tabela verdade negação / !
| p | ¬p |
| - | -- |
| V | F  |
| F | V  |


#### Tabela verdade E / &&
| p | q | p ∧ q |
| - | - | ----- |
| **V** | **V** | **V**     |
| V | F | F     |
| F | V | F     |
| F | F | F     |

#### Tabela verdade OU / ||
| p | q | p ∨ q |
| - | - | ----- |
| V | V | V     |
| V | F | V     |
| F | V | V     |
| **F** | **F** | **F**     |


#### Tabela verdade IF / ->
| P (antecedente) | Q (consequente) | P → Q |
| --------------- | --------------- | ----- |
| V               | V               | V     |
| **V**           | **F**           | **F** |
| F               | V               | V     |
| F               | F               | V     |

 
#### Tabela verdade se e somente se / ==
| p | q | p ↔ q |
| - | - | ----- |
| V | V |  V   |
| **V** | **F** |  **F**   |
| **F** | **V** |  **F**   |
| F | F |  V   |


#### equivalencias importantes
| Expressão Original | Equivalente Lógica |
| ------------------ | ------------------ |
| ¬(p ∧ q)           | ¬p ∨ ¬q            |
| ¬(p ∨ q)           | ¬p ∧ ¬q            |
| p → q              | ¬p ∨ q             |
| p ↔ q              | (p → q) ∧ (q → p)  |

