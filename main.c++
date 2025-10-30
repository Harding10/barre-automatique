#include <Arduino.h>

#include <Servo.h>

// Broches du capteur HC-SR04
const int trigPin = 2;
const int echoPin = 3;

// LEDs
const int ledVerte = 5;
const int ledRouge = 6;

// Servo moteur
Servo barriere;

// Distance seuil pour détecter un objet (en cm)
const int seuil = 20;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledVerte, OUTPUT);
  pinMode(ledRouge, OUTPUT);
  
  barriere.attach(9);       // Signal du servo sur D9
  barriere.write(0);        // Barrière fermée par défaut
  
  Serial.begin(9600);       // Pour le débogage dans le moniteur série
}

void loop() {
  long duree;
  int distance;

  // Déclenchement du capteur HC-SR04
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Lecture de l'écho
  duree = pulseIn(echoPin, HIGH);
  distance = duree * 0.034 / 2;

  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance <= seuil) {
    // Objet détecté proche
    digitalWrite(ledRouge, LOW);
    digitalWrite(ledVerte, HIGH);
    barriere.write(90);  // Ouvrir la barrière
  } else {
    // Rien à proximité
    digitalWrite(ledRouge, HIGH);
    digitalWrite(ledVerte, LOW);
    barriere.write(0);   // Fermer la barrière
  }

  delay(200); // Pause légère pour stabilité
}

