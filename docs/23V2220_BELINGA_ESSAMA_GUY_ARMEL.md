Ce projet illustre l’utilisation de différentes structures de listes chaînées en C avec un menu interactif :

Liste simplement chaînée (SLL)
Liste doublement chaînée (DLL)
Liste simplement chaînée circulaire (CSLL)
Liste doublement chaînée circulaire (CDLL)

Chaque type de liste dispose de fonctions d’insertion, d’affichage et de suppression.

 Organisation du projet
├── main.c        # Contient le menu principal et la boucle de gestion
├── list.h        # Déclarations des structures et prototypes des fonctions
├── list.c        # Implémentations des fonctions de manipulation de listes
└── README.md     # Documentation du projet

Exercice1: 
il est question de lire un element et supprimer touttes les occurrences dans la liste.
pour ce faire il nous faut une fonction qui va prendre ne parametre  la valaur a supprimer toutes ses occurences, ensuite il faut premierement tester si la liste est vide.
Si la liste est vide in faut envoyer un message d'eerreur pour dire que la suppression est impossible. Au cas ou la liste n'est pas vide il faut tester
si la valeur a suppeirmer se trouve en tete de liste ainsi creer un pointeur temporaire qui va servir à supprimer toutes les occurencs des la valeur entrer 
en parametre dans la fonction. La valeur temporaire va prendre la valeur de la tete et la head va prendre la valeur de head -> next pour garder la liste ici servira 
pour la suppresion en tete, ensuite pour la suppression de autre occurence de la valeur, le pointeur temporaire va prendre la valeur de la tete et va parcourr la liste
et chaque cellule de la liste on va tester si la valeur a supprimer est contenu dans temp -> valeur , et si c'est le cas cette cellule sera supprimer dela liste 
ce processus va continuer jusqu'a ce que temp pointe sur le NULL. 

Exercice2  et 3: 
il est question insertion d'un ellment dans une loste simplement chaine trie 
Pour ce faire on doit tout d'abord creer un espace memoire pour element a inserer a l'aider de la fonction malloc, ensuite pour un trie croissance insrtion va 
commencer a tester si la liste est vide, si c'est le cas un message d'erreur va etre envoyer, au cas contriare la valeur inserer va etre comparer au valeur des cellules
de la liste grace au pointeur temporaire qui va etre creer qui va compoarer la valeur a insere a la vealeur du temp -> valeur. Ceci jusqu'a trouver une valeur plus 
grand que la valeur a inserer. ce processus pour une liste doublemnt chaine  
