#include <stdio.h>

int g[9][3] = {
	{0,0,0},
	{2,3,8},
	{1,7,0},
	{1,4,5},
	{3,5,0},
	{3,4,0},
	{7,0,0},
	{2,6,8},
	{1,7,0}
};

bool v[9] = { false, false, false, false, false, false, false, false, false};

void dfs(int g[9][3], int p, bool v[]) {
	v[p] = true;
	
	printf("%d ", p);
	
	for(int i = p; i < 9; i++) {
		for(int j = 0; j < 3; j++) {
			
			if( g[i][j] == 0 )
				return;
				
			if( !(v[g[i][j]]) )
				dfs(g, g[i][j], v);
		}
	}
}

int main(){
	
	dfs(g, 1, v);
	
	return 0;
}
