/*
 * Tercer ejercicio del taller de Iniciación a Arduino
 * 
 * Programado por Josemanu
 * 
 * -Vamos a crear 3 variables igual que en el ejercicio 2
 * -Definiremos los pines conectados a los ledes como
 * salidas y el pin del pulsador como entrada en el setup()
 * -En el loop() miramos primero si el pulsador esta
 * accionado, si lo esta repetiremos el mismo parpadeo que en
 * el anterior 5 veces, terminamos apagando todo
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
    for(int i = 1; i <= 5; i++)
    {
      digitalWrite(ledRojo, HIGH);
      digitalWrite(ledVerde, LOW);
      delay(500);
      digitalWrite(ledRojo, LOW);
      digitalWrite(ledVerde, HIGH);
      delay(500);
    }
  }
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledVerde, LOW);
  
}

/*
 * Es tu turno de experimentar:
 * -utiliza todo lo que aprendiste en los ejercicios 
 * 1 y 2
 * -haz que en diferentes pulsadores se repitan
 * secuencias diferentes distintas veces
 * 
 * -ATENCION!! el pulsador 8 funciona a reves, si no esta
 * accionado da un nivel alto y al pulsarlo cambia a
 * nivel bajo
 * 
 * Cuando hayas terminado haz un "guardar como", asi tendras
 * el ejercicio basico y tambien tu creacion
 */
