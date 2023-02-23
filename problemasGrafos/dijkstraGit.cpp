#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define nfori(i,ii,n) for(int i=n;i>=ii;i--)
#define dfori(i,ii,s,n) for(int i=ii;i<n;i+=s)
#define pb push_back
#define INF 2e18
#define maxI INT_MAX   
#define F first 
#define S second 
#define ll long long int 
#define lnsi unsigned long long int
#define vll vector<long long int>
#define vi vector<int>
#define oo 0x3f3f3f3f //el valor infinito
#define MAXV 100 //Maxima cant de vertices.
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
const int M = 2e9 + 7;
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

struct Edge{ //arista
    int node; //nodo destino
    int cost; //costo de la arista
    Edge(int _node,int _cost) : node(_node),cost(_cost){} //Constructor parametrizado
    Edge() : node(-1),cost(-1) {}
};

struct Graph{
    vector<Edge> G[MAXV]; //lista de adyacecias
    int V; //cantidad de vertices 
    int E; //cantidad de aristas
};

struct State{
    int node; //nodo actual 
    int cost; //costo del camino
    State(int _node,int _cost) : node(_node),cost(_cost){} // constructor parametrizado.
    bool operator<(const State &b) const //sobrecarga de operador de prioridad 
    {
        return cost > b.cost;
    }
};

int algoritmo(const int begin, const int end, const Graph graph){
    priority_queue<State> pq;
    vi Dist(graph.V,oo); //la distancia de todos los vertice es infinita
    vector<bool> mark(graph.V,false); //Verifica si se encontro el menor costo para el nodo
    Dist[begin]=0;
    pq.push(State(begin,0)); //agregamos el primer elemento (el vertice inicial)
    while(!pq.empty()){
        State st=pq.top();
        pq.pop(); //se desecola el ultimo minimo
        if(st.node==end){
            return st.cost; //devolvemos el valor del camino minimo al destino
        }else{}
        int T=(int)graph.G[st.node].size();
        fori(i,0,T){ //se recorren las adyacencias de la a 
            //si no ha sido procesado el vertice "vi" y la distancia hacia "vi" es menor a la distancia
            // en dist entonces hemos encontrado un camino mas corto a "vi".
            if(!mark[graph.G[st.node][i].node] && ((Dist[st.node]+graph.G[st.node][i].cost)< Dist[graph.G[st.node][i].node])){
                Dist[graph.G[st.node][i].node]=st.cost + graph.G[st.node][i].cost;
                pq.push(State(graph.G[st.node][i].node, st.cost + graph.G[st.node][i].cost));
            }
        }
    }
    return -1;
}
struct Programa{
    int V,E;
    int comienzo,fin;
    void definirGrafo(Graph& graph){
        cout<<"ingrese Cantidad de vertices: "<<endl;
        cin>>V;
        cout<<"ingrese cantidad de aristas: "<<endl;
        cin>>E;
        graph.V=V;
        graph.E=E;
    }
    void cargarGrafo(Graph & graph){
        fori(i,0,E){
            int Origen,Destino,Peso;
            //cout<<"Ingrese Origen"<<endl;
            cin>>Origen;
            //cout<<"Ingrese Destino"<<endl;
            cin>>Destino;
            //cout<<"Ingrese Peso"<<endl;
            cin>>Peso;
            graph.G[Origen].pb(Edge(Destino,Peso)); //pusheas cuantos nodos se necesitan a 
            graph.G[Destino].pb(Edge(Origen,Peso)); //
        }
    }
    void Dijkstra(Graph graph){
        
        cout<<"Ingrese Vertice Inicial: "<<endl;
        cin>>comienzo;
        cout<<"Ingrese Vertice Final"<<endl;
        cin>>fin;
        int n = algoritmo(comienzo,fin, graph);
        cout<<"Longitud del camino mas Corto: "<<n<<endl;
    }
};
int main(){
    fast;
    bool out=false;
    char salir;
    // tamaño 6 9 
    /* 
    0 1 1
    0 4 7
    0 5 5
    1 2 1
    1 3 5 
    1 4 6 
    2 3 1 
    3 4 9 
    4 5 3
     */
    Programa programa; 
    Graph graph; 
    cout<<"Algoritmo de dijkstra en C++"<<endl;
    while(!out){
        programa.definirGrafo(graph);
        programa.cargarGrafo(graph);
        programa.Dijkstra(graph);
        cout<<"salir? (S/N)"<<endl;
        cin>>salir;
        if(salir=='S' || salir=='s'){
            out=true;
        }else{}
    }
    return 0;
}