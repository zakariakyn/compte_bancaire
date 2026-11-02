# Gestion de Compte Bancaire en C++

Ce projet est une application console simple écrite en C++ qui illustre les concepts de base de la Programmation Orientée Objet (POO). Il permet de créer et de gérer un compte bancaire à travers différentes opérations comme l'initialisation, le dépôt, le retrait et l'affichage des informations.

## Fonctionnalités

La classe `CompteBancaire` offre les fonctionnalités suivantes :
- **Initialisation d'un compte** : Saisie interactive du nom du titulaire, du numéro de compte et du solde initial.
- **Consultation** : Affichage des informations du titulaire (`afficheinfo`) et du solde actuel (`affichesolde`).
- **Dépôt d'argent** : Ajout d'un montant au solde existant (`deposer`).
- **Retrait d'argent** : Soustraction d'un montant du solde existant, avec une vérification préalable que le solde est positif et strictement supérieur au montant demandé (`retirer`).

## Structure de la Classe `CompteBancaire`

### Attributs (Privés)
* `string titulaire` : Le nom complet du propriétaire du compte.
* `int numeroCompte` : L'identifiant unique du compte.
* `double solde` : Le montant d'argent disponible sur le compte.

### Méthodes (Publiques)
* **Mutateurs (Setters)** : `settitulaire()`, `setnumeroCompte()`, `setsolde()` pour modifier les attributs privés en toute sécurité.
* `void initialion()` : Demande à l'utilisateur de saisir les données du compte via la console.
* `void afficheinfo()` : Affiche le nom du titulaire et le numéro de compte.
* `void affichesolde() const` : Affiche uniquement le solde actuel (méthode constante qui ne modifie pas l'objet).
* `void deposer(double montant)` : Crédite le compte.
* `void retirer(double montant)` : Débite le compte si les fonds sont suffisants.

## Prérequis

Pour compiler et exécuter ce programme, vous avez besoin d'un compilateur C++ installé sur votre machine, tel que :
* **GCC (g++)** sous Linux, macOS ou Windows (via MinGW / WSL)
* **Clang**
* **MSVC** (Visual Studio)

## Installation et Exécution

1. Enregistrez votre code source dans un fichier nommé `main.cpp`.
2. Ouvrez votre terminal ou invite de commande dans le dossier contenant le fichier.
3. Compilez le programme avec `g++` :
   ```bash
   g++ main.cpp -o compte_bancaire
   ```
4. Exécutez le programme :
   * **Sur Linux / macOS :**
     ```bash
     ./compte_bancaire
     ```
   * **Sur Windows :**
     ```cmd
     compte_bancaire.exe
     ```

## Exemple d'utilisation

```text
donner le nom de titulaire : Jean Dupont
donner le numro de compte : 123456
donner le solde de  compte: 1000

le solde de  compte: 1000

le nom de titulaire : Jean Dupont
le numero de compte : 123456

donner le montant a deposer : 500

le solde de  compte: 1500

le nom de titulaire : Jean Dupont
le numero de compte : 123456

donner le montant a retirer : 300

le solde de  compte: 1200

le nom de titulaire : Jean Dupont
le numero de compte : 123456
```