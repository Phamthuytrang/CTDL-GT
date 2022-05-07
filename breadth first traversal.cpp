#include<bits/stdc++.h>
using namespace std;
//BFS
//input
//10 11
//1 2
//1 3
//1 5
//1 10
//2 4
//3 6
//3 7
//3 9
//6 7
//5 8
//8 9

int m,n;// nhap vao so dinh va canh
vector<int>a[1001]; // luu danh sach ke
bool v[1001];// check xem cac dinh da dc di qua chua
void in(){// chuyen tu danh sach canh sang danh sach ke
	cin >> n >> m;
	for ( int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	memset(v,false,sizeof(v));// cho mang v co gtri false
}

void bfs(int u){
	// buoc khoi tao
	queue<int>q;//khoi tao hang doi
	q.push(u);// push dinh u vao hang doi
	v[u] = true;
	// buoc lap
	while(!q.empty()){
		int n = q.front();// lay dinh o dau hang doi
		q.pop(); // xoa di
		cout << n <<" ";
		for(int x : a[n]){// duyet cac dinh ke cua n chua duoc di qua va day vao hang doi
			if(!v[x]){// neu x chua dc di qua
				q.push(x);// day vao trong hang doi
				v[x]=true;// danh dau la da duoc di qua
			}		
		}
	}	
}

int main(){
	in();
	bfs(1);
	return 0;
}
