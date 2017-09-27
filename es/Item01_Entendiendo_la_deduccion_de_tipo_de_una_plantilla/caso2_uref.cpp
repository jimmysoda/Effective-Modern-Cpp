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
 *   entonces, en el caso cuándo TipoDeParam es un tipo de referencia universal,
 *   la deducción de tipo funciona así:
 *
 *   * Si expr es un lvalue, ambos T y TipoDeParam son deducidos como
 *     referencias lvalue
 *   * Si expr es rvalue, las reglas usuales de deducción de tipo aplican
 *
 */

template<typename T>
void f(T&& param) {}      // param es ahora una referencia universal

int main()
{
  int x = 27;             // tal como antes
  const int cx = x;       // tal como antes
  const int& rx = x;      // tal como antes

  f(x);                   // x es lvalue, entonces T es int&,
                          // El tipo de param es también int&

  f(cx);                  // cx es lvalue, entonces T es const int&,
                          // El tipo de param es también const int&

  f(rx);                  // rx es lvalue, entonces T es const int&,
                          // El tipo de param es también const int&

  f(27);                  // 27 es rvalue, entonces T es int,
                          // El tipo de param es por lo tanto int&&
}
