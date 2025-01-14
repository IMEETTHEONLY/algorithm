#include <iostream>
using namespace std;
#define int long long
#define MAX 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Vnode{
	int data;  //Vnode�洢��ֵ 
	Vnode * next; //ָ�����һ��Ԫ�� 
	
};

void init(Vnode* array[]){
	for(int i=0;i<MAX;i++){
		array[i]=NULL;
	}
}


void addEdge(int src,int dest,Vnode* array[]){

		//����һ���µ�node
		Vnode* new_node=new Vnode();
		new_node->data=dest;
		new_node->next=array[src];
		array[src]=new_node; 
	
}

//�����ڽ�����ʵ�ֺ��ҳ�����ͼ�Ķ� 
signed main() {
	char arr[5]={'A','B','C','D','E'};
	
	//������������
	Vnode* adList[MAX];  
	 //��ʼ���ڽ����� 
	 init(adList);
	 
	 //��ʼ���ڽ�����
	 addEdge(0,1,adList);
	 addEdge(0,2,adList);
	 addEdge(0,3,adList);
	 addEdge(1,3,adList);
	 addEdge(1,4,adList);
	 addEdge(3,4,adList);
	  
	 
	 //��ӡ�ڽ�����
	 for(int i=0;i<MAX;i++){
		//��ȡ��ǰVnode
		Vnode* current = adList[i];
		cout<<arr[i]<<"�ĳ���Ϊ:";
		while(current!=NULL){
			cout<<arr[current->data]<<"->";
			current=current->next;
			
		}
		cout<<'\n';
		
	} 
	 
	
	return 0;
}
