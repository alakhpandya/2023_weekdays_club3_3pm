#include<stdio.h>
#include<conio.h>

void main(){
	int i, j=1;
	clrscr();
//	for(i = 1; i <= 10; i++){
//	for(i = 11; i <= 20; i++){
//	for(i = -10; i > -20; i++){
//	for(i = -10; i > -20; i--){
//	for(i = 1; i <= 30; i = i + 3)
//	for(i = -20; i <= 20; i = i + 2){
	for(i = 1; i <= 1000; i = i * 2){
		printf("%d. Hello Royal!\n", j);
		j++;
	}
	printf("%d", i);
	getch();
}