//#include <iostream>
//using namespace std;
//int main() {
//for (int row=0;row<3;row=row+1) {
//	for (int col=0;col<5;col=col+1){
//		cout<<"*";
//	}
//	cout<<endl;
//}

// Sample for printing square star pattern
//for(int row=0;row<4;row++){
//	for (int col=0;col<4;col++){
//		cout<<"*";
//	}
//	cout<<endl;
//}


// printing square pattern by taking input from user
//cout<<"Enter n value: ";
//int n;
//cin>>n;
//for (int row=0;row<n;row++){
//	for (int col=0;col<n;col++){
//		cout<<"*";
//	}
//	cout<<endl;
//}


// Note: we use for loop for row first becoz we have to end row horizontally with endl and we can't end column vertically so we start loop for row first

// Hollow Rectangle star pattern printing
// * * * * *
// *       *
// * * * * *
//for (int row=0;row<3;row++){
//	if (row==0 || row == 2){
//		for (int col=0;col<5;col++){
//			cout<<"* ";
//		}
//	} else {
//		// for first col of 2nd row
//		cout<<"* ";
//		// for three middle col of 2nd row
//		for (int col=0;col<3;col++){
//			cout<<"  ";
//		}
//		// for last col of 2nd row
//		cout<<"*";
//	}
//	cout<<endl;
//}


// Hollow rectangle for 6 rows and 5 colums
//for (int row=0;row<6;row++){
//	if (row == 0 || row == 5){
//		for (int col=0;col<5;col++){
//			cout<<"* ";
//		}
//	}
//	else {
//		// for 1st col
//		cout<<"* ";
//		for (int col=0;col<3;col++){
//			cout<<"  ";
//		}
//		cout<<"* ";
//	}
//	cout<<endl;
//}

// Hollow rectangle printing by taking n input from user
//cout<<"Enter value of n: ";
//int n;
//cin>>n;
//for (int row=0;row<n;row++){
//	if (row ==0 || row == n-1){
//		for (int col=0;col<n-1;col++){
//			cout<<"* ";
//		}
//	} else {
//		cout<<"* ";
//		for (int col=0;col<n-3;col++){
//			cout<<"  ";
//		}
//		cout<<"* ";
//	}
//	cout<<endl;
//}
// This program written by myself and in 1st attempt it worked perfectly: cheers to me!!
//} 









// Printing solid square pattern by taking n value from user
//#include <iostream>
//using namespace std;
//int main(){
//	// taking n input
//	cout<<"Enter value of n: \n";
//	int n;
//	cin>>n;
//	// printing the rows
//	for (int row=0;row<n-1;row++){
//		for (int col=0;col<n-1;col++){
//			cout<<"* ";
//	}
//	cout<<endl;
//	}
//}

// DSA Day 2: Printing Patterns

// Printing the half pyramid by taking input from user
// #include<iostream>
// using namespace std;
// int main(){
// 	cout<<"Enter value of n: \n";
// 	int n;
// 	cin>>n;
// 	for (int row=0;row<n-1;row++){
// 		for (int col=0;col<row+1;col++){
// 			cout<<"* ";
// 		}
// 		cout<<endl;
// 	}
// }

// DSA Day 2: Printing Patterns

// Printing inverted half pyramid
// #include<iostream>
// using namespace std;
// int main(){
// 	cout<<"Enter value of n: \n";
// 	int n;
// 	cin>>n;
// 	for (int row=0;row<n;row++){
// 		for (int col=0;col<n-row;col++){
// 			cout<<"* ";
// 		}
// 	cout<<endl;
// 	}
// }

// Printing half pyramind of numbers (not star)
// #include<iostream>
// using namespace std;
// int main(){
// 	for (int row=0;row<5;row++){
// 		for (int col=0;col<row+1;col++){
// 			cout<<col<<" ";
// 		}
// 	cout<<endl;
// 	}
// }

// Printing inverted half pyramid by taking n input from user
// #include<iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cout<<"Enter the value of n: \n";
// 	cin>>n;
// 	for (int row=0;row<n-1;row++){
// 		for (int col=0;col<n-row-1;col++){
// 			cout<<col<<" ";
// 		}
// 		cout<<endl;
// 	}
// }


// Printing Hollow Inverted Half Pyramid by getting n input from user
// #include<iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cout<<"Enter value of n: \n";
// 	cin>>n;
// 	for (int row=0;row<n;row++){
// 		for (int col=0;col<n;col++){
// 			if (row == 0 || col==0||col==n-row-1){
// 				cout<<"* ";
// 			} else {
// 				cout<<"  ";
// 			}
// 		}
// 		cout<<endl;
// 	}
// }

// This is high level

 
// Write it again for practice
// #include<iostream>
// using namespace std;
// int main(){
// 	cout<<"Enter the value for n: \n";
// 	int n;
// 	cin>>n;
// 	for (int row=0;row<n;row++){
// 		for (int col=0;col<n;col++){
// 			if (row==0 || col==0 || col==n-row-1){
// 				cout<<"* ";
// 			} else {
// 				cout<<"  ";
// 			}
// 		}
// 		cout<<endl;
// 	}
// }


// Printing full pyramid by getting n value from user
// #include<iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cout<<"Enter value for n:\n ";
// 	cin>>n;
// 	for (int row =0; row<n;row++){
// 		int k=0;
// 		for (int col=0;col<(2*n)-1;col++){
// 			if (col<n-row-1){
// 				cout<<"  ";
// 			} else if (k<2*row+1){
// 				cout<<"* ";
// 				k++;
// 			} else {
// 				cout<<"  ";
// 			}
// 		}
// 		cout<<endl;
// 	}
// }
// DSA Day 2 : Printing patterns advanced levels

// Printing full Hollow pyramid by getting n value from user
// #include<iostream>
// using namespace std;
// int main(){
// 	cout<<"Enter value for n: \n";
// 	int n;
// 	cin>>n;
// 	for (int row=0;row<n;row++){
// 		int k=0;
// 		for (int col=0;col<((2*n)-1);col++){
// 			if (col<n-row-1){
// 				cout<<"  ";
// 			} else if(k<2*row+1){
// 				if(k==0 || k==2*row ||row == n-1)
// 					cout<<"* ";
// 				else
// 					cout<<"  ";
// 					k++;
// 			} else {
// 				cout<<"  ";
// 			}
// 		}
// 		cout<<endl;
// 	}
// }

// Printing full pyramid
// #include<iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cout<<"Enter value of n: ";
// 	cin>>n;
// 	for (int row=0;row<n; row++){
// 		// space 
// 		for (int col=0;col<n-row-1;col++){
// 			cout<<" ";
// 		}

// 		// stars
// 		for (int col=0;col<row+1;col++){
// 			cout<<"* ";
// 		}
// 		cout<<endl;
// 	}
// }



// Printing inverted pyramid

// #include<iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cout<<"Enter a value for n: ";
// 	cin>>n;
// 	for (int row=0;row<n;row++){
// 		// space
// 		for (int col=0;col<row;col++){
// 			cout<<" ";
// 		}
// 		// for star
// 		for (int col=0;col<n-row;col++ ){
// 			cout<<"* ";
// 		}
// 		cout<<endl;
// 	}
// }


// Printing solid diamond
// #include<iostream>
// using namespace std;
// int main(){
// 	cout<<"Enter value for n: ";
// 	int n;
// 	cin>>n;
// 	for (int row=0;row<n;row++){
// 		// space
// 		for (int col=0;col<n-row-1;col++){
// 			cout<<" ";
// 		}
// 		for (int col=0;col<row;col++){
// 			cout<<"* ";
// 		}
// 		cout<<endl;
// 	}
// 	// for other half portion
// 	for (int row=0;row<n;row++){
// 		// space
// 		for (int col=0;col<row;col++){
// 			cout<<" ";
// 		}
// 		// for star
// 		for (int col=0;col<n-row-1;col++ ){
// 			cout<<"* ";
// 		}
// 		cout<<endl;
// 	}
// }


// inverted half pyramid printing 
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter value for n: ";
	cin>>n;
	for (int row=0;row<n;row++){
		
	}
}