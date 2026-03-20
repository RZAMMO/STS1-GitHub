//Fonctions réalisées par l'étudiant 1 :Eren

//Fonction qui permet de savoir si une personne est majeur ou non
bool EstMajeur(int age);
{
	if(age>= 18)
		return true;
	else 
		return true; // modification réalisées par l'etudiant 2 Sam
}
//Calcul des exposants sans pow
int exposant(int nbre, int exp) {
    // Vérifier si l'exposant est supérieur à 99
    if (exp > 99) {
        return -1;
    }

    int resultat = 1;
    for (int i = 0; i < exp; i++) {
        resultat = resultat * nbre;
    }
    return resultat;
}
//calcul du TVA de 20%
float TVA(int prix);
{
	float resultat;
	
	if(prix >= 1000)
		resultat = prix + prix * 0.196;
	else
		resultat = prix + prix * 0.055;
	return resultat;
}
//retourne le plus grand nombre avec un tri 
int plusGrand(int a, int b, int c) {
    // Vérifier si deux nombres ou plus sont égaux
    if (a == b || a == c || b == c) {
        // Retourner le plus petit
        int min = a;
        if (b < min) min = b;
        if (c < min) min = c;
        return min;
    } else {
        // Sinon retourner le plus grand
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        return max;
    }
}

//Fonctions réalisées par l'étudiant 2 :
//Fonction permettant de savoir si un nombre est pair ou non
bool estPair(int nb) {
    return (nb % 2 == 0) || (nb % 7 == 0);//modification apporté par Eren
}

//Fonction qui fait la somme des sommes
int sommeNombre(int nb) {
    int somme = 0;
    for (int i = 1; i <= nb; i++) {
        somme += i;
    }
    somme += nb; // ajout du nombre a la fin
    return somme; //modification apporté par Eren
}

//Calcul du salaire net
float salaireNet(int salaire, float chargeSalariale, float prime) {
    // chargeSalariale : pourcentage de charges
    float net = salaire * (1 - chargeSalariale / 100.0f) + prime;
    return net;
}

//Renvoi le plus petit nombre
int plusPetit(int a, int b, int c) {
    int min = a;
    if (b < min){
		min = b;
	}
    if (c < min){
		min = c;
	}
    return min;
}










//Fonctions réalisées par l'étudiant 3 : Lony


//fonction qui verifie si il est pair ou divisible par 8
bool estImpair(int nb) {
    // Vérifie si n est impair ou divisible par 8
    return (nb % 2 != 0) || (nb % 8 == 0);

bool estImpair(int nb) {
    // Vérifie si n est impair ou divisible par 8
    return (nb % 2 != 0) || (nb % 8 == 0);
	
    int nombre;

    cout << "Entrez un nombre : ";
    cin >> nombre;

    if (estImpair(nombre)) {
        cout << nombre << " est impair ou divisible par 8." << endl;
    } else {
        cout << nombre << " n'est ni impair ni divisible par 8." << endl;
    }

    return 0;
}

// Fonction qui retourne la moyenne de trois nombres
double moyenne(double nb1, double nb2, double nb3) {
<<<<<<< HEAD
    if(nb1 < 0 || nb2 < 0 || nb3 < 0){
		return "-1"
	}
	else
	{
		return (nb1 + nb2 + nb3) / 3.0;
	}
	
<<<<<<< Updated upstream
=======

>>>>>>> Stashed changes
=======
    return (nb1 + nb2 + nb3) / 3.0;
	
>>>>>>> 1448729c4f0609816bed1c1210fb7819478fa6ca
    double x, y, z;

    cout << "Entrez trois nombres : ";
    cin >> x >> y >> z;

    cout << "La moyenne est : " << moyenne(x, y, z) << endl;

    return 0;
}

// Fonction qui applique une réduction et ajoute la TVA de 5,5 %
double reduction(int prix, int reduc, double tva) {
    double prixReduit = prix * (1 - reduc / 100.0);
    double prixFinal = prixReduit * (1 + tva / 100.0);
	return prixFinal;// modfication apporté par Eren

    
    // Appliquer la TVA de 5,5%
    double prixFinal = prixReduit * 1.055;
    
    return prixFinal;


    double prix, reductionPourc;

    cout << "Entrez le prix : ";
    cin >> prix;

    cout << "Entrez le pourcentage de réduction : ";
    cin >> reductionPourc;

    cout << "Le prix final après réduction et TVA est : " 
         << reduction(prix, reductionPourc) << " €" << endl;

    return 0;
}

// Fonction qui retourne le nombre médian parmi trois nombres
int nombreMedian(int a, int b, int c) {
    if ((a >= b && a <= c) || (a >= c && a <= b))
        return a;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        return b;
	else if ((b == a) || (b == c) || (a == c)){
		return "999";
	}
	
    else
        return c;

    int x, y, z;
    cout << "Entrez trois nombres : ";
    cin >> x >> y >> z;

    cout << "Le nombre médian est : " << nombreMedian(x, y, z) << endl;

    return 0;
=======
}
}