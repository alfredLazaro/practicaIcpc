#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define rfori(i,n) for(int i=n;i>0;i--)
#define forn(i,ii,s,n) for(int i=ii;i<n;i=i+s)
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define F first 
#define pb push_back
typedef long long int ll;
#define MAX 100 //maximo nro de filas y columnas
char ady[MAX][MAX]={{'.','.','.','.','#','#'},
                    {'#','#','#','.','#','#'},
                    {'#','.','.','.','.','#'},
                    {'#','.','#','.','#','#'},
                    {'#','.','.','S','.','#'},
                    {'#','#','#','#','#','#'},};
bool visitado[MAX][MAX];

struct Estado{
        int x;
        int y;
        int d;
        Estado(int x1,int y1,int d1) : x(x1),y(y1), d(d1){}
};
queue<Estado> q;
int bfs(int x,int y, int h, int w);
int main(){
    fast;
    memset(visitado,false,sizeof(visitado));
    Estado inicial(0,0,0); //coordenada (x,y,distancia),
    q.push(inicial);
    int res=bfs(0,0,6,6);
    cout<<res<<"\n";
    return 0;
}
int bfs(int x,int y, int h,int w){
    int dx[4]={0,0,1,-1}; //pocisiones x 
    int dy[4]={1,-1,0,0}; //pos en y 
    while(!q.empty()){
        Estado actual= q.front();
        q.pop();
        if(ady[actual.x][actual.y]=='S'){
            return actual.d;
        }
        visitado[actual.x][actual.y]=true;
        fori(i,0,4){
            int nx=dx[i]+actual.x;
            int ny=dy[i]+actual.y;
            if(nx>=0&&ny>=0&&nx<MAX&&ny<MAX&&ady[nx][ny]!='#'&& !visitado[nx][ny]){
                Estado adyacente(nx,ny,actual.d+1);
                //switch()
                if(dx[i]==0&&dy[i]==1){
                    cout<<"->"<<" ";
                    cout<<"("<<nx<<","<<ny<<")"<<" ";
                }else if(dx[i]==0&&dy[i]==-1){
                    cout<<"<-"<<" ";
                    cout<<"("<<nx<<","<<ny<<")"<<" ";
                }else if(dx[i]==1&&dy[i]==0){
                    cout<<"|v"<<" ";
                    cout<<"("<<nx<<","<<ny<<")"<<" ";
                }else if(dx[i]==-1&&dy[i]==0){
                    cout<<"arriba"<<" ";
                    cout<<"("<<nx<<","<<ny<<")"<<" ";
                }
                q.push(adyacente);
            }
        }
        cout<<endl;
    }

}