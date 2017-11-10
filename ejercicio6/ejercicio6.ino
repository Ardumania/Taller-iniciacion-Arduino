/*
 * Ejercicio 6 del taller de iniciacion a Arduino
 * 
 * Programado por Josemanu
 * 
 * -Normalmente en el taller de iniciacion no da tiempo 
 * a hacer este ejercicio, pero puedes hacerlo en tu casa
 * para seguir repasando lo aprendido
 * 
 * -Vamos a tomar la medida en bruto de un sensor y a 
 * convertirla en un valor util mediante operaciones 
 * matematicas
 */

//Control temperatura
int analogPin = A2; // Pin analogico 0 de Arduino
float temperature = 0.0;
int grados, decimas, gradR, deciR;
int lm35read, val, cnt;


void setup()
{
  pinMode(analogPin, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
   // inicializamos el valor de tmedia
    int tmedia=0;
   
    // medimos la temperatura 10 veces y la almacenamos en tmedia
    for (cnt=0; cnt<10; cnt++)
    {
      lm35read = analogRead(analogPin);
      tmedia = tmedia + lm35read;
    }
   
    // calculamos la media de las medidas
    tmedia=tmedia/cnt;
   
    // convertimos tmedia en un valor en grados, pero
    // dadas las caracteristicas del sensor la precision es de
    // 0.5 grados y los decimales son .4 o .9
    temperature = (5.0 * float(tmedia) * 100.0)/1024.0;
   
    // mapeamos el valor tmedia para que nos de
    // la temperatura en decimas de grado
    val = map(tmedia,0,1023,0,4990);
   
    // ahora los grados los obtenemos dividiendo por 10
    grados=val/10;
   
    // y las decimas de grado son el resto de la division
    // por 10
    decimas=val%10;
   
    // Redondeamos los decimales a 0 o a 5
    if (decimas< 3)
       {
         gradR=grados;
         deciR=0;
       }
    if ((decimas > 2)&&(decimas<7))
       {
         gradR=grados;
         deciR=5;
       }
     else
       {
         gradR=grados+1;
         deciR=0;
       }  
  
  // mostramos la temperatura
  Serial.print(" LM35D(A2): ");
  Serial.print(grados);
  Serial.print(".");
  Serial.println(deciR);

  // pequeño retardo para no saturar el puerto serie
  delay(1000);
}

/*
 * Es tu turno de experimentar:
 * 
 * -mide la temperatura ambiente
 * 
 * -pon un dedo encima del sensor y veras que la temperatura
 * aumenta
 * 
 * -practica lo aprendido hasta aqui, haz que el semaforo 
 * encienda sus ledes segun la temperatura ambiente, temperatura
 * en aumento y temperatura con dedo encima del sensor
 * 
 * -haz que uno de los canales del led RGB varie su brillo 
 * entre un minimo y un maximo si la temperatura es ambiente o
 * temperatura de tu dedo, el cambio en el led debe ser gradual
 */
