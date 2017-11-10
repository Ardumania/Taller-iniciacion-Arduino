/*
 *  Ejercicio 5 del taller de iniciacion a Arduino
 *  
 *  Programado por Josemanu
 *  
 *  -Vamos a medir niveles de luz ambiente y a sacarlos
 *  por el puerto serie
 *  
 *  -Aprenderemos a realizar una calibracion sencilla
 */

// variables
int lectura;
int pinLDR = A3;
int ledVerde = 2;
int ledAmarilo = 4;
int ledRojo = 5;

// limites
#define MAX 700
#define MIN 200

void setup()
{
  pinMode(pinLDR, INPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarilo, OUTPUT);
  pinMode(ledRojo, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  lectura = analogRead(pinLDR);

  if(lectura >= (MAX - 100)){
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarilo, LOW);
    digitalWrite(ledRojo, LOW);
  }else if(lectura <= (MIN + 100)){
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarilo, LOW);
    digitalWrite(ledRojo, HIGH);
  }else{
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarilo, HIGH);
    digitalWrite(ledRojo, LOW);
  }
  
  Serial.println(lectura);
  delay(100);
}

/*
 *  Es tu turno de experimentar
 *  -cambia la entrada a un potenciometro y haz
 *  una calibracion par que se enciendan los ledes del
 *  semaforo a un tercio del rango cada uno
 *  
 *  -haz que por el puerto serie te diga de que color
 *  es el led que esta encendido
 *  
 *  Cuando hayas terminado haz un "guardar como", asi tendras
 * el ejercicio basico y tambien tu creacion
 */
