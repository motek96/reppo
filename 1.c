    /* wy�wietla zapis liczby ca�kowitej w systemie o podstawie BASE, 
    przy czym BASE <= 16 */
     
    #include <stdio.h>
     
    #define BASE 3 /* podstawa systemu; NIE MO�E BY� WI�KSZA OD 16, ze wzgl�du na spos�b prezentacji wyniku! */
     
    void rozwin(int liczba)
    {
    	if (liczba > 0)
    	{
    		/* liczba = k*BASE + cyfra, gdzie
    			k = liczba/BASE 
    		(cz�� ca�kowita z dzielenia).
    		Zatem 
    			cyfra = liczba % BASE
    		wi�c w ten spos�b mo�emy 
    		znale�� ostatni� cyfr� rozwini�cia w bazie BASE.
    		Jednak przed wydrukowaniem tej cyfry, powinni�my znale�� 
    		rozwini�cie liczby "k"! */
     
    		/* Krok1: znajd� rozwini�cie liczby k */
    		rozwin(liczba/BASE); 
     
    		/* Krok 2: wypisz ostatni� cyfr� rozwini�cia */
    		printf("%X", liczba % BASE); /* wydruk cyfry w formacie hex */
    	}
    }
     
    int main(void)
    {
    	int liczba;
     
    	printf("Podaje liczb� do konwersji:\n");
    	scanf("%d", &liczba);
    	printf("(%d)_10 = (", liczba);
     
    	przypadg�nych */
    	if (liczba == 0)
    	{
    		/* rozwini�cie zera jest zawsze zerem */
    		printf("0\n");
    		return(0);
    	}
    	if (liczba < 0)
    	{
    		/* liczb� ujemn� musimy poprzedzi� znakiem "-" */
    		printf("-");
    		/* wykonujemy dalej rozwini�cie liczby dodatniej */
    		liczba = -liczba;
    	}
     
    	/* teraz na pewno "liczba" jest dodatnia, 
    	przyst�pujemy do rozwini�cia */
     
    	rozwin(liczba);
     
    	printf(")_%d\n", BASE);
     
    	return(0);
    }
     