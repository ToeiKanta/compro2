#include <stdio.h>
/*
            n=17
      12345678901234567
1     X-------+-------X
2     |\      |      /|
3     | \     |     / |
4     |  \    |    /  |
5     |   \   |   /   |
6     |    \  |  /    |
7     |     \ | /     |
8     |      \|/      |
9     +-------+-------+
10    |      /|\      |
11    |     / | \     |
12    |    /  |  \    |
13    |   /   |   \   |
14    |  /    |    \  |
15    | /     |     \ |
16    |/      |      \|
17    X-------+-------X

*/
int main(){
	int n=17,count=0;
	printf("%-6c",' ');
	for(int i = 1; count < n ; i++){
		count++;
		if(i==10) 
			i=0;
		printf("%d",i);
	}
	printf("\n");
	for(int r = 1 ; r <= n ; r++){
		printf("%-5d ",r);
		for(int c = 1 ; c <= n ; c++){
			if(r == 1 || r == n){
				if(c==1 || c==n) printf("X");
				else
					if(c == n/2+1) printf("+");
				else 
					printf("-");
			}else
				if(r == n/2+1){
					if(c == 1 || c == n || c == r) 
						printf("+");
					else
						printf("-");
			}else
				if(c == 1 || c == n || c == n/2+1) 
					printf("|");
			else
				if((c <= n/2+1 && r <= n/2+1 && c == r) || (c >= n/2+1 && r >= n/2+1 && r == c)) 
					printf("\\"); 
			else
				if((c <= n/2+1 && r >= n/2+1 && c == n-r+1) || (c >= n/2+1 && r <= n/2+1 && c == n-r+1))
					printf("/");
			else
				printf(" ");
		}
		printf("\n");
	}
}
