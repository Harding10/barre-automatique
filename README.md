
# 🚧 Barrière Automatique avec Arduino (IDE Arduino)

Ce projet met en œuvre une **barrière automatique intelligente** à l’aide d’un capteur à ultrasons **HC-SR04**, d’un **servomoteur SG90**, et de l’**IDE Arduino**. Il illustre comment un système embarqué peut réagir dynamiquement à la présence d’un objet pour simuler l’ouverture ou la fermeture d’une barrière.

---

## 🛠️ Composants utilisés

| Composant            | Quantité | Rôle                                 |
|----------------------|----------|--------------------------------------|
| Arduino UNO          | 1        | Carte microcontrôleur principale     |
| HC-SR04              | 1        | Capteur à ultrasons pour la détection|
| Servomoteur SG90     | 1        | Actionneur pour ouvrir/fermer la barrière |
| Câbles Dupont        | Plusieurs| Connexions entre les composants      |
| Breadboard (optionnel)| 1       | Facilite le câblage                  |

---

## 🔧 Principe de fonctionnement

- Si un objet est détecté à **moins de 10 cm** :
  - Le **servomoteur ouvre** la barrière (position 90°)
- Sinon :
  - La **barrière reste fermée** (position 0°)
- La distance est affichée en temps réel dans le **moniteur série** pour le débogage



## 🚀 Mise en route

1. Ouvre l’**IDE Arduino**
2. Copie-colle le code dans un nouveau fichier `.ino`
3. Sélectionne la carte **Arduino UNO** et le bon port COM
4. Clique sur **Téléverser** (icône flèche droite)
5. Ouvre le **moniteur série** pour visualiser les distances
6. Place ta main ou un objet devant le capteur pour tester l’ouverture automatique

---

## 📚 Extensions possibles

- Ajout de LED pour indiquer l’état (verte = ouverte, rouge = fermée)
- Intégration d’un écran LCD pour afficher la distance
- Ajout d’un buzzer pour signaler l’ouverture
- Enregistrement des passages via carte SD ou communication série

---

## 👤 Auteur

Projet réalisé par **Jeremie Harding**  
📧 behdegryjeremieharding@gmail.com  
🏫 Institut Universitaire d’Abidjan (IUA)

