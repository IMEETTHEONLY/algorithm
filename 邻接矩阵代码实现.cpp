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
////�ҳ�����ͼE��Ķ� 
//signed main() {
//	Graph g={};
//	//Ϊ�ڽӾ��󸳳�ֵ
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
//	//�����  ���:�����к�ΪE������
//	int icount=0;
//	for(int i=0;i<MAX;i++){
//		if(g.arc[i][4]==1){
//			icount++;
//		}
//	} 
//	
//	cout<<"E��������:"<<icount<<endl;
//	
//	//�ҳ���
//		int ocount=0;
//	for(int i=0;i<MAX;i++){
//		if(g.arc[4][i]==1){
//			ocount++;
//		}
//	} 
//	
//	cout<<"E��ĳ�����:"<<ocount<<endl;
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
