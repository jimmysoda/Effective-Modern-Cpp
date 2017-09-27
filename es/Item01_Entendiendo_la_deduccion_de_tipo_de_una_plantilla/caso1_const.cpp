/*
 * Idea clave:
 *
 *   Considerando la forma general para declarar y llamar una función plantilla:
 *
 *     template <typename T>
 *     void f(TipoDeParam param);
 *
 *     f(expr);                // deduce T y TipoDeParam desde expr
 *
 *   entonces, en el caso más simple cuándo TipoDeParam es un tipo de puntero o
 *   un tipo de referencia, pero no una referencia universal, la deducción de
 *   tipo funciona así:
 *
 *   1. Si el tipo de expr es una referencia, ignore que es una referencia.
 *   2. Concuerde el patrón del tipo de expr contra TipoDeParam para
 *      determinar T.
 *
 *   Si el tipo del parámetro de f es cambiado de T& a const T&, la carácteristica
 *   const de cx y rx continúa siendo respetada, pero por que ahora suponemos
 *   que param es una referencia a un const, ya no es necesario que const sea
 *   deducido como parte de T.
 */

template<typename T>
void f(const T& param) {}  // param es ahora una referencia a const

int main()
{
  int x = 27;              // tal como antes
  const int cx = x;        // tal como antes
  const int& rx = x;       // tal como antes

  f(x);                    // T es int, el tipo de param es const int&

  f(cx);                   // T es int, el tipo de param es const int&

  f(rx);                   // T es int, el tipo de param es const int&
}
