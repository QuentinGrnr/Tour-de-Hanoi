class hanoi{
	stack<int> Tiges[3];	
	public :
	hanoi(int n);
	void mouvements(int n);
	void deplacer(int n, int gauche, int milieu, int droite);
	void etat();	
};