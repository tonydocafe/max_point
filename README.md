
# TP2 - Maximum Sum Algorithms

## Description
This project implements two algorithms to calculate the maximum possible sum of elements of a sequence, avoiding the selection of two consecutive elements. The approaches used are:

- **D**: Dynamic iterative algorithm.
- **A**: Dynamic recursive algorithm with memoization.

The program reads a sequence of integers from an input file and saves the results in an output file.

## Compilation
To compile the program, use the command:

```sh
make
```

This will generate the `tp2` executable.

## Execution
To execute the program, use the following command:

```sh
./tp2 <strategy> <input_file>
```

Where:
- `<strategy>` can be `A` for the recursive version or `D` for the iterative version.
- `<input_file>` is the path to the file containing the sequence of numbers.

Usage example:

```sh
./tp2 D input.txt
```

The result will be saved in the file `output.txt`.

## Project Structure
The project is organized into the following files:
- `tp2.c`: Main file that reads the data and calls the algorithms.
- `menu.c`: Implements the algorithm selection and file management logic.
- `strategies.c`: Contains the implementations of the algorithms `D` and `A`.
- `tp2.h`: Header with function definitions.
- `Makefile`: Defines the rules for compiling and cleaning the project.

## Cleaning
To remove the compiled files, use:

```sh
make clean
```

This will remove the object files (`.o`), the `tp2` executable and the `saida.txt` file.

## Dependencies
The code uses only the C standard library, with no external dependencies.

## Author
Tony Hudson Candido Junior
