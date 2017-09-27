/*
 * Idea clave:
 *
 *   Considerando la forma general para declarar y llamar una funci�n plantilla:
 *
 *     template <typename T>
 *     void f(TipoDeParam param);
 *
 *     f(expr);                // deduce T y TipoDeParam desde expr
 *
 *   entonces, en el caso m�s simple cu�ndo TipoDeParam es un tipo de puntero o
 *   un tipo de referencia, pero no una referencia universal, la deducci�n de
 *   tipo funciona as�:
 *
 *   1. Si el tipo de expr es una referencia, ignore que es una referencia.
 *   2. Concuerde el patr�n del tipo de expr contra TipoDeParam para
 *      determinar T.
 */

template<typename T>
void f(T& param) {}   // param es una referencia

int main()
{
  int x = 27;         // x es un int
  const int cx = x;   // cx es un const int
  const int& rx = x;  // rx es una referencia a x como un const int

  f(x);               // T es int, el tipo de param es int&

  f(cx);              // T is const int,
                      // el tipo de param es int&

  f(rx);              // T is const int,
                      // el tipo de param es int&
}
