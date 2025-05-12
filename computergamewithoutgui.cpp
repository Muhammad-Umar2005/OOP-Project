
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h> // for Sleep, system
using namespace std;


class game1{
   
    int check1=1;
    int check2=1;
    char board[5][5];
    char Gboard[3][3];
    public:
    
    game1(){
        cout<<"Game Initiated......"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
            
            Gboard[i][j]='a';
        }
        }
    }
    
    void fill(){
        board[0][1]='|';
        board[0][3]='|';
        board[1][0]='_';
        board[1][1]='_';
        board[1][2]='_';
        board[1][3]='_';
        board[1][4]='_';
        board[2][1]='|';
        board[2][3]='|';
        board[3][0]='_';
        board[3][1]='_';
        board[3][2]='_';
        board[3][3]='_';
        board[3][4]='_';
        board[4][1]='|';
        board[4][3]='|';
for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        if(board[i][j]=='|' || board[i][j]=='_') continue;
        else board[i][j]='a';
            
    }
  }
}

void display(){
    cout<<"\n\n";
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        /*if(board[i][j]=='a') continue;
        */    cout<<board[i][j];
        }
        cout<<endl;
    }
    cout<<"\n\n";
}
// input deatils
void input(){
    
    cout<<"Player 1'O' and player 2 'X'..."<<endl;
 
for(int i=0;i<5;i++){
    int a,b;    
    cout<<"Player 1 input your co-ordinates : "<<endl;
 
 while(1){
    cout<<"which row : ";
    cin>>a;
 if(a>=0&&a<=2) break;
 else cout<<"Invalid input - Re-enter row - ";
 }
 
 while(1){
    cout<<"which column : ";
    cin>>b;
 if(b>=0&&b<=2) break;
 else cout<<"Invalid input - Re-enter column - ";
    }
    
    if(Gboard[a][b]!='O'&&Gboard[a][b]!='X'){
        Gboard[a][b]='O';
        if(a==0&&b==0) board[0][0]='O';
        else if(a==0&&b==1) board[0][2]='O';
        else if(a==0&&b==2) board[0][4]='O';
        else if(a==1&&b==0) board[2][0]='O';
        else if(a==1&&b==1) board[2][2]='O';
        else if(a==1&&b==2) board[2][4]='O';
        else if(a==2&&b==0) board[4][0]='O';
        else if(a==2&&b==1) board[4][2]='O';
        else if(a==2&&b==2) board[4][4]='O';
    }
    
    else{
        if(Gboard[a][b]=='O') cout<<"Player 1 has already placed O in that spot.\nPlease pick a different position.\n";
        else if(Gboard[a][b]=='X') cout<<"Player 2 has already placed X in that spot.\nPlease pick a different position.\n";
        while(1){
            cout<<"One spot can't have 2 placements.\n Re-enter co-ordinates\n";
            
cout<<"Player 1 input your co-ordinates : "<<endl;
 
while(1){
    cout<<"which row : ";
    cin>>a;
     if(a>=0&&a<=2) break;
 else cout<<"Invalid input - Re-enter row : ";
     
    }
 
while(1){
    cout<<"which column : ";
    cin>>b;
     if(b>=0&&b<=2) break;
      else cout<<"Invalid input - Re-enter column : ";

    }
           if(Gboard[a][b]=='a') {
               Gboard[a][b]='O';
           break;//break while
           }
           
        }//end while
        
    }//end else
    
 /*   display();
 */       /*
    }//end outer for
    */
    
    /*if(i==4) break;
    */
if(i==4&&CheckWinDuringMatch()==-1){
cout<<"Well played players-\nGAME HAS DRAWN......\n ";
break;
}/*
else if(i==4 && (CheckWinDuringMatch()==1||CheckWinDuringMatch()==0)) break;*/

int win=CheckWinDuringMatch();
if(win==0){
    result1();
    break;
}else if(win==1){
    result2();
    break;
}


    cout<<"---------------------\n";   
    
    display();
  
    cout<<"---------------------\n";   
    
    cout<<"COMPUTERS TURN : "<<endl;

    srand(time(0)); // Seed once

    int m=0;
    int n=2;

    int rn=rand()%(n-m+1)+m;
a=rn;
rn=rand()%(n-m+1)+m;
 b=rn;
    
    if(Gboard[a][b]!='O'&&Gboard[a][b]!='X'){
        Gboard[a][b]='X';
       if(a==0&&b==0) board[0][0]='X';
        else if(a==0&&b==1) board[0][2]='X';
        else if(a==0&&b==2) board[0][4]='X';
        else if(a==1&&b==0) board[2][0]='X';
        else if(a==1&&b==1) board[2][2]='X';
        else if(a==1&&b==2) board[2][4]='X';
        else if(a==2&&b==0) board[4][0]='X';
        else if(a==2&&b==1) board[4][2]='X';
        else if(a==2&&b==2) board[4][4]='X';
    }
    else{
        while(1){
rn=rand()%(n-m+1)+m;
a=rn;
rn=rand()%(n-m+1)+m;
b=rn;
        
           if(Gboard[a][b]=='a') {
               Gboard[a][b]='X';
           break;
           }
        }

    }//end else
    
    cout<<"---------------------\n";   
    
    display();
  
    cout<<"---------------------\n";   

    win=CheckWinDuringMatch();
    if(win==0) {
        result1();
        break;
    } 
    else if(win==1) {
        result2();
        break;
    }
    
    }//end outer for
    
     
}//end func

void result1(){

if(Gboard[0][0]=='O'&&Gboard[0][1]=='O'&&Gboard[0][2]=='O') cout<<"Congragulations PLAYER 1 has won !!!\n";
else if(Gboard[1][0]=='O'&&Gboard[1][1]=='O'&&Gboard[1][2]=='O') cout<<"Congragulations PLAYER 1 has won !!!\n";
else if(Gboard[2][0]=='O'&&Gboard[2][1]=='O'&&Gboard[2][2]=='O') cout<<"Congragulations PLAYER 1 has won !!!\n";

else if(Gboard[0][0]=='O'&&Gboard[1][0]=='O'&&Gboard[2][0]=='O') cout<<"Congragulations PLAYER 1 has won !!!\n";
else if(Gboard[0][1]=='O'&&Gboard[1][1]=='O'&&Gboard[2][1]=='O') cout<<"Congragulations PLAYER 1 has won !!!\n";
else if(Gboard[0][2]=='O'&&Gboard[1][2]=='O'&&Gboard[2][2]=='O') cout<<"Congragulations PLAYER 1 has won !!!\n";

else if(Gboard[0][0]=='O'&&Gboard[1][1]=='O'&&Gboard[2][2]=='O') cout<<"Congragulations PLAYER 1 has won !!!\n";
else if(Gboard[0][2]=='O'&&Gboard[1][1]=='O'&&Gboard[2][0]=='O') cout<<"Congragulations PLAYER 1 has won !!!\n";

else{ 
    cout<<"Better luck next time Player 1......"<<endl;    
    check1=0;
}
}
 
void result2(){

if(Gboard[0][0]=='X'&&Gboard[0][1]=='X'&&Gboard[0][2]=='X') cout<<"Congragulations PLAYER 2 has won !!!\n";
else if(Gboard[1][0]=='X'&&Gboard[1][1]=='X'&&Gboard[1][2]=='X') cout<<"Congragulations PLAYER 2 has won !!!\n";
else if(Gboard[2][0]=='X'&&Gboard[2][1]=='X'&&Gboard[2][2]=='X') cout<<"Congragulations PLAYER 2 has won !!!\n";

else if(Gboard[0][0]=='X'&&Gboard[1][0]=='X'&&Gboard[2][0]=='X') cout<<"Congragulations PLAYER 2 has won !!!\n";
else if(Gboard[0][1]=='X' &&Gboard[1][1]=='X'&&Gboard[2][1]=='X') cout<<"Congragulations PLAYER 2 has won !!!\n";
else if(Gboard[0][2]=='X'&&Gboard[1][2]=='X'&&Gboard[2][2]=='X') cout<<"Congragulations PLAYER 2 has won !!!\n";

else if(Gboard[0][0]=='X'&&Gboard[1][1]=='X'&&Gboard[2][2]=='X') cout<<"Congragulations PLAYER 2 has won !!!\n";
else if(Gboard[0][2]=='X'&&Gboard[1][1]=='X'&&Gboard[2][0]=='X') cout<<"Congragulations PLAYER 2 has won !!!\n";
else {
    cout<<"Better luck next time Player 2......"<<endl;    
check2=0;

}

}


int CheckWinDuringMatch(){

if(Gboard[0][0]=='O'&&Gboard[0][1]=='O'&&Gboard[0][2]=='O') return 0;

else if(Gboard[1][0]=='O'&&Gboard[1][1]=='O'&&Gboard[1][2]=='O') return 0;
else if(Gboard[2][0]=='O'&&Gboard[2][1]=='O'&&Gboard[2][2]=='O') return 0;
else if(Gboard[0][0]=='O'&&Gboard[1][0]=='O'&&Gboard[2][0]=='O') return 0;
else if(Gboard[0][1]=='O'&&Gboard[1][1]=='O'&&Gboard[2][1]=='O') return 0;
else if(Gboard[0][2]=='O'&&Gboard[1][2]=='O'&&Gboard[2][2]=='O') return 0;
else if(Gboard[0][0]=='O'&&Gboard[1][1]=='O'&&Gboard[2][2]=='O') return 0;
else if(Gboard[0][2]=='O'&&Gboard[1][1]=='O'&&Gboard[2][0]=='O') return 0;


if(Gboard[0][0]=='X'&&Gboard[0][1]=='X'&&Gboard[0][2]=='X') return 1;

else if(Gboard[1][0]=='X'&&Gboard[1][1]=='X'&&Gboard[1][2]=='X') return 1;
else if(Gboard[2][0]=='X'&&Gboard[2][1]=='X'&&Gboard[2][2]=='X') return 1;
else if(Gboard[0][0]=='X'&&Gboard[1][0]=='X'&&Gboard[2][0]=='X') return 1;
else if(Gboard[0][1]=='X' &&Gboard[1][1]=='X'&&Gboard[2][1]=='X') return 1;
else if(Gboard[0][2]=='X'&&Gboard[1][2]=='X'&&Gboard[2][2]=='X') return 1;
else if(Gboard[0][0]=='X'&&Gboard[1][1]=='X'&&Gboard[2][2]=='X') return 1;
else if(Gboard[0][2]=='X'&&Gboard[1][1]=='X'&&Gboard[2][0]=='X') return 1;

return -1;
}

};


void typeEffect(string text, int delay = 50) {
    for (char c : text) {
        cout << c << flush;
        Sleep(delay);
    }
    cout << endl;
}


void displayBlockWelcome() {
    // Line 1
    cout << "██╗    ██╗███████╗██╗      ██████╗  ██████╗ ███╗   ███╗███████╗" << endl;
    // Line 2
    cout << "██║    ██║██╔════╝██║     ██╔════╝ ██╔═══██╗████╗ ████║██╔════╝" << endl;
    // Line 3
    cout << "██║ █╗ ██║█████╗  ██║     ██║      ██║   ██║██╔████╔██║█████╗  " << endl;
    // Line 4
    cout << "██║███╗██║██╔══╝  ██║     ██║      ██║   ██║██║╚██╔╝██║██╔══╝  " << endl;
    // Line 5
    cout << "╚███╔███╔╝███████╗███████╗╚██████╗ ╚██████╔╝██║ ╚═╝ ██║███████╗" << endl;
    // Line 6
    cout << " ╚══╝╚══╝ ╚══════╝╚══════╝ ╚═════╝  ╚═════╝ ╚═╝     ╚═╝╚══════╝" << endl;
    
    Sleep(2000);
}

int main(){
    
    displayBlockWelcome();

    typeEffect("WELCOME, COMRADE.", 100);
    Sleep(1000);
    typeEffect("YOUR TACTICAL SKILLS ARE REQUIRED ON THE GRID.", 50);
    
    Beep(750, 500);
   
 game1 g2;
 g2.fill();
 g2.display();
 g2.input();
 g2.result1();
 g2.result2();
    return 0;
}
