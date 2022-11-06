#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int i,j,y,z;
	char x,k;


	char pu[10][10];
	pu[0][0]='0';
	pu[0][1]='1';
	pu[0][2]='2';
	pu[0][3]='3';
	pu[0][4]='4';
	pu[0][5]='5';
	pu[0][6]='6';
	pu[0][7]='7';
	pu[0][8]='8';
	pu[0][9]='9';
	pu[1][0]='1';
	pu[1][1]='i';
	pu[1][2]='h';
	pu[1][3]='g';
	pu[1][4]='d';
	pu[1][5]='*';
	pu[1][6]='c';
	pu[1][7]='*';
	pu[1][8]='b';
	pu[1][9]='f';
	pu[2][0]='2';
	pu[2][1]='*';
	pu[2][2]='*';
	pu[2][3]='*';
	pu[2][4]='b';
	pu[2][5]='*';
	pu[2][6]='f';
	pu[2][7]='i';
	pu[2][8]='*';
	pu[2][9]='*';
	pu[3][0]='3';
	pu[3][1]='*';
	pu[3][2]='*';
	pu[3][3]='e';
	pu[3][4]='*';
	pu[3][5]='*';
	pu[3][6]='*';
	pu[3][7]='*';
	pu[3][8]='*';
	pu[3][9]='a';
	pu[4][0]='4';
	pu[4][1]='f';
	pu[4][2]='*';
	pu[4][3]='a';
	pu[4][4]='i';
	pu[4][5]='b';
	pu[4][6]='h';
	pu[4][7]='c';
	pu[4][8]='e';
	pu[4][9]='g';
	pu[5][0]='5';
	pu[5][1]='*';
	pu[5][2]='i';
	pu[5][3]='c';
	pu[5][4]='a';
	pu[5][5]='f';
	pu[5][6]='e';
	pu[5][7]='h';
	pu[5][8]='d';
	pu[5][9]='b';
	pu[6][0]='6';
	pu[6][1]='h';
	pu[6][2]='*';
	pu[6][3]='*';
	pu[6][4]='c';
	pu[6][5]='d';
	pu[6][6]='g';
	pu[6][7]='f';
	pu[6][8]='a';
	pu[6][9]='i';
	pu[7][0]='7';
	pu[7][1]='e';
	pu[7][2]='*';
	pu[7][3]='*';
	pu[7][4]='g';
	pu[7][5]='i';
	pu[7][6]='b';
	pu[7][7]='a';
	pu[7][8]='f';
	pu[7][9]='*';
	pu[8][0]='8';
	pu[8][1]='*';
	pu[8][2]='*';
	pu[8][3]='i';
	pu[8][4]='f';
	pu[8][5]='c';
	pu[8][6]='d';
	pu[8][7]='*';
	pu[8][8]='*';
	pu[8][9]='*';
	pu[9][0]='9';
	pu[9][1]='d';
	pu[9][2]='g';
	pu[9][3]='*';
	pu[9][4]='e';
	pu[9][5]='h';
	pu[9][6]='a';
	pu[9][7]='*';
	pu[9][8]='i';
	pu[9][9]='c';

	printf("RULES:\n");
    printf("1. The objective of Sudoku is to fill a 9x9 grid made of small squares so that each row, each column, and each full 3x3 squares use the characters a-i.\n");
    printf("2. While solving the sudoku puzzle you can only use each character one time in the square, column, and row.\n");
    printf("3. You can only insert numbers in the squares that have value 0.\n\n");
    printf("GOOD LUCK !!\n");
    printf("\n");

	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%c \t",pu[i][j]);
			if(j==3||j==6)
			printf("|\t");

		}
		printf("\n\n");

	}

hehe:printf("Enter the co-ordinate you want to enter the number:");
	scanf("%d %d",&y,&z);
	fflush(stdin);
	if((y==1 && z==1) || (y==1 && z==2) ||(y==1 && z==3) || (y==1 && z==4) ||  (y==1 && z==6) || (y==1 && z==8) ||  (y==1 && z==9) ||
	  (y==2 && z==4) ||  (y==2 && z==6) ||  (y==2 && z==7) || (y==3 && z==9) || (y==3 && z==9) || (y==4 && z==6) || (y==4 && z==9) ||
	   (y==4 && z==3) || (y==5 && z==2) ||  (y==5 && z==3) ||  (y==5 && z==5) ||  (y==5 && z==7) || (y==5 && z==8) ||
	   (y==6 && z==1) ||(y==6 && z==4) ||(y==6 && z==6) || (y==6 && z==7) ||(y==7 && z==1) ||(y==7 && z==6) ||(y==7 && z==7) ||(y==7 && z==8) ||
	   (y==8 && z==3) || (y==8 && z==4) ||(y==8 && z==6) ||(y==9 && z==1) || (y==9 && z==2) ||(y==9 && z==4) ||(y==9 && z==9) ||(y==9 && z==8) )
	{
		printf("The entered co-ordinate is error. \n");
		goto hehe;
	}
	else{

label:printf("If you want to enter in same co-ordinate then press 'q' or if you want to enter in diffrent co=ordinate then press 'r' \n");
thikxa:scanf("%c",&k);
	if(k=='q'){
		goto kxa;
	}
	else if(k=='r'){
		goto hehe;
	}
	else{
		fflush(stdin);
		printf("Press either 'q' or 'r'. \n");
		goto thikxa;
	}
kxa:fflush(stdin);
	printf("Enter the alphabet:");
	scanf("%c", &x);
	 //for check column
	for(i=1;i<10;i++){
			if( z!=i){
				if(x!=pu[y][i]){
					continue;
				}
				else{
				printf("error. \n");
				goto label;
				}
				continue;
				}
			}


		printf("\n");
	//for chek row
     for(i=1;i<10;i++){
     	if(y!=i){
     		if(x!=pu[i][z]){
     			continue;
			 }
			 else{
			 	printf("Error. \n");
			 	goto label;
			 }
		 }
		 continue;
	 }
	//for grid check

	//1st grid
	if(y>=1 && y<=3 && z>=1 && z<=3){
		for(i=1;i<4;i++){
			for(j=1;j<4;j++){
				if(y==i && z==j){
					continue;
				}
				 else
				 {
				 	if(pu[y][z]==pu[i][j])
					 {

					printf("Error alphabet is entered. \n");
					printf("Enter valid alphabet. \n");
					goto label;
					}
					else
					{
						pu[y][z]=x;
					goto goo;
					}
				}
			}
		}
	}


	//2nd grid
	if(y>=1 && y<=3 && z>=4 && z<=6){
		for(i=1;i<4;i++){
			for(j=4;j<7;j++){
				if(y==i && z==j){
					continue;
				}
				if(pu[y][z]==pu[i][j]){

					printf("Error alphabet is entered. \n");
					printf("Enter valid alphabet. \n");
					fflush(stdin);
					goto label;
				}
				else{
					pu[y][z]=x;
					goto goo;
				}
			}
		}
	}

	//3rd grid
	if(y>=1 && y<=3 && z>=7 && z<=9){
		for(i=1;i<4;i++){
			for(j=7;j<10;j++){
				if(y==i && z==j){
					continue;
				}
				if(pu[y][z]==pu[i][j]){

					printf("Error alphabet is entered. \n");
					printf("Enter valid alphabet. \n");
					goto label;
				}
				else{
					pu[y][z]=x;
					goto goo;
				}
			}
		}
	}

	//4th grid
	if(y>=4 && y<=6 && z>=1 && z<=3){
		for(i=4;i<7;i++){
			for(j=1;j<4;j++){
				if(y==i && z==j){
					continue;
				}
				if(pu[y][z]==pu[i][j]){

					printf("Error alphabet is entered. \n");
					printf("Enter valid alphabet. \n");
					goto label;
				}
				else{
					pu[y][z]=x;
					goto goo;
				}
			}
		}
	}
		//5th grid
		if(y>3 && y<7 && z>3 && z<7){
		for(i=4;i<7;i++){
			for(j=4;j<7;j++){
				if(y==i && z==j){
					continue;
				}

				if(pu[y][z]==pu[i][j]){
					printf("Error alphabet is entered. \n");
					printf("Enter valid alphabet. \n");

					goto label;
				}
				else{
					pu[y][z]=x;
					goto goo;
				}
			}
		}
	}
	//6th grid
		if(y>=4 && y<=6 && z>=7 && z<=9){
		for(i=4;i<7;i++){
			for(j=7;j<10;j++){
				if(y==i && z==j){
					continue;
				}
				if(pu[y][z]==pu[i][j]){

					printf("Error alphabet is entered. \n");
					printf("Enter valid alphabet. \n");
					goto label;
				}
				else{
					pu[y][z]=x;
					goto goo;
				}
			}
		}
	}
	//7th grid
		if(y>=7 && y<=9 && z>=1 && z<=3){
		for(i=7;i<10;i++){
			for(j=1;j<4;j++){
				if(y==i && z==j){
					continue;
				}
				if(pu[y][z]==pu[i][j]){

					printf("Error alphabet is entered. \n");
					printf("Enter valid alphabet. \n");
					goto label;
				}
				else{
					pu[y][z]=x;
					goto goo;
				}
			}
		}
	}
	//8th grid
		if(y>=7 && y<=9 && z>=4 && z<=6){
		for(i=7;i<10;i++){
			for(j=4;j<7;j++){
				if(y==i && z==j){
					continue;
				}
				if(pu[y][z]==pu[i][j]){

					printf("Error alphabet is entered. \n");
					printf("Enter valid alphabet. \n");
					goto label;
				}
				else{
					pu[y][z]=x;
					goto goo;
				}
			}
		}
	}
		//9th grid
			if(y>=7 && y<=9 && z>=7 && z<=9){
		for(i=7;i<10;i++){
			for(j=7;j<10;j++){
				if(y==i && z==j){
					continue;
				}
				if(pu[y][z]==pu[i][j]){

					printf("Error alphabet is entered. \n");
					printf("Enter valid alphabet. \n");
					goto label;
				}
				else{
					pu[y][z]=x;
					goto goo;
				}
			}
		}
	}



goo:for(i=0;i<10;i++){

		for(j=0;j<10;j++){
			printf("%c \t",pu[i][j]);
			if(j==3||j==6)
			printf("|\t");

		}
		printf("\n");

}
for(i=1;i<10;i++){
    for(j=1;j<10;j++){
        if((pu[i][j]=='a') || (pu[i][j]=='b') || (pu[i][j]=='c') ||  (pu[i][j]=='d') || (pu[i][j]=='e') || (pu[i][j]=='f') || (pu[i][j]=='g')|| (pu[i][j]=='h') || (pu[i][j]=='i')  ){
                fflush(stdin);
            goto hehe;
        }
        else{
            goto aau;
        }
    }
}
aau:printf("Congratulation you won");
}

	getch();
}
