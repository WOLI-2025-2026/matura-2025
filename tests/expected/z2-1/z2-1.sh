#!/usr/bin/env bash
set -euo pipefail

BUILD_DIR="$(pwd)"                 # ctest uruchamia w katalogu build/
APP="$BUILD_DIR/app"
EXPECTED="$(cd .. && pwd)/tests/expected/wynik2_1.txt"
GEN="$BUILD_DIR/wynik2_1.txt"
STDOUT_FILE="$BUILD_DIR/stdout_2_1.txt"

# 0) wstępne sprawdzenia
[[ -x "$APP" ]] || { echo "ERROR: brak pliku wykonywalnego app"; exit 1; }
[[ -f "$EXPECTED" ]] || { echo "ERROR: brak tests/expected/wynik2_1.txt"; exit 1; }

# 1) uruchom program, złap stdout
"$APP" | tee "$STDOUT_FILE" >/dev/null

# 2) sprawdź plik wynikowy
if [[ ! -f "$GEN" ]]; then
  echo "::error file=wynik2_1.txt::Program nie utworzył pliku wynik2_1.txt (w katalogu build/)"
  exit 1
fi

# 3) porównaj zawartość pliku
if ! diff -u "$EXPECTED" "$GEN" >"$BUILD_DIR/diff_wynik2_1.txt" 2>&1; then
  echo "::error file=wynik2_1.txt::Zawartość różni się od oczekiwanej (patrz build/diff_wynik2_1.txt)"
  exit 1
fi

# 4) sprawdź, że stdout zawiera to samo (1:1 po liniach)
if ! grep -F -x -f "$EXPECTED" "$STDOUT_FILE" >/dev/null 2>&1; then
  echo "::error file=stdout::Wyjście na konsolę nie zawiera identycznej treści co plik wynik2_1.txt"
  exit 1
fi

echo "OK: wynik2_1 — plik i stdout zgodne"
