# Introduction aux pointeurs et à la gestion mémoire en C

## Mémoire en C

Pour qu'un programme s'exécute, il doit utiliser certaines des ressources de l'ordinateur telles que l'**unité centrale**, la **mémoire vive**, les **entrées-sorties** ou d'autres matériels. 

C'est au **système d'exploitation** (OS) sous-jacent qu'il incombe de décider comment et à quelle capacité utiliser ces ressources.

 L'une des plus importantes de ces ressources est la mémoire, plus précisément : la mémoire temporaire utilisée pour l'exécution du programme, appelée **mémoire vive (RAM)**. Lorsqu'un programme s'exécute, le système d'exploitation réserve une section de la RAM physique de l'ordinateur pour qu'elle soit utilisée exclusivement par le programme. 

 L'unité fondamentale de cette mémoire est l'**octet**. Comme vous l'avez appris précédemment, toutes les variables sont simplement une collection d'un certain nombre d'octets : un **int** est composé de **4 octets**, un **double** est composé de **huit octets**, et ainsi de suite. 

 La section allouée de la RAM est simplement un bloc de n'importe quel nombre d'octets dont le programme a besoin (si disponible, bien sûr).

Comme vous pouvez le voir, dans ce bloc de mémoire à droite, chaque octet est associé à une adresse numérotée selon le système de [numérotation hexadécimal](https://fr.wikipedia.org/wiki/Syst%C3%A8me_hexad%C3%A9cimal). Par exemple, un octet de mémoire peut se trouver à l'adresse `0x200` et l'octet qui le suit immédiatement à l'adresse `0x201`.


![memoire informatique](./ressources/carte-memoire.png)

Chaque langage de programmation a une politique différente concernant l'accès direct et la manipulation d'un octet en mémoire ; certains l'autorisent, d'autres non. Le C est l'un des langages qui permet de telles opérations par l'utilisation d'un pointeur, et nous allons voir comment dans cette leçon.

À première vue, les pointeurs peuvent sembler être une façon trop compliquée de travailler avec des variables, et pour des exemples aussi simples destinés à illustrer les principes de base, c'est vrai.

> Cependant, la valeur réelle des pointeurs devient apparente dans des applications plus complexes, comme le travail avec des structures de données ou des systèmes embarqués (pensez aux robots et aux micropuces).



## Pointeurs

En C, on peut accéder à un octet de mémoire à l'aide d'un **pointeur**. Un pointeur contenant l'**adresse d'une variable** est dit "pointer" vers cette variable.

Rappelez-vous que lorsque vous **déclarez une variable**, un **bloc contigu d'octets** est **réservé en mémoire**. 

Un **pointeur** vers une variable est l'**adresse du premier de ces octets**. 

Un pointeur peut être créé pour chaque type de variable : qu'il s'agisse d'une variable primitive (par exemple `int`, `char` ou `double`), d'un type de données personnalisé créé à l'aide d'un `struct` (nous les aborderons dans une leçon ultérieure) ou même d'un autre pointeur. 

La syntaxe d'un pointeur est la suivante :

```
TypeDonnée* nomDuPointeur;
```

ou


```
TypeDonnée *nomDuPointeur;
```

Par exemple, pour déclarer une variable pointeur (appelée `ptr`) qui pointe vers un `int`, vous écrirez :

```c
int* ptr ; // Pointeur vers un int
int *ptr ; // Identique au précédent mais de style différent.
```


Dans ce cas, `ptr` **stocke l'adresse du premier octet d'un bloc de mémoire** contenant un `int`.

Pour afficher cette adresse à l'écran, on utilise `printf()` comme suit :


```c
int x ; // Création d'une variable int
int* ptr = &x ; // Pointeur vers cet int (nous verrons ce que signifie "&" dans les exercices à venir)
printf("%p", ptr) ; // %p nécessaire pour indiquer à printf() que ptr est de type pointeur
```

Cela produira un **nombre entier hexadécimal** qui représente l'**adresse en mémoire** qui stocke une variable de type int. 


Ce nombre **sera différent à chaque fois que le programme sera exécuté**.

Si nous avions un autre pointeur nommé `ptr2` qui ne pointe pas vers une variable déclarée, l'affichage de ce pointeur donnerait (`nil`):

```c
int* ptr2;
printf("%p", ptr2); // Affiche: (nil)
```

Dans les exercices suivants, nous verrons comment utiliser les pointeurs.


### À vous de jouer ! 🤠

1. Après avoir repris un espace de travail vide, copiez-collez le code ci-dessous:

```c
#include<stdio.h>

int main() {


  // Question 1 ci-dessous

  // Question 2 ci-dessous

  // Question 3 ci-dessous
  
}
```


2. Créez une variable `double` nommée `dblVar`.


3. Créez une variable de type pointeur appelée `dblPtr` qui pointe vers `dblVar`.


4. Affichez à l'écran l'adresse stockée dans `dblPtr`.


## L'opérateur de référence

Les pointeurs étant utilisés pour stocker l'adresse mémoire d'une variable, nous devons d'abord obtenir cette adresse. Pour ce faire, nous utilisons l'**opérateur de référence** (`&`).

La syntaxe de cet opérateur est la suivante

```c
&nom_variable ;
```


Considérons le morceau de code suivant :

```c
int x = 9;
printf("%p", &x);
```

Cela affichera à l'écran l'**adresse mémoire** de la **variable** `x`.

Pour assigner une adresse à un pointeur, la syntaxe suivante est utilisée :

```
pointeur = &nom_variable; 
```

Considérons l'exemple suivant:

```c
int x = 727 ; // Déclare la variable x
int* ptr = &x ; // Déclare un pointeur vers une variable int et lui attribue l'adresse de la variable x
printf("%p\n", &x) ; // Affiche l'adresse de x
printf("%p\n", ptr) ; // Affichage de l'adresse pointée par ptr
```

Le code ci-dessus déclare une variable entière `x` et un pointeur sur `int` que l'on nomme `ptr`.


Le pointeur se voit alors attribuer la **mémoire de la variable** `x`. 


Les deux dernières instructions `printf()` affiche cette adresse ; les deux lignes produiront le même nombre hexadécimal puisqu'elles font toutes deux référence à la même adresse en mémoire.


L'**adresse que contient un pointeur n'est pas constante**. Un **pointeur peut être réaffecté à une nouvelle adresse** tant que la **cohérence des types est maintenue** (par exemple, un pointeur int pointe vers une variable de type int). Prenons l'exemple suivant :


```c
int* ptr ; // Déclare un pointeur vers un type d'entier
 
int x = 3 ; // Déclare la variable x
ptr = &x ; // Affecte l'adresse mémoire de la variable x au pointeur
printf("%p\n", ptr) ; // Affiche l'adresse de la variable x 
 
int y = 14 ; // Déclare la variable y
ptr = &y ; // Réaffecte le pointeur à l'adresse mémoire de la variable y
printf("%p\n", ptr) ; // Affiche l'adresse de la variable y
```

### À vous de jouer ! 🤠

1. Après avoir crée un espace de travail vide, copiez-collez le code ci-dessous:

```c
#include <stdio.h>

int main() {
  
  double g = 9.81 ;
  double pi = 3.14 ;
  
  // Le code de la question 1 ci-dessous.

  // Le code de la question 2 ci-dessous.

  // Le code de la question 3 ci-dessous.
  
}
```

2. Déclarer un pointeur sur un `double` appelé `dblPtr` et lui attribuer l'**adresse** de la variable `g`.


3. Afficher l'adresse de la variable `g`.


4. Réaffecter `dblPtr` à l'adresse de la variable `pi`.



## L'opérateur de déréférencement

Si nous disposons d'un pointeur auquel est attribuée l'adresse mémoire d'une variable, nous aurons éventuellement besoin d'accéder aux données qu'il contient afin de pouvoir les utiliser ou les manipuler. Les données contenues dans l'adresse mémoire pointée par un pointeur sont accessibles à l'aide de l'**opérateur de déréférencement** (`*`). 

La syntaxe est la suivante: 

```
*nom_pointeur ;
```


Une fois qu'un pointeur est déréférencé, nous pouvons utiliser son contenu comme nous le ferions avec une variable ordinaire. Il est important de **ne pas confondre cet opérateur avec l'opérateur de multiplication** car ils sont représentés par le même symbole !

Voici un exemple complet :

```c
int x = 4 ;
int* ptr = &x ; // ptr stocke l'adresse mémoire de la variable x
 
int y = *ptr ; // Déclare la variable y et lui attribue les données stockées dans la mémoire pointée par ptr, qui est la valeur de la variable x
 
printf("%i", y) ;
```

Le code ci-dessus illustre comment obtenir les données stockées dans l'adresse pointée par `ptr` en la déréférençant.

Puisque `ptr` **stocke l'adresse de la variable x**, la valeur obtenue en déréférençant `ptr` est la **valeur de x**. 

Si la valeur d'un pointeur déréférencé est modifiée, la valeur de la variable correspondante changera de la même manière :

```c
int x = 4 ;
int* ptr = &x ;
 
*ptr = 200 ; // Les données de l'adresse mémoire indiquée par ptr contiennent maintenant la valeur 200.
 
printf("%i", x) ; // La valeur 200 sera affichée.
```


- Le code ci-dessus déclare une variable `x` avec une valeur initiale de quatre.
- Le pointeur `ptr` **pointe vers l'adresse mémoire** de `x`.
-  `*ptr = 200` change les données à l'adresse mémoire stockée dans `ptr` en `200`.

Comme cette adresse mémoire est celle de la variable `x`, la valeur de `x` passe maintenant de `4` à `200`.


### À vous de jouer ! 🤠

1. Après avoir crée un espace de travail vide, copiez-collez le code ci-dessous:

```c
#include<stdio.h>

int main() {
  
  int k = 2000 ;
  int* ptr = &k ;
  
  // Question 2 ci-dessous

  // Question 3 ci-dessous

  printf("%i\n", k) ; // Remarquez comment cette variable a changé de valeur après la question 2 !
}
```

2. Affichez les données stockées à l'adresse mémoire vers laquelle pointe `ptr`.


3. Changez la valeur contenue dans l'adresse mémoire pointée par ptr de `2000` à `961`.

## Arithmétique des pointeurs

Rappelez-vous qu'un pointeur est un **type spécial** de variable entière. Cela implique que les opérations arithmétiques de base peuvent être effectuées sur les pointeurs.


Les seules opérations arithmétiques autorisées pour les pointeurs sont l'**addition** et la **soustraction**.

Conceptuellement, ajouter à (ou soustraire de) un pointeur signifie que le **pointeur pointera vers une nouvelle adresse**.


La **multiplication** n'est **pas autorisée** car l'**adresse d'un octet de mémoire est généralement un grand nombre** ; par conséquent, la multiplication d'une adresse **peut donner un nombre encore plus grand**, représentant éventuellement une **adresse en dehors des limites de l'espace mémoire disponible**. 

La **division n'est pas autorisée** car elle permet potentiellement à un pointeur de pointer de manière illogique vers une adresse avec un indice non entier.

L'opération d'**addition pour un pointeur** n'est **valable** que lorsqu'on **ajoute un entier à un pointeur** ; on ne peut pas additionner deux pointeurs ou plus !

La syntaxe est l'addition traditionnelle illustrée par l'exemple suivant (ici, `n` représente un entier) :

 ```c
pointeur = pointeur + n;
pointeur += n; // Même chose mais sytaxe differente
 ```

La chose importante à noter ici est que l'**ajout de `n`** à un pointeur **n'incrémente pas l'adresse pour pointer vers une valeur** située à n octets. Il **déplace le pointeur de n * (taille du type de données en octets)**.

Par exemple, si un pointeur vers un int, dont la taille est de quatre octets, contient initialement l'**adresse 100** (nous utiliserons une adresse décimale pour simplifier), et que l'on ajoute trois au pointeur, celui-ci pointera désormais vers l'adresse **112**.

Voyons comment cela fonctionne :

```c
int main() {  
  int* ptr ; 
  ptr += 3 ; // Incrémente le pointeur de trois blocs. 
}
```

Ce code incrémente le pointeur `ptr` pour stocker l'adresse qui se trouve à trois tailles d'`int`.

L'incrémentation par 1 peut être réalisée de la manière suivante :

```c
pointeur++ ;
pointeur += 1 ; // Même résultat avec une syntaxe différente
```

La soustraction d'un pointeur se comporte de la même manière, l'adresse étant décrémentée au lieu d'être incrémentée.

Les pointeurs sont très puissants et permettent un plus grand contrôle sur un programme.

Mais de grands pouvoirs impliquent de grandes responsabilités ! 

L'utilisation de l'arithmétique des pointeurs peut être dangereuse si elle est utilisée sans précaution.

Si l'on tente d'incrémenter (ou de décrémenter) un pointeur au-delà des limites de l'espace mémoire d'un programme, un crash se produira. Les pointeurs sont si dangereux que de nombreux langages de haut niveau (tels que Java) ne permettent même pas de telles opérations.

**Soyez prudent !**


### À vous de jouer ! 🤠

1. Après avoir crée un espace de travail vide, copiez-collez le code ci-dessous:

```c
#include<stdio.h>

int main() {
  double* ptr1 ;

  // Le code pour la question 1 ci-dessous

  // Le code pour la question 2 ci-dessous
}
```


2. Incrémenter le pointeur sur double `ptr1` de 5.


3. Décrémentez le pointeur `ptr1` de 4.


## Pointeurs et tableaux

Dans la leçon sur les tableaux, vous avez appris qu'un tableau est un bloc de mémoire [contigu](https://www.larousse.fr/dictionnaires/francais/contigu/18599) réservé à de nombreuses variables du même type. 

En raison de cette organisation structurée, un **pointeur** est bien **adapté pour travailler avec ce type de données**.

Si nous disposons d'un tableau d'entiers, nous pouvons utiliser les pointeurs et l'arithmétique des pointeurs pour parcourir le tableau et accéder à ses valeurs ou les manipuler.

> Cette façon de travailler avec les tableaux peut sembler trop compliquée, mais il existe des applications avancées dans lesquelles il est nécessaire de travailler avec un tableau au moyen d'un pointeur.

Considérons un tableau d'entiers `tab`.

Comme les tableaux sont des blocs de mémoire contigus, si nous avons un pointeur sur le premier élément, nous pouvons utiliser l'**arithmétique des pointeurs*** pour **accéder au reste du tableau**. 

Gardez à l'esprit que si cette méthode est valable pour travailler avec des tableaux, **elle n'est pas sûre**.

L'accès à la mémoire en dehors des limites du tableau ne provoquera pas le plantage du programme, mais corrompra silencieusement les données stockées à ces adresses. 

Dans le cas d'une opération de lecture, elle renverra une valeur aléatoire.

En gardant la **prudence à l'esprit**, voyons comment nous pouvons accéder et manipuler avec précaution les éléments d'un tableau en utilisant des pointeurs. Le code suivant affiche tous les éléments d'un tableau :

```c
int tab[10] = {2, 4, 7, 1, 10, 3, 11, 6, 20, 5} ;
int* ptr = &tab[0] ; // Pointeur vers le premier élément
 
for(int i = 0 ; i < 10 ; i++){
  printf("%i\n", *ptr) ; // Déférencement du pointeur et affichage de la valeur
  ptr++ ; // Incrémente le pointeur pour qu'il pointe sur le prochain entier du tableau
}
```

Le code suivant illustre comment modifier les valeurs d'un tableau à l'aide de pointeurs en changeant tous les éléments d'un tableau en leur mettant la valeur `3` :

```c
int tab[10] = {2, 4, 7, 1, 10, 3, 11, 6, 20, 5} ;
int* ptr = &tab[0] ; // Pointeur vers le premier élément
 
for(int i = 0 ; i < 10 ; i++){
  *ptr = 3 ; // Déréférencement du pointeur et affectation de la valeur à l'adresse ptr à 3
  ptr++ ; // Incrémente le pointeur pour qu'il pointe sur le prochain int du tableau
}
 
for(int i = 0 ; i < 10 ; i++){
  printf("%i",tab[i]) ;
}
```

Le résultat du code ci-dessus sera un tableau de 10 entiers égaux à 3.

> Ces techniques sont également applicables aux chaînes de caractères puisqu'il s'agit également de tableaux. On ne le dira jamais assez : **soyez très prudent lorsque vous travaillez avec des pointeurs** !


### À vous de jouer ! 🤠

1. Après avoir crée un espace de travail vide, copiez-collez le code ci-dessous:

```c
#include<stdio.h>
#include<string.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  char s[] = "Ne pas chercher midi à quatorze heures";

  // Question 1 va ici.

  // Question 2 va ici.

  // Question 3 va ici.

  // Question 4 va ici.
  
  printf("%s\n", s);  
}
```


2. Créer un pointeur sur un `int` appelé `ptr` et le faire pointer sur le dernier élément du tableau `arr`.

3. En utilisant l'arithmétique des pointeurs, faites une boucle sur `arr` et afficher le contenu en sens inverse.

4. En utilisant l'arithmétique des pointeurs sur `ptr2`, parcourez en boucle la chaîne s et remplacez tous les caractères par le caractère "#".
