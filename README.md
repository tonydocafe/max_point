# 🧠 TP2 - Algoritmos de Soma Máxima (Sem Vizinho, Por Favor!)

Bem-vindo(a) ao **TP2**, um projeto que resolve um problema clássico (e meio ciumento): **como somar os números de uma sequência sem escolher vizinhos**! 😤➡️🚫👫

Imagine que você está escolhendo presentes numa fila... mas toda vez que você pega um presente, o da esquerda e o da direita ficam indisponíveis. Qual é a **maior soma possível** que você pode conseguir?

---

## 🧩 O Problema

Este é o famoso problema conhecido como:

> **Maximum Sum of Non-Adjacent Elements**  
> Ou, no mundo dos algoritmos, carinhosamente apelidado de **"Problema do Ladrão de Casas" (House Robber Problem)** 🏠💰

---

## 🛠️ Algoritmos Implementados

Este projeto traz duas versões super inteligentes pra resolver isso:

- 🔁 **D**: *Dinâmico Iterativo*  
  Nossa versão atleta! Resolve tudo no braço, usando laços e armazenamento progressivo. É rápido e objetivo. 💪

- 🔄 **A**: *Dinâmico Recursivo com Memoização*  
  Mais filosófico, esse pensa antes de agir, mas com boa memória. Vai recursivamente e guarda resultados pra não repetir trabalho. 🧘‍♂️🧠

---

## 📦 Como Compilar

Basta digitar:

make
Isso gerará o executável `tp2`.

## Execução
Para executar o programa, use o seguinte comando:

```sh
./tp2 <estrategia> <arquivo_entrada>
```

Onde:
- `<estrategia>` pode ser `A` para a versão recursiva ou `D` para a versão iterativa.
- `<arquivo_entrada>` é o caminho para o arquivo contendo a sequência de números.

Exemplo de uso:

```sh
./tp2 D entrada.txt
```

O resultado será salvo no arquivo `saida.txt`.

## Estrutura do Projeto
O projeto está organizado nos seguintes arquivos:
- `tp2.c`: Arquivo principal que lê os dados e chama os algoritmos.
- `menu.c`: Implementa a lógica de seleção do algoritmo e gestão dos arquivos.
- `estrategias.c`: Contém as implementações dos algoritmos `D` e `A`.
- `tp2.h`: Cabeçalho com as definições das funções.
- `Makefile`: Define as regras para compilação e limpeza do projeto.

## Limpeza
Para remover os arquivos compilados, utilize:

```sh
make clean
```

Isso removerá os arquivos objeto (`.o`), o executável `tp2` e o arquivo `saida.txt`.

## Dependências
O código utiliza apenas a biblioteca padrão do C, não havendo dependências externas.

## Autor
Tony Hudson Candido Junior
