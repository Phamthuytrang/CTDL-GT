#include<bits/stdc++.h>
using namespace std;
//DFS
// input
//9 9
//1 2
//1 3 
//1 5
//2 4
//3 6
//3 7
//3 9
//5 8
//8 9

int n,m;// nhap vao so luong dinh va canh
vector<int> a[1001];//luu danh sach ke
bool v[1001];// kiem tra dinh da di qua chua
void in(){// chuyen tu danh sach canh sang danh sach ke
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x,y;
		cin >> x >> y;
		a[x].push_back(y);
		//a[y].push_back(x);
		
	}
	memset(v,false,sizeof(v));// cho mang v co gtri false
}

void dfs(int u){
	cout << u <<" ";
	// danh dau la u da duoc di qua
	v[u] = true;
	for(int n:a[u]){// duyet dah sach ke cua dinh u
		if(!v[n]){// neu dinh v chua duoc di qua
			dfs(n);
		}
	}
}

int main(){
	in();
	dfs(1);
}
