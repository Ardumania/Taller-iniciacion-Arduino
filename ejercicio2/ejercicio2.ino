/*
 * Segundo ejercicio del taller de Iniciación a Arduino
 * 
 * Programado por Josemanu
 * 
 * -Vamos a crear 3 variables de tipo entero y en ellas 
 * guardaremos los numeros de los ledes y del pulsador
 * que vamos a utilizar
 * -Definiremos los pines conectados a los ledes como
 * salidas y el pin del pulsador como entrada en el setup()
 * -En el loop() miramos primero si el pulsador esta
 * accionado, si lo esta hacemos el mismo parpadeo que en
 * el ejercicio 1. Si el pulsador no esta accionado apagamos
 * todo
 * 
 */

int ledRojo = 7;
int ledVerde = 6;
int pulsador = 12;

void setup()
{
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(pulsador, INPUT);
}
void loop()
{
  if (digitalRead(pulsador) == true)
  {
    digitalWrite(ledRojo, HIGH);
    digitalWrite(ledVerde, LOW);
    delay(500);
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, HIGH);
    delay(500);
  }
  else
  {
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, LOW);
  }
}

/*
 * Es tu turno de experimentar:
 * -utiliza todo lo que aprendiste en el ejercicio 1
 * -puedes cambiar los numeros de los ledes y 
 * hacer que sean otros los que se encienden y 
 * se apagan al accionar el pulsador.
 * -puedes añadir mas ledes, mas estados y cambiar los
 * tiempos igual que en el ejercicio 1
 * -puedes hacer diferentes combinaciones de luces
 * en distintos pulsadores, el Shield de Practicas tiene
 * 3
 * -ATENCION!! el pulsador 8 funciona a reves, si no esta
 * accionado da un nivel alto y al pulsarlo cambia a
 * nivel bajo
 * 
 * Cuando hayas terminado haz un "guardar como", asi tendras
 * el ejercicio basico y tambien tu creacion
 */
