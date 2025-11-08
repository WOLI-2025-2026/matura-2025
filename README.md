# matura-2025 — start

## 📁 Struktura repozytorium

```
.
├── .github/*                   # ścieżka chroniona z konfiguracja classroom
├── src/
│   └── main.cpp                # główny plik źródłowy — tu realizujesz kolejne zadania
│
├── tests/*                     # ścieżka chroniona, z testami automatycznymi
│
├── zalaczniki-2025/            # pliki tekstowe z danymi do zadań maturalnych
│
├── arkusz-2025.pdf             # pełny arkusz egzaminacyjny zadań maturalnych
├── odpowiedzi-2025.pdf         # klucz odpowiedzi lub przykładowe rozwiązania
├── CMakeLists.txt              # konfiguracja projektu CMake (budowanie, testy)
├── .gitignore                  # wykluczenia plików przy commitowaniu
└── README.md                   # ten plik — opis projektu
```

---

## 🧭 Opis

Repozytorium zawiera komplet materiałów i danych do zadań maturalnych z informatyki (rok 2025).
Celem jest implementacja kolejnych zadań w języku **C++** w pliku `src/main.cpp`.

---

## ⚙️ Jak uruchomić
### Wtyczka 
Zainstalowac w srodowisku wtyczke 
`C/C++ for Visual Studio Code`
o identyfikatorze:
`ms-vscode.cpptools`

Umozliwi to uruchamianie aktualnie otwartego pliku c++ za pomocą opcji Run w prawym górnym rogu środowiska.

### Ręczne uruchomienie
W środowisku Codespaces lub lokalnie:

```bash
cmake -S . -B build
cmake --build build
./build/app
```

Program odczytuje pliki z folderu `zalaczniki-2025`, więc struktura katalogów musi pozostać niezmieniona.

## Warunki oceniania
Plik main c++ zacznij od zakomentowanego imienia i nazwiska!

Wyniki poszczegolnych zadan powinny byc zapisywane w nastepujacych plikach:

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

## Zapisywanie i synchronizowanie zmian

Aby zapisać rozwiązanie do sprawdzenia nalezy utworzyc utworzyc i zsynchronizowac commit za pomocą git do repozytorim zadania na github. Mozna to zrobic na dwa sposoby.

### Udostepnianie zmian za pomoca konsoli

Za pomoca polecenia 

``` git status```

nalezy sprawdzic jakie zmiany są dołączone do ostatniego commit'a

```
/workspaces/matura-2025-r25-3b-KGratkiewicz (main) $ git status
On branch main
Your branch is up to date with 'origin/main'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   src/main.cpp

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        .vscode/
        src/main
        src/wynik2_1.txt
        src/wynik2_2.txt
        src/wynik2_3.txt
        src/wynik2_4.txt
        src/wynik3_1.txt
        src/wynik3_2_a.txt
        src/wynik3_2_b.txt

no changes added to commit (use "git add" and/or "git commit -a")
```

przykladowo z fragmentu terminala powyzej mozna odczytac komunikat o zmianie pliku `main.cpp` oraz dodaniu dodatkowych plików, oznaczonych jako 'Untracked' - czyli takich które nie zostaną dodane do kolejnego commita.

Aby dodać kolejne pliki i oznaczyć ich zmiany jako tracked nalezy skorzystać z komendy `git add` oraz podac pliki ktore mają zostać oznaczone jako tracked. Dla przykladu aby dodać wszystkie pliki z biezacej lokalizacji nalezy skorzystac z:

``` git add . ```

Przykład:

```
/workspaces/matura-2025-r25-3b-KGratkiewicz (main) $ git add .
/workspaces/matura-2025-r25-3b-KGratkiewicz (main) $ git status
On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        new file:   .vscode/tasks.json
        new file:   src/main
        modified:   src/main.cpp
        new file:   src/wynik2_1.txt
        new file:   src/wynik2_2.txt
        new file:   src/wynik2_3.txt
        new file:   src/wynik2_4.txt
        new file:   src/wynik3_1.txt
        new file:   src/wynik3_2_a.txt
        new file:   src/wynik3_2_b.txt
```

Pod wykonaniu `git add .` zmiany są juz widoczne do wykonania commita. W tym celu nalezy wykonac komende `git commit`. Najlepiej podczas jej wykonywania dodac przelacznik `-m` aby od razu nadac opis commitu.

```
git commit -m "rozwiazanie zadan 2 i 3"
```

Przykład:
```
/workspaces/matura-2025-r25-3b-KGratkiewicz (main) $ git commit -m "rozwiazania zadan 2 i 3"
[main 8058e5b] rozwiazania zadan 2 i 3
 10 files changed, 403 insertions(+), 3 deletions(-)
 create mode 100644 .vscode/tasks.json
 create mode 100755 src/main
 create mode 100644 src/wynik2_1.txt
 create mode 100644 src/wynik2_2.txt
 create mode 100644 src/wynik2_3.txt
 create mode 100644 src/wynik2_4.txt
 create mode 100644 src/wynik3_1.txt
 create mode 100644 src/wynik3_2_a.txt
 create mode 100644 src/wynik3_2_b.txt
 ```

 Nasteprznie przy sprawdzeniu statusu, dostaniemy komunikat ze zmiany zostały wprowadzone lokalnie i naley je udostepnić:

 ```
/workspaces/matura-2025-r25-3b-KGratkiewicz (main) $ git status
On branch main
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean
 ```

 W tym celu nalezy wykonac komendę 
 
 ```
 git push
 ```

 Przykład:
 ```
 /workspaces/matura-2025-r25-3b-KGratkiewicz (main) $ git push
Enumerating objects: 17, done.
Counting objects: 100% (17/17), done.
Delta compression using up to 2 threads
Compressing objects: 100% (7/7), done.
Writing objects: 100% (14/14), 36.68 KiB | 6.11 MiB/s, done.
Total 14 (delta 1), reused 7 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/WOLI-2025-2026/matura-2025-r25-3b-KGratkiewicz
   a0d9727..8058e5b  main -> main
```

Po tym zestawie akcji, mozemy sprawdzic czy nasze rozwiazanie jest widoczne online w repozytorium na github.

#### Podsumowanie

Sprawdzenie statusu

```
git status
```

Dodanie plików jako 'tracked'

```
git add .
```

Wykonanie commit lokalnie

```
git commit -m "opis zmian"
```

Udostępnienie zmian do repozytrium online

```
git push
```

### Uzycie wtyczki VScode

Nalezy przejsc do obrazka gałęzi - zazwyczaj 3 ikona od góry w VSCode.

Dodać zmiany do zatwierdzenia.

Wpisać opis zmian w polu message.

Nacisnąć przycisk "commit" lub "zatwierdź".

W przypadku gdyby zmiany nie zostaly dodane, wyskoczy okienko z zapytaniem czy dodac wszystkie istniejace zmiany do zatwierdzenia, gdzie klikami "Yes" lub "Tak"

Po utworzeniu commit nacisnac przycisk "Sync commit" lub "Synchronizuj zmiany".





