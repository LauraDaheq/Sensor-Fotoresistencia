int SENSOR = 0;			// Entrada analogica A0
int LED = 3;			// Pin 3 Led
int VALOR;			// Almacena entrada A0

void setup(){
  pinMode(LED, OUTPUT);		// Pin 3 salida
}

void loop(){
  VALOR = analogRead(SENSOR);	// Lee la entrada A0
  if (VALOR < 200){		
    digitalWrite(LED, HIGH);
    delay(1000);	
  }
  digitalWrite(LED, LOW);	
}