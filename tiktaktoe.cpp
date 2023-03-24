#include <iostream>
#include <conio.h>
using namespace std ;
int rowchecker() ;
int columnchecker() ;
int diagonalchecker1() ;
int diagonalchecker2() ;
void logo() ;
int gridsize = 3 ;
string board[3][3] = {{"00","01","02"},
                    {"10","11","12"},
                    {"20","21","22"}} ;
main(){
    for (int z = 0 ; z < 9 ; z++){
        logo() ;
        system("color 7") ;
        int x , y ;
        cout << "_________________________________________________" << endl ;
        cout << "                 |               |               |" << endl ;
        cout<<" \t" <<board[0][0]  <<"\t\t"<< board[0][1] <<"\t\t"<<board[0][2]<<   endl ;
        cout << "_________________|_______________|_______________|" << endl ;
        cout << "                 |               |               |" << endl ;
        cout<<" \t" <<board[1][0]  <<"\t\t"<< board[1][1] <<"\t\t"<<board[1][2] << endl ;
        cout << "_________________|_______________|_______________|" << endl ;
        cout << "                 |               |               |" << endl ;
        cout<<" \t" <<board[2][0]  <<"\t\t"<< board[2][1] <<"\t\t"<<board[2][2] << endl ;
        cout << "_________________|_______________|_______________|" << endl ;

     
        if (z % 2 == 0){
            system("color 7") ;
            cout << "Player 1 " << endl ;
            cout << "ENTER FIRST DIGIT : " ;
            cin >> x ;
                while (x != 0 && x != 1 && x != 2){
                    cout << "YOU ENTERED WRONG DIGIT:" << endl;
                    cout << "ENTER FIRST DIGIT : " ;
                    cin >> x ; 
                }
            cout << "ENTER SECOND DIGIT : " ;
            cin >> y ;
                while (y != 0 && y != 1 && y != 2){
                    cout << "YOU ENTERED WRONG DIGIT:" << endl;
                    cout << "ENTER SECOND DIGIT : " ;
                    cin >> y ; 
                }
                    while (board[x][y] == " X" || board[x][y] == " O"){
                        system ("color 4") ;
                        cout << "WARNING , Do Not Enter Those Number Which Already Exit " << endl ;
                        cout << "Player 1 " << endl ;
                    cout << "ENTER FIRST DIGIT : " ;
                    cin >> x ;
                        while (x != 0 && x != 1 && x != 2){
                            cout << "YOU ENTERED WRONG DIGIT:" << endl;
                            cout << "ENTER FIRST DIGIT : " ;
                            cin >> x ; 
                        }
                    cout << "ENTER SECOND DIGIT : " ;
                    cin >> y ;
                        while (y != 0 && y != 1 && y != 2){
                            cout << "YOU ENTERED WRONG DIGIT:" << endl;
                            cout << "ENTER SECOND DIGIT : " ;
                            cin >> y ; 
                        }
                    }
            board [x][y] = " X" ;
        }

        if (z % 2 == 1){
            system("color 7") ;
            cout << "Player 2 " << endl ;
            cout << "ENTER FIRST DIGIT : " ;
            cin >> x ;
                while (x != 0 && x != 1 && x != 2){
                    cout << "YOU ENTERED WRONG DIGIT:" << endl;
                    cout << "ENTER FIRST DIGIT : " ;
                    cin >> x ; 
                }
            cout << "ENTER SECOND DIGIT : " ;
            cin >> y ;
                while (y != 0 && y != 1 && y != 2){
                    cout << "YOU ENTERED WRONG DIGIT:" << endl;
                    cout << "ENTER SECOND DIGIT : " ;
                    cin >> y ; 
                }
                    while (board[x][y] == " X" || board[x][y] == " O"){ 
                        system ("color 4") ;
                        cout << "WARNING , Do Not Enter Those Number Which Already Exit " << endl ;
                        cout << "Player 2 " << endl ;
                        cout << "ENTER FIRST DIGIT : " ;
                        cin >> x ;
                            while (x != 0 && x != 1 && x != 2){
                                cout << "YOU ENTERED WRONG DIGIT:" << endl;
                                cout << "ENTER FIRST DIGIT : " ;
                                cin >> x ; 
                            }
                        cout << "ENTER SECOND DIGIT : " ;
                        cin >> y ;
                            while (y != 0 && y != 1 && y != 2){
                                 cout << "YOU ENTERED WRONG DIGIT:" << endl;
                                cout << "ENTER SECOND DIGIT : " ;
                                cin >> y ; 
                            }
                    }
            board [x][y] = " O" ;
        }
        system ("cls") ;
 
        if (rowchecker() == 1 || columnchecker() == 1 || diagonalchecker1() == 1 || diagonalchecker2() == 1){
            logo() ;
            system ("color A") ;
            cout << "                    *************************************************************" << endl ;
            cout << "                    *                     PLAYER 1 WIN THE GAME                 *" << endl ;
            cout << "                    *************************************************************" << endl ;
           
            break ;
        }
        if (rowchecker() == 2 || columnchecker() == 2 || diagonalchecker1() == 2 || diagonalchecker2() == 2){
            logo() ;
            system("color 3") ;
            cout << "                    *************************************************************" << endl ;
            cout << "                    *                     player 2 is winner                    *" << endl ;
            cout << "                    *************************************************************" << endl ;
           
            break ;
        }
    }
     if (rowchecker() == 3 && columnchecker() == 3 && diagonalchecker1() == 3 && diagonalchecker2() == 3 ){
            logo() ;
            system("color 6") ;
            cout << "                         *************************************************************" << endl ;
            cout << "                         *                         Match Tie                         *" << endl ;
            cout << "                         *************************************************************" << endl ;
        }
}

void logo (){
     cout << "_________________________________________________________________________" << endl;
    cout << "   " << endl;
    cout << "                                 TIC TAC TOE                             " << endl;
    cout << "_________________________________________________________________________" << endl;

   
}

int rowchecker(){
    for (int z = 0 ; z < gridsize ; z++){
        int countx = 0 ;
        int counto = 0 ;
        for (int y = 0 ; y < gridsize ; y++){
            if ( board[z][y] == " X" ) {
               countx ++ ;
            } 
            if ( board[z][y] == " O" ) {
               counto ++ ;
            } 
            if (countx == gridsize){
                return 1 ;
            }
            if (counto ==  gridsize){
                return 2 ;
            }
        }
    } 
    return 3 ;
}

int columnchecker(){
    for (int z = 0 ; z < gridsize ; z++){
        int countx = 0 ;
        int counto = 0 ;
        for (int y = 0 ; y < gridsize ; y++){
            if ( board[y][z] == " X" ) {
               countx ++ ;
            } 
            if ( board[y][z] == " O" ) {
               counto ++ ;
            } 
            if (countx == gridsize){
                return 1 ;
            }
            if (counto ==  gridsize){
                return 2 ;
            }
        }
    } 
    return 3 ;
}

int diagonalchecker1(){
        int countx = 0 ;
        int counto = 0 ;
    for (int z = 0 ; z < gridsize ; z++){ 
            if (board[z][z] == " X" ){
                countx++ ;
            }
            if ( board[z][z] == " O" ) {
               counto ++ ;
            } 
            if (countx == gridsize){
                return 1 ;
            }
            if (counto ==  gridsize){
                return 2 ;
            }
        }
        return 3 ;
    }

int diagonalchecker2(){
    int countx = 0 ;
    int counto = 0 ;
    int y = 0 ;
    for (int z = gridsize - 1 ; z >= 0 ; z--){ 
            if (board[y][z] == " X" ){
                countx++ ;
            }
            if ( board[y][z] == " O" ) {
               counto ++ ;
            } 
            if (countx == gridsize){
                return 1 ;
            }
            if (counto ==  gridsize){
                return 2 ;
            }
            y++ ;
        }
        return 3 ;
    }
