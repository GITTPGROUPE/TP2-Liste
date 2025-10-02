


---

# Listes chaînées (INF 231)

Objectif

Cet exercice pratique a pour but de manipuler différentes structures de listes chaînées en C.
Il demande d’implémenter plusieurs opérations classiques : insertion, suppression et affichage, en utilisant différents types de listes.


 ## Problèmes posés

### 1. Suppression dans une liste simplement chaînée

Lire une valeur donnée par l’utilisateur.

Supprimer toutes les occurrences de cette valeur dans la liste.

Problème : parcourir la liste et gérer les cas particuliers (valeur au début de la liste, au milieu ou à la fin).



### 2. Insertion dans une liste simplement chaînée triée

Ajouter un élément de manière à ce que la liste reste ordonnée.

Problème : trouver la bonne position et insérer correctement le nouveau nœud.



### 3. Insertion dans une liste doublement chaînée triée

Même logique que la précédente mais avec des pointeurs avant et arrière.

Problème : bien gérer la mise à jour des deux pointeurs (prev et next).



### 4. Insertion en tête et en queue dans une liste simplement chaînée circulaire

Gérer une liste où le dernier élément pointe vers le premier.

Problème : bien différencier l’ajout au début et à la fin tout en maintenant la circularité.



### 5. Insertion en tête et en queue dans une liste doublement chaînée circulaire

Variante circulaire avec pointeurs dans les deux directions.

Problème : maintenir la cohérence des pointeurs (next et prev) en mode circulaire.





---

 ## Résumé des structures étudiées
Liste simplement chaînée (SLL) : pointeur vers l’élément suivant.

Liste doublement chaînée (DLL) : pointeurs vers l’élément suivant et précédent.

Liste simplement chaînée circulaire (CSLL) : le dernier nœud pointe vers le premier.

Liste doublement chaînée circulaire (CDLL) : chaque nœud a un prev et un next, et la liste est circulaire.

En résumé, cet exercice entraîne à :

Parcourir et modifier des listes.

Gérer correctement les pointeurs dans différentes variantes de listes chaînées.

Maintenir des propriétés spécifiques (ordre, circularité).



---


