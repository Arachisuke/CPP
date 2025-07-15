


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