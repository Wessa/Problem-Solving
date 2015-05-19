//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//
//using namespace std ;
//
//int main (){
//
//	int N ;
//	string commands ;
//	string directions = "NLSO" ;
//
//	while ( cin >> N && N != 0 ){
//		
//		int cur = 0 ;
//
//		cin >> commands ;
//
//		for ( int i=0 ; i<commands.size() ; i++ ){
//		
//			if ( commands[i] == 'D' )
//				cur = ( cur + 1 ) % 4 ;
//
//			else 
//				cur = ( cur + 3 ) % 4 ;
//		
//		}
//
//		cout << directions[cur] << endl ;
//
//	}
//
//return 0 ;
//}