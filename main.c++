#include <Servo.h> // Librairie pour contrôler le servomoteur

// === Déclaration des variables ===
const int trigPin = 2;     // Broche TRIG du capteur HC-SR04
const int echoPin = 4;     // Broche ECHO du capteur HC-SR04
const int seuil = 10;      // Distance seuil en cm

long duree;                // Durée de l’écho en microsecondes
float distance;            // Distance calculée en cm
int pos = 0;               // Position du servomoteur

Servo monServo;            // Création de l’objet servomoteur

// === Initialisation ===
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  monServo.attach(9);      // Servo connecté à la broche D9
  Serial.begin(9600);      // Pour affichage dans le moniteur série (optionnel)
}

// === Boucle principale ===
void loop() {
  // Déclenchement du capteur
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Lecture de la durée de l’écho
  duree = pulseIn(echoPin, HIGH);

  // Calcul de la distance (vitesse du son ≈ 340 m/s → 0.034 cm/µs)
  distance = duree * 0.034 / 2;

  // Affichage (optionnel pour débogage)
  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm");

  // Contrôle de la barrière
  if (distance <= seuil) {
    pos = 90; // Ouvre la barrière
  } else {
    pos = 0;  // Ferme la barrière
  }

  monServo.write(pos); // Positionne le servomoteur
  delay(1000);         // Pause d’1 seconde avant la prochaine mesure
}