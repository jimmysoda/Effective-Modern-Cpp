Cosas que recordar
------------------

* Durante la deducción de tipos de plantilla, los argumentos que son referencias
  son tratados como no-referencias, es decir, el hecho de que son referencias
  es ignorado.

* Cuándo se deducen tipos para parámetros de referencias universales, los
  argumentos *lvalue* reciben un trato especial.

* Cuándo se deducen tipos para parámetros por valor, los argumentos marcados como
  `const` y/o `volatile` son tratados como no-`const` y no-`volatile`.

* Durante la deducción de tipos de plantilla, los argumentos que son nombres
  de arreglor or funciones decaen a punteros, a menos que sean usados para
  inicializar referencias.
