#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define BUFFSIZE 100
 
using namespace std;
 
int isKeyword(char buffer[]){
	char keywords[32][10] = {"auto","break","case","char","const","continue","default",
							"do","double","else","enum","extern","float","for","goto",
							"if","int","long","register","return","short","signed",
							"sizeof","static","struct","switch","typedef","union",
							"unsigned","void","volatile","while"};
	int i, flag = 0;
	
	for(i = 0; i < 32; ++i){
		if(strcmp(keywords[i], buffer) == 0){
			flag = 1;
			break;
		}
	}
	
	return flag;
}

int isFunction(char buffer[]){
    char functions[15][15] = {"printf", "scanf"};
    int i, flag = 0;
	
	for(i = 0; i < 32; ++i){
		if(strcmp(functions[i], buffer) == 0){
			flag = 1;
			break;
		}
	}
	
	return flag;
}
 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("DAALAB BinarySearch.cpp", "r", stdin);
    freopen("analyse.txt", "w", stdout);
    #endif
	char ch, buffer[BUFFSIZE], operators[] = "+-*/%=";
    bool textend = false;
	ifstream fin("program.txt");
	int i,j=0;
	
	if(!fin.is_open()){
		cout<<"error while opening the file\n";
		exit(0);
	}
	
	while(!fin.eof()){
   		ch = fin.get();
   		
		for(i = 0; i < 6; ++i){
   			if(ch == operators[i])
   				cout<<"operator ";
   		}  	

        if(ch == '('){
            cout << "oparan ";
            continue;
        }	
        else if(ch == ')'){
            cout << "cparan ";
            continue;
        }
   		else if(isalnum(ch)){
   			buffer[j++] = ch;
   		}
        else if(ch == ';'){
            cout << "\n";
        }
        else if(ch == '"' && !textend){
            do{
                ch = fin.get();
            }while(ch != '"');
            cout << "text ";
            continue;
        }
   		else if((ch == ' ' || ch == '\n') && (j != 0)){
   				buffer[j] = '\0';
   				j = 0;
   				   				
   				if(isKeyword(buffer) == 1)
   					cout<<"keyword ";
                else if(isFunction(buffer) == 1)
                    cout<<"function ";
   				else
   					cout<<"indentifier ";
   		}
   		
	}
	
	fin.close();
	
	return 0;
}
