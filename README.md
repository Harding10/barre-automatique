🚧 Barrière Automatique avec Arduino (PlatformIO)
Ce projet met en œuvre une barrière automatique intelligente à l’aide d’un capteur de distance, d’un servomoteur et de deux LED (rouge et verte). Il illustre comment l’Arduino peut réagir dynamiquement à la présence d’un objet pour simuler l’ouverture ou la fermeture d’une barrière.

🛠️ Composants utilisés
- Arduino UNO
- Capteur à ultrasons HC-SR04
- Servomoteur SG90
- LED rouge (indique la fermeture)
- LED verte (indique l’ouverture)
- Résistances 220Ω
🔧 Principe de fonctionnement
- Si un objet est détecté à moins de 20 cm :
- Le servomoteur ouvre la barrière
- La LED verte s’allume
- Sinon :
- La barrière reste fermée
- La LED rouge s’allume

🚀 Mise en route
- Connecte ton Arduino à ton ordinateur
- Ouvre le projet dans PlatformIO
- Clique sur "Upload" ou utilise le raccourci Ctrl + Alt + U
- Teste le système en plaçant ta main ou une voiture miniature devant le capteur

👤 Auteur
Projet réalisé par Jeremie Harding
📧 behdegryjeremieharding@gmail.com – IUA Abidjan




