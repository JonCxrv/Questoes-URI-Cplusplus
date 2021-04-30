// foi usado scanf e printf para nao obter "runtimeerror".
#include <iostream>

using namespace std;
 

int main() 
{
	int t,pa,pb;
	float g1, g2;
   	int i = 0;

    scanf("%d",&t);
	
	for (int j = 0; j < t; j++){
		 
		int anos = 0;
		scanf("%d%d%f%f", &pa, &pb, &g1, &g2); 		//Pode ser substituido por --> cin >> pa >> pb >> g1 >> g2;

			while (i <= 100)
		{
			pa += int (pa * g1 / 100);
			pb += int (pb * g2 / 100);
			anos ++;
			if (pa > pb && anos <= 100)
			{
				printf("%d anos.\n",anos);	//Pode ser substituido por -->cout << anos << " anos.\n";
				break;
			} else if ( anos > 100)
			{
				printf("Mais de 1 seculo.\n");	//Pode ser substituido por -->cout << "Mais de 1 seculo.\n";
				break;
			}	
		}
	}
	return 0;
}