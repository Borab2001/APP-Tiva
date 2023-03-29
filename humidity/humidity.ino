void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  float valeur_brute = analogRead(2);
  
  if(valeur_brute == 0){
    Serial.print("entre 0% et 20%");
  } else if(valeur_brute == 4095){
    Serial.println("entre 80% et 100%");
  } else {
    float humidite = 20+(valeur_brute * 60) / 4095;
    Serial.println(humidite);
    delay(500);
  }
}
