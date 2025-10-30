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
src/                   # kod źródłowy
tests/                 # testy jednostkowe (GoogleTest)
CMakeLists.txt         # projekt CMake
```

## Wskazówki
- Kompilator: C++17
- Debugowanie: zakładka *Run and Debug* w Codespaces (GDB).
- PR-y: twórz branch per zadanie; CI sprawdza budowę i testy.

> Jeśli korzystasz z GitHub Classroom, ustaw to repo jako **template** i twórz zadania z tego szablonu.
