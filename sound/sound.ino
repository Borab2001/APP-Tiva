/*
 * Code d'exemple pour le capteur LM35 (2°C ~ +110°C).
 */
  const int LED=3;

// Fonction setup(), appelée au démarrage de la carte Arduino
void setup() {

  // Initialise la communication avec le PC
  Serial.begin(9600);
}

// Fonction loop(), appelée continuellement en boucle tant que la carte Arduino est alimentée
void loop() {

  // Mesure la tension sur la broche A0
  int valeur_brute = analogRead(2 );
  float temperature_celcius = valeur_brute * 125/ 4095;
  if (temperature_celcius > 70){
    digitalWrite(LED, HIGH);
    Serial.println("on");
    delay(1000);
  } 
  else {
    digitalWrite(LED, LOW);
    Serial.println("off");
  }

  // Transforme la mesure (nombre entier) en température via un produit en croix


  // Envoi la mesure au PC pour affichage et attends 250ms
  Serial.println(temperature_celcius);
  delay(250);
}
