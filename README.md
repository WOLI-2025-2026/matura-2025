# matura-2025 — start

Repo do ćwiczeń C++ i materiałów pod maturę 2025. Gotowe do uruchomienia w **GitHub Codespaces** (VS Code w przeglądarce).

## Start (uczeń)
1. Kliknij **Code → Create codespace on main**.
2. Po otwarciu środowiska:
   ```bash
   cmake -S . -B build
   cmake --build build
   ./build/app
   ctest --test-dir build
   ```

## Struktura
```
.devcontainer/         # konfiguracja Codespaces
.github/workflows/     # CI (budowanie + testy)
results/               # folder z plikami wynikowymi
src/                   # kod źródłowy
tests/                 # testy jednostkowe (GoogleTest) - folder readonly
CMakeLists.txt         # projekt CMake
zalaczniki-{rok}       # załączniki do zadań maturalnych
arkusz-{rok}.pdf       # arkusz maturalny
```

## Wskazówki
- Kompilator: C++17
- Debugowanie: zakładka *Run and Debug* w Codespaces (GDB).
- PR-y: twórz branch per zadanie; CI sprawdza budowę i testy.

> Jeśli korzystasz z GitHub Classroom, ustaw to repo jako **template** i twórz zadania z tego szablonu.

## Warunki oceniania
Ze zględu na działanie testów automatycznych, pliki wynikowe z zadań powinny być zapisywane w osobnych plikach w folderze zgodnie z następującym aliasem 

`wynik{numer-zadania}_{numer-podzadania}.txt`

np. dla zadania 2.1 

`wynik2_1.txt`

Dodatkowo zadania nalezy rozwiazywać w pliku `main.cpp` realizujac zadania poprzez deklaracje kolejnych metod o nazwie i sygnaturze zgodnej ponizej:

`Zadanie{numer-zadania}_{numer-podzadania}()`

np. dla zadnia 2.1

`Zadanie2_1()`



