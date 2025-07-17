


    t'as compris le insertvec, et le mergevec. @@@

    


    celui que tu suis ne respecte pas le suite de jacobhstall dans le mergeinsertvec, le reste c'est bon de ce que j'ai compris. a verifie.

    today.

    // 1 finir de coder mergevec. ###


    //apprendre mergeinsertvec avec jacobhstall chercher dans github.
    // le comprendre le coder.
    // le tester.
    // tester l'ensmble.
    // voir les choses manquante.


    // pour mid faut attendre de voir lequel sera affecte, mais en vrai mid c'est un index. du coup 0 entre en jeu du coup si jenvoie mid a une fonction.
    // il va use mid du coup il est inclus ou pas ?




    1 relis les reassimile les bien, code les toi meme, `@@@@
    2 ensuite lis mergeinsertvec, la ou y a la recursivite, comprend le, 
    3 code le, 
    4 test ton code, 
    5 voit les autres code s'il marche pareil
    6 regarde ton parsing, s'il est op,
    7 essaye de choper la fiche de correction, 
    8 et apres ca lets go.


    // mergeinsertvec, je l'ai compris, relis le , reimprenne toi de ces principes, et apres code le, et teste le./!




    PS : j'ai fais l'ensemble des etapes en haut de maniere general et apres j'ai cree les mini etapes interne.



    github : https://github.com/chahid001/cpp09/blob/main/ex02/PmergeMe.cpp




    // partie vector segfault quand ya 7 chiffre ca seg pas, 11 ca seg pas non plus, du coup regarde dans ton code si tu vas pas trop loin, verifie les start end etc,
    verifie start end, les parametre de chacun et aussi les while etc. verifie chaque param de vector qui pourrait le faire sortir du container et atteindre une zone memoire interdite ou innacessible.





    // le segfault au gdb, en verifiant d'abord les indices que jenvoie a chaque fois, et si c'est un indice ou si c'est quu'un simple chiffre utiliser commme repaire, sinon verfiie aussi la taille du container pck argc - 1 peut etre c'est faux.
    // c'est bon du coup c'etait une erreur car le mid devait se decoupe, mais je lui envoyer end et non mid. du coup boucle infini segfault. @@@@@


    // verifie sur une longue liste, le parsing des nombres @@@@@@
    // stack dans l'exo 1, c'est pas bon car il utilise deque.


    // verifie le vrai ford-johnson.
    // avancer de deux en deux sur la liste de n, comme ca ca fais la paire, si c'est impair le dernier on stock on va voir.
    // compare si un tel est plus grand rentre dans MAX sinon dans MIN.
    // on trie MAX avec le programme que j'ai fais le SORTvector.
    // MIN tu prend sa taille et tu genere une suite de jacobsthal de la taille de MIN - 1. (trie du plus grand au plus petit sans doublon.)
    // puis tu insere dans MAX, dans l'ordre de L[J] = n , insert n dans MAX.
    // puis t'insere le dernier .


// finir de generer. la valeur d'avant + 2 x la valeur d'avant avant. + rajouter les indices manquant, et s'arreter avant que la valeur sois plus grande que la taille de MIN. @@@
// insere dans max dans l'ordre avec insert . @@@@
// inserer le dernier. @@@@@
// verifie si ca marche @@@@
// le faire avec deque. 
// ensuite gerer le Pb de container dans l'ex02.
// verifie les chiffre egaux. @@@@@
// verifie peu de chiffre. 1 2 3 4 5 // cas du vide. @@@@ ou des espaces etc en mode minish.


    std::vector<int> final; // par exemple la en faire 3 coute plus de ressources, est-ce le plus efficient ?
// chatgpt me l'as repris, il a fait une verif de toute mes fonctions et il a dis ici optimiser la memoire du coup j'avais raison.


// il insere plus rien le insertjacob, a voir dans le generate si ya pas un soucis place des printfs partout..@@@@



// GERER LES CAS 1 chiffre qui bug, et 2 chiffre ou ca rajoute un 0 devant.., 2 3 4 c'est des cas bizarre.


// changez ma politique de doublons ? c pas si obligatoire finalement
// nouvelle jacobhstall -> ...
// reinserer avec une recherche binaire de range 3. tout est ecris sur ta feuille.




// new jacob -> 1 - > 3 puis jacob-1, jacob, jacob-1, jacob, jacob-1 et indice manquant...
// le tag c'est le fort une fois trie, on tag sont ordre
// le trie recursif en 2. @@@@


// compaire valide avec le myPair. @@@@
// merge et insert, faut reecrire le first et le second a chaque fois. @@@@
// en gros tu fais t'as reecriture du first(anciennement MAX) et en meme temps a chaque fois tu prend le second avec. @@@@
// ensuite t'auras le bon tag. @@@@@
// t'auras juste a recoriger ton jacobsthall @@@@
// ensuite find(indice du max) ak fin de range faire un -2, et tant que tas pas insert tu prend le nouvelle indice en tant que ak et tu refait -2.
// integrer le odd.

// je finis de rearanger le code en mypair, ensuite je test les focntions lie au vector double de mypair, le size et les autres. @@@@
// manque a rearanger insertjacob.
// ensuite tester le code si deja tout est en ordre au debut ensuite apres un merge et insert affiche le pair si tout est en ordre et ensuite regenerer le jacob
// tu peux faire un find de jacob pour trouve le ak
// est ce que dans la recursiv ya pas un meilleur moyen de decouper avec mid. @@@ // jai change en faisant vraiment un tri par pair, sache que le merge merge le odd. 
// petit erreur de double incrementation du a la copie de lancien code, mais du coup avec pair.



// change le jacobsthal c'est pas jacob -1 mais bien tout les indice manquant entre deux jacob.
// teste la correlation jacobsthal + nbrinsert ou nbrinsert -1? demandez a chatgpt.
// faire les doublons. @@@@


//   //  if (i <= myPairs.size() - 2)  elle sers a r non ? si la ligne d'avant passe moi aussi je passe logique.


// te manquent de verifie la bonne generation de jacob, + le bout de code que t'as supp. => t'as un overflow . @@@@@@@
// ensuite faire la formule magique.


// formule magique.


// jacob pure ou pas finalement 
// end -> 
// if jacobpure -> c'est position dans mypair -1 + nbrdinsertion (nombre de fois ou on ete inserer les min)
// begin ->
// binary search also known half interval search
// 

// vraiment ne pas oublie les cas, car on peut te le casse aisement sinon... comme les cas de pushswap...ou autres fait attention...une liste de 0-6, et tester les int max min super long etc...

// le tri du max et le binary search utilise le meme proceder...






 // jacobsthal - 1 (c'est ca le vrai indice ici oublie pas)
    // find -> chercher le ak et comment le cherche tu peux utilise ta technique de son indice
   // du coup find en binaire et lowerbound en binaire, par binaire j'entend que tu fais une recherche avec tres peu de range.
   // le find j'ai bien reflechis, quand c'est un jacobsthal, du coup le chiffre personne ne s'est inserer derriere lui donc il equivaut a son indice+le nombre d'insertion je n'ai meme pas besoin de find je peut direct lowerbound, en ce qui concerne un jacobsthal -1, le probleme c'est que ya eu un jacob apres lui et on ne sait pas si son faible s'est inserer devant lui ce qui changerait son indice ou derriere lui ce qui ne changerait pas son indice. // du coup la relation pourrait etre ... 
   // pour le jacobsthal -1, on sait que son indice, a soit change de +nbrinsert-1 le -1 correspond au fait que le jacobsthal a pu inserer quelque chose derriere lui du coup ne pas bouger son indice, sois de +nbrinsert
    // pour le jacobsthal, le chiffre c'est indice = second[jacobsthal -1] + nbrinsert // et le jacobsthal -1 c'est indice = second[jacobsthal -1] + nbrinsert ou indice = second[jacobsthal -1] + nbrinsert-1
    // car le jacob il est l'indice le plus fort a etre inserer personne ne peut s'inserer derriere lui du coup son indice est clair c indice de base + nbrinsert
    // jacob-1, c'est qu'il a eu qu'un insert incertain, l'insert est sois plus fort que lui sois moins ce qui fais 2 possibilite nbrinsert ou nbrinsert-1
    // du coup jacob -> lowerbound direct jusqu'a trouver le bon indice car on peut ne pas le trouve en un lowerbound.
    // et le jacob -1 je ne sais pas encore comment le trouve. essayons sans comparaison est ce une comparaison de dire est ce que tu est egal a tel chose ?
    // apres lowerbound c'est fini? oui apres details de si ya 4 chiffre ect les cas speciaux et si tu gere ou non les doublons mais je dirais oui du coup si tu veux faire le testcke la lignejuste au dessus.
