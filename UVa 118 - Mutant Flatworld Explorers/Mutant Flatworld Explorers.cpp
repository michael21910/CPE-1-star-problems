#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int dead[row + 1][col + 1] = {0};
    int init_row, init_col;
    string facing, command;
    while(cin >> init_row >> init_col >> facing >> command){
        for(int i = 0; i < command.length(); i++){
            char one_command = command[i];
            int dead_loc = dead[init_row][init_col];
            if(init_row < 0 || init_col < 0 || init_row > row || init_col > col){
                break;
            }
            if(one_command == 'R'){
                if(facing == "E"){
                    facing = "S";
                }
                else if(facing == "S"){
                    facing = "W";
                }
                else if(facing == "W"){
                    facing = "N";
                }
                else if(facing =="N"){
                    facing = "E";
                }
            }
            else if(one_command == 'L'){
                if(facing == "E"){
                    facing = "N";
                }
                else if(facing == "S"){
                    facing = "E";
                }
                else if(facing == "W"){
                    facing = "S";
                }
                else if(facing =="N"){
                    facing = "W";
                }
            }
            else if(one_command == 'F'){
                if(facing == "E" && (dead_loc != 1 || init_row + 1 <= row)){
                    init_row += 1;
                }
                else if(facing == "S" && (dead_loc != 1 || init_col - 1 > 0)){
                    init_col -= 1;
                }
                else if(facing == "W" && (dead_loc != 1 || init_row - 1 > 0)){
                    init_row -= 1;
                }
                else if(facing =="N" && (dead_loc != 1 || init_col + 1 <= col)){
                    init_col += 1;
                }
            }
        }
        if(init_row < 0){
            cout << init_row + 1 << " " << init_col << " " << facing << " LOST" << endl;
            dead[init_row + 1][init_col] = 1;
        }
        else if(init_col < 0){
            cout << init_row << " " << init_col + 1 << " " << facing << " LOST" << endl;
            dead[init_row][init_col + 1] = 1;
        }
        else if(init_row > row){
            cout << init_row - 1 << " " << init_col << " " << facing << " LOST" << endl;
            dead[init_row - 1][init_col] = 1;
        }
        else if(init_col > col){
            cout << init_row << " " << init_col - 1 << " " << facing << " LOST" << endl;
            dead[init_row][init_col - 1] = 1;
        }
        else{
            cout << init_row << " " << init_col << " " << facing << endl;
        }
    }
    return 0;
}
