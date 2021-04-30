#include <iostream> 

using namespace std; 

  
int josephus(int n, int k) 
{ 
    if (n == 1) 
        return 1; 
    else
        return (josephus(n - 1, k) + k-1) % n + 1; 
} 

int main()
{ 
    int nc;
    cin >> nc;
    
    for (int i = 1; i <= nc; i++)
    {
        int n,k;
        cin >> n >> k;

        cout << "Case " << i << ": " << josephus(n,k) <<"\n";
    }
    return 0; 
} 