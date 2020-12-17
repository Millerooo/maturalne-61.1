#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    
    
	int liczba, r, ciag[0], tablica_ciagow[0];
	fstream wejscie;
	wejscie.open("ciagi.txt");
	
	while (!wejscie.eof())
	{
	for(int i=0; i<5; i++){
   wejscie >> ciag[i];
   if (i==1) 
     r = ciag[1]-ciag[0];
     cout<<"TAK";
  else 
   if (i>1) { //tu sprawdzic nową różnicę jeśli jest inna od r to koniec - odpowiedź -NIE)
	cout<<"NIE";
}
}
}
int znajdzMax(int ile )
{
    int maxi = tablica_ciagow[ 0 ];
    int tab;
    for( int i = 0; i < ile; i++ )
    {
        if( tablica[ i ] > maxi )
             maxi = tablica[ i ];
       
    }
    return maxi;
}
	wejscie.close();
	
	return 0;
}
