#include <stdio.h>
/*
ECHELON FORM OF A MATRIX
*/
int main(){
	
	int matris[3][4];
	int i,j,x,y;
	float ilkkatsayi,ikincikatsayi,ucuncukatsayi;
	for(i = 0; i<3; i++){
		for (j=0;j<4;j++){
			scanf("%d", &matris[i][j]);
		}
	}
	
	for(i = 0; i<3; i++){
			
		for (j=0;j<4;j++){
			
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	
	ilkkatsayi = (matris[1][0] / matris[0][0]);
	ikincikatsayi = matris[2][0] / matris[0][0];
	for(x=0;x<4;x++){
		matris[0][x] = ilkkatsayi*matris[0][x];
		matris[1][x] = matris[1][x] - matris[0][x];
		matris[0][x] = matris[0][x] / ilkkatsayi;
		
		matris[0][x] = ikincikatsayi*matris[0][x];
		matris[2][x] = matris[2][x] - matris[0][x];
		matris[0][x] = matris[0][x] / ikincikatsayi;
	}
	

	ucuncukatsayi = matris[2][1] / matris[1][1];
	for(y=0;y<4;y++){
		matris[1][y] = ucuncukatsayi*matris[1][y];
		matris[2][y] = matris[2][y] - matris[1][y];
		matris[1][y] = matris[1][y] / ucuncukatsayi;
	}
	for(i = 0; i<3; i++){
			
		for (j=0;j<4;j++){
			
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	
	
}
