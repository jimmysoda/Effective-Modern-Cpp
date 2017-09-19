/*
 * Idea clave:
 *
 *   Si la plantilla de función es de la forma:
 *
 *     template <typename T>
 *     void f(TipoDeParam param);
 *
 * entonces dos tipos son deducidos: uno para T y otro para TipoDeParam.
 * Estos frecuentemente son diferentes, porque TipoDeParam a menudo
 * contiene adornos, por ejemplo, calificadores const or de referencia.
 */

template<typename T>
void f(const T& param) {}  // TipoDeParam es const T&

int main()
{
  int x = 0;
  f(x);                    // llamar f con un int
}
