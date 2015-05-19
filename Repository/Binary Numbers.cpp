//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//#include <set>
//#include <sstream>
//
//using namespace std ;
//
//int main (){
//
//	int d , n ;
//
//	cin >> d ;
//
//	while ( d -- ){
//	
//		cin >> n ;
//
//		string binary ;
//		vector <int> res ;
//
//		while ( n != 0 ){
//		
//			binary += char ( (n % 2) + '0' ) ;
//			n /= 2 ;
//		
//		}
//
//		for ( int i=0 ; i<binary.size() ; i++ )
//			if ( binary[i] == '1' )
//				res.push_back(i) ;
//			
//		for ( int i=0 ; i<res.size() ; i++ ){
//			
//			cout << res[i] ;
//
//			if ( i < res.size()-1 )
//				cout << " " ;
//		
//		}
//		
//		cout << endl ;
//	
//	}
//
//return 0 ;
//}