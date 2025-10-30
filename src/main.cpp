/*
## Warunki oceniania
Ze zględu na działanie testów automatycznych, pliki wynikowe z zadań powinny być zapisywane w osobnych plikach w folderze zgodnie z następującym aliasem 

`wynik{numer-zadania}_{numer-podzadania}.txt`

np. dla zadania 2.1 

`wynik2_1.txt`

Dodatkowo zadania nalezy rozwiazywać w pliku `main.cpp` realizujac zadania poprzez deklaracje kolejnych metod o nazwie i sygnaturze zgodnej ponizej:

`Zadanie{numer-zadania}_{numer-podzadania}()`

np. dla zadnia 2.1

`Zadanie2_1()`

Program powinien realizować zadania w taki sposób aby funkcja wypisywała ten sam stumień wyjściowy do pliku wynikowego, jak równiez na ekran konsoli (standardowy strumień wyjściowy)

np. dla zadnaia 2.1
```
cout << result ;
wynik << result; //wynik jest ofstream do pliku wynik2_1
```
*/

#include <iostream>
int main() {
    std::cout << "Hello, Matura 2025!\n";
    return 0;
}
