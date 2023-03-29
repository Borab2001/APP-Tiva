// Fonction setup(), appelée au démarrage de la carte Arduino
void setup() {

  // Initialise la communication avec le PC
  Serial.begin(9600); //msp430g2231 must use 4800
}

// Fonction loop(), appelée continuellement en boucle tant que la carte Arduino est alimentée
void loop() {
  //read the input on analog pin PD1
  int sensorValue = analogRead(2);
  int sensorValueEnd = (sensorValue - 13) * (1000/229);
  
  // Print la valeur lue
  Serial.println(sensorValue);
  
  delay(1000); //décalage pour la lisibilité
}
