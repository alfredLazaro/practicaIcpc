#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for (int i = ii; i <n; i++)
#define nfori(i,ii,n) for (int i =n;i>ii; i--)
#define dfori(i,ii,s,n) for (int i =ii;i<n;i+=s)
#define pb push_back
#define INF 2e18
#define fast ios_base:: sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define llnsi unsigned long long int 
#define endl '\n'             
#define vertices 500
#define nodos 300      
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
struct orden{
    int grado; //numero de conexiones
    int color; //color de vertice
    int n;  //numero de vertice
};
typedef struct orden ver;
int B[nodos]; //,
//ordenamos mediante ordenacion por inserccion
void OrdenarMayaMen(int n,ver v[]){
    int i,k;
    int aux,aux1;
    fori(i,1,n){
        aux=v[i].grado;
        aux1=B[i]; //guarda el nodo actual
        k=i-1; //
        while(k>=0 && aux>v[k].grado){
            v[k+1].grado=v[k].grado; //el menor se pasa a la pos act
            B[k+1]=B[k]; //el nodo anterior reemplaza a nodo actual
            k=k-1;
        }
        v[k+1].grado=aux; //se pone el grado actual
        B[k+1]=aux1; //se pone el nodo actual
    }
}
void IngresarMatriz(int ad[][vertices],int nds,int arst){
    //guarda la matriz de adyacencias
    int i,j,nodoi,nodof;
    fori(i,0,nds){
        fori(j,0,nds){
            ad[i][j]=0;
        }
    }
    //llenamos la matriz 
    fori(i,0,arst){
        cin>>nodoi;
        cout<<"\tN. termino:";
        cin>>nodof;
        ad[nodoi-1][nodof-1]=1;
        ad[nodof-1][nodoi-1]=1;
    }
    //matriz de Adyacencia
    /* fori(i,0,nds){
        fori(j,0,nds){
            ad[i][j]=ad[i][j];
        }
    }
    */
}
void Greedy(int ad[][vertices],int nds){
    ver v[nds]; //arreglo con tripla {grado,color,nodo}
    int i,j,aux,zz,max=1;
    //Etapa de Coloracion
    fori(i,0,nds){
        v[i].color=1;
        zz=0;
        aux=1;
        while(aux==1){
            fori(j,0,nds){
                if(ad[i][j]==1){
                    if(v[i].color==v[j].color){ //al principio {0,0}
                        zz=1; //
                    }else{}
                }else{}
            }
        }
        if(zz==1){
            aux=1;
            zz=0;
            v[i].color++;
        }else{
            aux=0;
            if(v[i].color>max){
                max=v[i].color;
            }else{}
        }
    }
    cout<<"\n\tAlgoritmo voraz\n"<<"\tmaxcolor="<<max<<endl;
    //imprimimos el conjunto de vertices de cada color 
    fori(i,0,max){
        printf("\t %c={",'a'+i);
        fori(j,0,nds){
            if(v[j].color==i+1){
                cout<<""<<j+1;
            }else{}
        }
        cout<<"}\n";
    }
}

void WelshPowell(int ad[][vertices],int nds){
    ver v[nds];
}
int main(){
    fast;

    return 0;
}