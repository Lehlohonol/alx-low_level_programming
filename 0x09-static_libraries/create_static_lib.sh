#!/bin/bash

if [ -f "./*.o" ]; then
  rm ./*.o
fi

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -c && ar rc liball.a *.o && ranlib liball.a
