#include <iostream>
using namespace std;
#define int long long
#define MAX 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Vnode{
	int data;  //Vnode存储的值 
	Vnode * next; //指向的下一个元素 
	
};

void init(Vnode* array[]){
	for(int i=0;i<MAX;i++){
		array[i]=NULL;
	}
}


void addEdge(int src,int dest,Vnode* array[]){

		//创建一个新的node
		Vnode* new_node=new Vnode();
		new_node->data=dest;
		new_node->next=array[src];
		array[src]=new_node; 
	
}

//尝试邻接链表实现和找出无向图的度 
signed main() {
	char arr[5]={'A','B','C','D','E'};
	
	//构造链接链表
	Vnode* adList[MAX];  
	 //初始化邻接链表 
	 init(adList);
	 
	 //初始化邻接链表
	 addEdge(0,1,adList);
	 addEdge(0,2,adList);
	 addEdge(0,3,adList);
	 addEdge(1,3,adList);
	 addEdge(1,4,adList);
	 addEdge(3,4,adList);
	  
	 
	 //打印邻接链表
	 for(int i=0;i<MAX;i++){
		//获取当前Vnode
		Vnode* current = adList[i];
		cout<<arr[i]<<"的出度为:";
		while(current!=NULL){
			cout<<arr[current->data]<<"->";
			current=current->next;
			
		}
		cout<<'\n';
		
	} 
	 
	
	return 0;
}
