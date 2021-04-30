#include <iostream>									
#include <stdlib.h>								

using namespace std;


int main(int argc, char** argv) {
	
	char notas[100];
	int n[100];
	int k = 0;
	float media = 0;
	
	cin >> notas;
	
	for (int i = 0; i < 100; i++){

		if (notas[i] == 0 || notas[i] == '\0'){
			break;
		}else{
			//(notas[i] >= '48' && notas[i] <= '57'), pq '0' -> 48 e '9' -> 57
			if (notas[i] >= '0' && notas[i] <= '9'){
				if (notas[i+1] == '0'){
					n[k] = 10;
					i++;
				}else{
					n[k] = (int)notas[i] - 48;
				}
			}else{
				break;
			}
		}
			k++;
	}

for (int i = 0; i < k; i++){

	media += n[i]/(float)k;

}
	printf("%.2f\n", media);
	
	
	return 0;
}