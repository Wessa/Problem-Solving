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
//	int N , max = 0 ;
//	string word ;
//	
//	cin >> N ;
//
//	while ( N != 0 ){
//
//		vector <string> x ;
//		max = 0 ;
//
//		while ( N -- ){
//
//			cin >> word ;
//			x.push_back( word ) ;
//
//			if ( word.size() > max )
//				max = word.size() ;
//
//		}
//
//		for ( int i=0 ; i<x.size() ; i++ )
//			cout << setw ( max ) << x[i] << endl ;
//
//		cin >> N ;
//
//		if ( N != 0 )
//			cout << endl ;
//
//	}
//
//return 0 ;
//}