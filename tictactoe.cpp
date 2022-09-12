#include <iostream>
using namespace std;

char b[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int ch;
char turn = 'x';
void winning(){
for(int i=0;i<3;i++){
//  if(b[0][i]==b[1][i]==b[2][i]=='X'||b[i][0]==b[i][1]==b[i][2] || b[i][i]=='X'){
//     cout<<"X WINS"<<endl;
//     break;
//  }
//  else if(b[0][2]==b[1][1]==b[2][0]=='X'){
//     cout<<"X WINS"<<endl;
//     break;
//  }
//  else{
//     cout<<"O WINS"<<endl;
//     break;
//  }
}
void display_board(){


for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<" "<<b[i][j]<<" |";
    }

    cout<<" "<<endl;

}
}
void turn_order(){
if(turn=='X'){
        turn = 'O';
    }
    else{
        turn = 'X';
    }}
void turn_function(){
cout<<"ENTER YOUR CHOICE"<<endl;
cout<<"X"<<endl;
cout<<"O"<<endl;
cin>>turn;
}
void play(){

    turn_function();

    for(int i=0;i<9;i++){
    cout<<"SELECT THE POSITION FOR "<<turn<<endl;
    cin>>ch;



switch(ch){
    case 1:
        b[0][0] = turn;
        break;
    case 2:
        b[0][1] = turn;
        break;
     case 3:
        b[0][2] = turn;
        break;
     case 4:
        b[1][0] = turn;
        break;
     case 5:
        b[1][1] = turn;
        break;
     case 6:
        b[1][2] = turn;
        break;
     case 7:
        b[2][0] = turn;
        break;
     case 8:
        b[2][1] = turn;
        break;
     case 9:
        b[2][2] =turn;
        break;
    default : cout<<"INVALID CHOICE"<<endl;
    }
    display_board();
    winning();
    turn_order();
    }
    }
int main(){
display_board();
play();
}
