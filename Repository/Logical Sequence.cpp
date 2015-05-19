//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//
//using namespace std ;
//
//int main (){
//
//	int N ;
//
//	cin >> N ;
//
//	vector< vector<int> > seq ( N*2 , vector<int> (3) ) ;
//
//	seq[0][0] = seq[0][1] = seq[0][2] = 1 ;
//	seq[1][0] = 1 , seq[1][1] = seq[1][2] = 2 ;
//
//	for ( int i=2 ; i<N*2 ; i+=2 ){
//		
//		seq[i][0] = seq[i+1][0] = seq[i-1][0] + 1 ;
//
//		for ( int j=1 ; j<3 ; j++ ){
//			
//			seq[i][j] = seq[i][j-1]*seq[i][0] ;
//			seq[i+1][j] = seq[i][j] + 1 ;
//		
//		}
//
//	}
//
//	for ( int i=0 ; i<N*2 ; i++ ){
//		for ( int j=0 ; j<3 ; j++ ){
//			cout << seq[i][j] ;
//			if ( j < 2 )
//				cout << " " ;
//		}
//		cout << endl ;
//	}
//
//return 0 ;
//}