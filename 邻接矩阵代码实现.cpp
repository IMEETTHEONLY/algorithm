//#include <iostream>
//using namespace std;
//#define int long long
//#define MAX 6
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//struct Graph{
//	int vexs[MAX];
//	int arc[MAX][MAX];
//};
//
//void init(Graph g){
//	for(int i=0;i<MAX;i++){
//		for(int j=0;j<MAX;j++){
//			g.arc[i][j]=0;
//		}
//	}
//}
//
//
////找出有向图E点的度 
//signed main() {
//	Graph g={};
//	//为邻接矩阵赋初值
//	 init(g);
//	 
//	g.arc[0][1]=1;
//	g.arc[0][2]=1;
//	g.arc[0][3]=1;
//	g.arc[4][1]=1;
//	g.arc[2][4]=1;
//	g.arc[4][3]=1;
//	g.arc[3][5]=1;
//	
//	
//	//找入度  入度:就是列号为E的所有
//	int icount=0;
//	for(int i=0;i<MAX;i++){
//		if(g.arc[i][4]==1){
//			icount++;
//		}
//	} 
//	
//	cout<<"E点的入度是:"<<icount<<endl;
//	
//	//找出度
//		int ocount=0;
//	for(int i=0;i<MAX;i++){
//		if(g.arc[4][i]==1){
//			ocount++;
//		}
//	} 
//	
//	cout<<"E点的出度是:"<<ocount<<endl;
//	 
//	for(int i=0;i<MAX;i++){
//		for(int j=0;j<MAX;j++){
//			cout<<g.arc[i][j];
//		}
//		cout<<'\n';
//	}
//	
//	return 0;
//}
