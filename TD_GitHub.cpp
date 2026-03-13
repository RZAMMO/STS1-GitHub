//Fonctions réalisées par l'étudiant 1 :










//Fonctions réalisées par l'étudiant 2 :
//Fonction permettant de savoir si un nombre est pair ou non
bool estPair(int nb) {
    return nb % 2 == 0;
}

//Fonction qui fait la somme des sommes
int sommeNombre(int nb) {
    int somme = 0;
    for (int i = 1; i <= nb; i++) {
        somme += i;
    }
    return somme;
}

//Calcul du salaire net
float salaireNet(int salaire) {
    return salaire * 0.88f; // Exemple : 12% de charges
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










//Fonctions réalisées par l'étudiant 3 :
