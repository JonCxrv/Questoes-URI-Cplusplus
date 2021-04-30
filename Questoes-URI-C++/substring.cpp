#include <iostream>

using namespace std;

main(){
    string frase1;
    while(getline(cin, frase1))
    {        
    string frase2;
    getline(cin, frase2);
    int maior = 0;
    int count = 0;

    
    for (int i = 0; i < frase1.length(); i++)
    {
        for (int j = 0; j < frase2.length(); j++)
        {
            if (frase1[i] == frase2[j])
            {
                int x = i;
                for (int k  = j; k < frase2.length(); k++)
                {
                    if (frase1[x] != frase2[k])
                    {
                        break;
                    }
                    count++;
                    x++;
                }
                if (count > maior)
                {
                    maior = count;
                }
                count = 0;
            }

        }   
    }
    cout << maior << endl;
}
}