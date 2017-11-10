/*
 * Primer ejercicio del taller de Iniciación a Arduino
 * 
 * Programado por Josemanu, basado en ejemplo Blink
 * 
 * -Vamos a crear 2 variables de tipo entero y en ellas 
 * guardaremos los numeros de los ledes que vamos a utilizar
 * -Definiremos los pines conectados a los ledes como
 * salidas en el setup()
 * -En el loop() definiremos dos estados en los que un
 * led esta encendido y el otro apagado, estos estados 
 * duraran un tiempo en milisegundos que establecemos 
 * con la funcion delay()
 */

int ledRojo = 7;
int ledVerde = 6;

void setup()
{ // establecemos los pines que usamos como salidas
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}
void loop()
{ // primer estado
  digitalWrite(ledRojo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(500);
  // segundo estado
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(500);
}

/*
 * Es tu turno de experimentar:
 * -puedes cambiar los numeros de los ledes y 
 * hacer que sean otros los que se encienden y 
 * se apagan.
 * -puedes añadir mas ledes, recuerda que primero hay
 * que definir una variable para guardar su numero de pin,
 * luego hay que establecerlo como salida en el setup()
 * y por ultimo lo enciendes o lo apagas en el loop()
 * -puedes añadir más estados, juega a hacer un juego de luces
 * encendiendo ledes y apagandolos, cada estado termina con un 
 * delay() que es el tiempo que ese estado estara visible
 * -puedes jugar con los tiempos de las funciones delay(),
 * cuanto mas pequeño sea el tiempo mas rapido parpadeara pero
 * cuidado!! si es demasiado rapido no podras verlo
 * 
 * Cuando hayas terminado haz un "guardar como", asi tendras
 * el ejercicio basico y tambien tu creacion
 */
