/*
 * Idea clave:
 *
 *   Si estamos tratando con un paso por valor:
 *
 *     template <typename T>
 *     void f(T param);        // param es ahora parado por valor
 *
 *   Esto significa que param va a ser una copia de cualquier cosa que sea pasada
 *   a la funci�n - un objeto completamente nuevo. El heco que param vaya a ser
 *   un nuevo objeto motiva las reglas que gobiernan c�mo T es deducido desde expr:
 *
 *   1. Tal como antes, si el tipo de expr es una referencia, ignore que es una referencia.
 *
 *   2. Si, despu�s de ignorar si expr es una referencia, ignora tambi�n sus
 *      caracter�sticas const y volatile. Los objetos marcados como volatile
 *      son poco comunes. Usualmente s�lo son usados para implementar controladores
 *      de dispositivos.
 */

template<typename T>
void f(T param) {}          // param es ahora pasado por valor

int main()
{
  int x = 27;               // tal como antes
  const int cx = x;         // tal como antes
  const int& rx = x;        // tal como antes
  f(x);                     // Los tipos de T y param ambos son int

  f(cx);                    // De nuevo, los tipos de T y param ambos son int

  f(rx);                    // Todav�a los tipos de T y param ambos son int


  const char* const ptr =   // ptr is const pointer to const object
    "Fun with pointers";

  f(ptr);                   // pass arg of type const char * const
}
