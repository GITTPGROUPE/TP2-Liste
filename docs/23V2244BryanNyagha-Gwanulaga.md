# Insertion en tête et en queue dans une Liste Doublement Chaînée Circulaire

Une **liste doublement chaînée circulaire** est une structure de données où :  

- Chaque élément (noeud) possède :  
  - un pointeur **`next`** vers le noeud suivant,  
  - un pointeur **`prev`** vers le noeud précédent.  

- La liste est **circulaire** :  
  - le dernier noeud pointe vers le premier,  
  - le premier noeud pointe vers le dernier.  

Le but est d’implémenter deux fonctions pour insérer un nouvel élément dans cette structure :  
- **`insertDCfront`** : insérer un élément au **début (tête)** de la liste.  
- **`insertDCqueue`** : insérer un élément à la **fin (queue)** de la liste.  

---

##  Objectif et Fonctionnement des Fonctions  

### 1. Fonction `insertDCfront`  

####  Objectif  
- Ajouter un nouvel élément **au début** de la liste, c’est-à-dire avant l’actuel premier nœud.  
- Le nouvel élément devient la **nouvelle tête** de la liste.  

####  Fonctionnement  
1. Création et allocation d’un nouveau nœud.  
2. Si la liste est **vide**, le nouveau nœud pointe sur lui-même (il devient tête et queue à la fois).  
3. Sinon :  
   - On récupère le dernier noeud grâce à `li->prev`.  
   - On relie le nouveau noeud devant l’ancien premier :  
     - `new->next` pointe sur l’ancien premier.  
     - `new->prev` pointe sur le dernier nœud.  
   - On met à jour les liens de l’ancien premier et du dernier pour qu’ils pointent vers le nouveau noeud.  
4. On retourne le **nouveau noeud**, qui devient la **tête** de la liste.  

---

### 2. Fonction `insertDCqueue`  

####  Objectif  
- Ajouter un nouvel élément **à la fin** de la liste, c’est-à-dire après le dernier noeud.  
- La tête de la liste **ne change pas**.  

####  Fonctionnement  
1. Création et allocation d’un nouveau noeud.  
2. Si la liste est **vide**, le nouveau noeud pointe sur lui-même (il devient le seul élément).  
3. Sinon :  
   - On identifie le dernier noeud avec `li->prev`.  
   - On insère le nouveau noeud après ce dernier :  
     - `new->next` pointe sur la tête.  
     - `new->prev` pointe sur l’ancien dernier.  
   - On met à jour les liens de l’ancien dernier et de la tête pour maintenir la circularité.  
4. On retourne la **même tête** de la liste, puisque l’insertion est en queue.  

---
