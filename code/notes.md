# PTR : Laboratoire 2

## Modification

#### *Comparez les résultats avec les précédents*

On peut voir que lorsque l'on lance gettimeofday sans le rediriger, on obtient des valeurs différentes pour chaque printf. Lorsque l'on lance gettimeofday2 sans le rediriger, on obtient des suites de valeurs étant pareil.
Il faut noter que cette différence n'existe pas lorsque l'un des deux programme est redirigé dans un fichier.

#### *Expliquez pourquoi il y a des différences*
@TODO : du au printf dans la version sans redirection, réfléchir pourquoi pas dans la redirection

#### *Quelle est la granularité, ou précision, de la fonction `gettimeofday()`?*

On peut voir 6 chiffre après la virgule, soit 10^-6 secondes
@TODO a paufiner

## Horloges Posix

#### *Commentez votre code et vos résultats.*

On peut voir qu'on a une meilleure granularité en utilisant

## *Développement : timers*

#### *Pouvez-vous expliquer comment il fonctionne ?(Code)*

## *Mesures*
