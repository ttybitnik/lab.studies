# lab.studies/DCC200

Practical assignments and revision exercises for **DCC200**.
<!-- The original exercise lists and problem statements are available on the [official course website](https://sites.google.com/view/dcc200/material). -->

## Structure

- **`src/`**: Solution files grouped by module prefixes (e.g., `00-01.cpp`, `01-01.cpp`).
- **`obj/`**: Directory for intermediate compiled object files (`.o`).
- **`DCC200.h`**: Common headers, helper functions, and macros.
- **`main.cpp`**: Custom `checks` runner for building and executing validation.
- **`Makefile`**: Automated build file managing compilation targets.

## Modules

| Prefix | Topic                       |
|:-------|:----------------------------|
| **00** | C++ Revision                |
| **01** | Pointers                    |
| **02** | Dynamic Allocation          |
| **03** | Recursion                   |
| **04** | Complexity Analysis         |
| **05** | Sorting I & II              |
| **06** | Abstract Data Types (ADTs)  |
| **07** | Matrices & Special Matrices |
| **08** | File Processing             |

## Targets

For testing all function implementations:
```bash
make run
```

For exercises implementing their own `main()`:
```bash
make interactive-all
```
