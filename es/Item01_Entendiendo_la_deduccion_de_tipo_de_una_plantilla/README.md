Cosas que recordar
------------------

* Durante la deducci�n de tipos de plantilla, los argumentos que son referencias
  son tratados como no-referencias, es decir, el hecho de que son referencias
  es ignorado.

* Cu�ndo se deducen tipos para par�metros de referencias universales, los
  argumentos *lvalue* reciben un trato especial.

* Cu�ndo se deducen tipos para par�metros por valor, los argumentos marcados como
  `const` y/o `volatile` son tratados como no-`const` y no-`volatile`.

* Durante la deducci�n de tipos de plantilla, los argumentos que son nombres
  de arreglor or funciones decaen a punteros, a menos que sean usados para
  inicializar referencias.
