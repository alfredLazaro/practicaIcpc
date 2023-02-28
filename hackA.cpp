#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define nfori(i,ii,n) for(int i=n;i>=ii;i--)
#define dfori(i,ii,s,n) for(int i=ii;i<n;i+=s)
#define INF 2e18
#define pb push_back
#define parI pair<int,int>
#define psti pair<string,int>
#define fast ios_base:: sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int
#define lnsi unsigned long long int
#define vi vector<int>
int main(){
	int num,tam,act,cont,ant;
	scanf("%d", &num);              	                  // Reading input from STDIN
	while(num--){
		scanf("%d",&tam);
		cont=0;
		vi cantid(tam);
		int arr[tam][tam];
		ant=0;
		fori(i,0,tam){
			fori(j,0,tam){
				scanf("%d",&act);
                arr[i][j]=act;
				/* if(ant>act){
					cont+=1;
				}else{
				} */
			}
		}
		int conta=0,col=0,fil=0;
		int tam2=tam*tam,tamv=tam;
		while(conta<tam2){
			ant=arr[fil][col];
			fori(i,fil,tam){
				fori(j,col,tam){
					act=arr[i][j];
					if(ant>act){
						cont+=1;
						
						cout<<ant<<"   "<<act;
					}else{}
				}
			}
			col+=1;
			conta+=1;
			if(conta==tamv){
				//conta=0;
				tamv*=2;
				fil+=1; //se empieza a recorrer de i+1
				col=0;
			}else{}
		}
		//sort(cantid.begin(),cantid.end());
		printf("%d \n",cont);
	}
	//printf("Input number is %d.\n", num);       // Writing output to STDOUT
}
