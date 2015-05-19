//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <sstream>
//#include <iomanip>
//
//using namespace std ;
//
//int main (){
//
//	int N ;
//
//	while ( cin >> N && N != 0 ){
//		
//		vector < vector<int> > matrix ( N , vector<int> (N) ) ;
//		
//		matrix[0][0] = 1 ;
//
//		for ( int i=0 ; i<N ; i++ ){
//
//			if ( i > 0 )
//				matrix[i][0] = matrix[i-1][0] * 2 ;
//			
//			for ( int j=1 ; j<N ; j++ )		
//				matrix[i][j] = matrix[i][j-1] * 2 ;
//				
//		}
//
//		stringstream ss ;
//		ss << matrix[N-1][N-1] ;
//		string str = ss.str() ;
//
//		for ( int i=0 ; i<N ; i++ ){
//
//			for ( int j=0 ; j<N ; j++ ){
//
//				cout << setw( str.size() ) << matrix[i][j] ;
//
//				if ( j < N - 1 )
//					cout << " " ;
//			}
//
//			cout << endl ;
//
//		}
//
//		cout << endl ;
//
//	}
//return 0 ;
//}
