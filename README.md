# TP2 - Algoritmos de Soma Máxima

## Descrição
Este projeto implementa dois algoritmos para calcular a soma máxima possível de elementos de uma sequência, evitando a seleção de dois elementos consecutivos. As abordagens utilizadas são:

- **D**: Algoritmo dinâmico iterativo.
- **A**: Algoritmo dinâmico recursivo com memoização.

O programa lê uma sequência de números inteiros a partir de um arquivo de entrada e salva os resultados em um arquivo de saída.

## Compilação
Para compilar o programa, utilize o comando:

```sh
make
```

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

