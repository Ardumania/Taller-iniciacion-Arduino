/*
 * Ejercicio 4 del taller de iniciacion a Arduino
 * 
 * Programado por Josemanu
 * 
 * -Vamos a leer una entrada analogica y vamos a sacar un valor
 * proporcional por un pin PWM conectado al led RGB
 * 
 * -Tambien utilizaremos el puerto serie para ver que pasa
 * dentro de Arduino
 */

int RGBverde = 10;
// el pin A1 se utilizara como entrada
int pinEntrada = A1;
int lectura, resultado;

void setup()
{
  pinMode(RGBverde, OUTPUT);
  pinMode(pinEntrada, INPUT);

  // Inicio de comunicacion serie
  Serial.begin(9600);
}
void loop()
{
  lectura = analogRead(pinEntrada);
  resultado = map(lectura, 0, 1023, 0, 255);
  analogWrite(RGBverde, resultado);

  // construimos una frase con la informacion interesante
  Serial.print("el valor de lectura es ");
  Serial.print(lectura);
  Serial.print(" y el valor de salida es ");
  Serial.println(resultado);

  // pequeño delay para no saturar el puerto serie
  delay(100);
}
/*
 *  Es tu turno de experimentar:
 *  -puedes añadir otro potenciometro y jugar a mezclar
 *  dos canales del led RGB
 *  
 *  -saca mas informacion por el puerto serie
 *  
 *  Cuando hayas terminado haz un "guardar como", asi tendras
 * el ejercicio basico y tambien tu creacion
 */
