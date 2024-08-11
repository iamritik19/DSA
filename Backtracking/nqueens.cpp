#include<iostream>
#include<vector>
#include<algorithm>
bool isSafeForQueen(std::vector<std::vector<bool>> &board,int row,int col,int n){
	//case 1:-moving Upwards
	int r=row-1;
	int c=col;
	while(r>=0){
		if(board[r][c]){
			return false;
		}
		r--;
	}
	//case 2:-moving Horizontally Left
	c=col-1;
	r=row;
	while(c>=0){
		if(board[r][c]){
			return false;
		}
        c--;
	}
	//case 3:-moving Upwards Right
	r=row-1;
	c=col+1;
	while(r>=0 && c<n){
		if(board[r][c]){
			return false;
		}
        r--;
        c++;
	}
	//case 4:-moving upwards Left
	r=row-1;
	c=col-1;
	while(r>=0 && c>=0){
		if(board[r][c]){
			return false;
		}
        r--;
        c--;
	}
	return true;
}

void fun(std::vector<std::vector<bool>> board,int row,int col,int qsf,int tq,int &n,std::string temp){
   if(qsf==tq){
   	std::cout<<temp<<"\n";
   	return;
   }
   if(row==n){
   	return;   }
   if(col==n){
   row++;
   col=0;
   }
   if(isSafeForQueen(board,row,col,n)){
   	board[row][col]=true;

   temp=temp+"{"+std::to_string(row)+","+std::to_string(col)+"},";
   fun(board,row,0,qsf+1,tq,n,temp);
   board[row][col]=false;
}
	fun(board,row,col+1,qsf,tq,n,temp);
}
int main(){
	int n;
	std::cin>>n;
	std::vector<std::vector<bool> > board;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			board[i][j]=false;
		}
	}
	std::vector<std::vector<std::string>> ans;
	fun(board,0,0,0,n,n,"");
	return 0;
}