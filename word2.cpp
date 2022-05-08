#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <windows.h>
#include <dos.h>
#include <dir.h>
 
using namespace std;

void delay(int delay) 
{ 
 int now=time(NULL); 
 int later=now+delay; 
 while(now<=later)now=time(NULL); 
} 

void info(){
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  Welcome to WORDLE\n\n";
	cout<<"\t\t\t\t\t      Guess the WORDLE in six tries."<<"\n"<<"\t\t\t\t      Each guess must be a valid five-letter word"<<"\n"<<"\t\t\t\t\t      Hit the enter button to submit."<<"\n";
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\tPress any key to continue";
	cin.get();
	system("cls");
	
	
	cout<<"\n\n\t\t\t\t\t\t    HOW TO PLAY?\n\n\n\tAfter each guess, the letters present in the word and the letters at the correct place will be displayed."<<"\n"<<"\n\tExample:"<<"\n\n\n";
	cout<<"\t\t\t\t\t\tEntered word: DANCE"<<"\n\n"<<"\t\t\t\t\t      Letters present in word:"<<"\n"<<"\t\t\t\t\t\t\tA  C";
	cout<<"\n\n"<<"\t\t\t\t\t      Letters on correct place:"<<"\n"<<"\t\t\t\t\t\t\t A";
	cout<<"\n\n";
	
	cout<<"\t\t\t\tThe letter A is in the word and in the correct spot.\n";
	cout<<"\t\t\t\t The letter C is in the word but in the wrong spot.\n";
	cout<<"\t\t\t\t The letter D,N,E are not in the word at any spot.";
	
	cout<<"\n\n\n\n\n\n\tPress any key to continue";
	cin.get();
	system("cls");

}
int main(){
	info();
	char ary[4][10] = { "AWAKE", "BROWN", "SPACE", "BLACK" };
	int row=(sizeof ary / sizeof ary[0])-1;
	int in;
	char s[5];
	//picks a word
	for(int k=0; k<rand(); k++){
	in=0+(rand()%(row-0+1));
	}
	char g[10];
	int i=0,k=0;
	//adds word to g
	int m=0;
	string s1="";
	do{
		for(int j=0;j<5;j++){
		g[j]=ary[in][j];
	}
	//cout<<g;	
	}while(i<0);

	char ab[5];
	
	 	
	 	
	do{
		
     cout<<"\n\n\tEnter word:\n\t";
     cin>>s;
     

	 int fl=0;
     for(int i=0;i<5;i++){
     	if(g[i]==s[i]){
     		
		 }
		 else{
		 	fl=1;
		 }
	 }
     if(fl==0){
     	cout<<"\tYOU WON! \n\tThe word was "<<g;
     	m=6;
	 }
	 
	 else{
     cout<<"\tLetters present in word:\n";
     
     
    for(int i=0;i<(sizeof(g)/sizeof(g[0]));i++){
    	fl=0;
     	for(int j=0;j<(sizeof(s)/sizeof(s[0]));j++){
     		
     	
       if(g[i]==s[j]){
       	
      for(int k=0;k<s1.length();k++){
       	if(s[j]==s1[k]){
       		fl=1;
	 }
     }
     if(fl==1){
      s1=s1+s[j];
	 }
		   
		    cout<<"\t";
		   	cout<<s[j]<<"  ";
       break;
       }
	 	}
		 	
 }
  	int f1=0;
          cout<<"\n\tLetters on correct place:\n";
     for(int i=0;i<5;i++){
     	
                if(g[i]==s[i]){
                	cout<<"\t";
                    cout<<g[i]<<"  ";
                }
                else{
                    fl++;
				}
	 }
	 
	 	cout<<"\n";
     ++m;
 }
     }while(m<6);


   return 0;
}
