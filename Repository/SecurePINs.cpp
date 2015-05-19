//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//#include <set>
//#include <sstream>
//#include <stdio.h>
//
//using namespace std ;
//
//int main (){
//
//	int N ;
//	string pass ;
//	bool AC = true ;
//
//	cin >> N ;
//
//	while ( N-- ){
//		
//		AC = true ;
//		int occ [11] = {0};
//
//		cin >> pass ;
//
//		for ( int i=0 ; i<6 ; i++ ){
//
//			occ[pass[i]-'0'] ++ ;
//			if ( occ[ pass[i]-'0' ] >= 3 )
//				AC = false ;
//
//		}
//		
//		if ( !AC ){
//			cout << "WEAK" << endl ;
//			continue ;
//		}
//
//		for ( int i=0 ; i<4 ; i++ ){
//		
//			if ( ( (pass[i]-'0') == (pass[i+1] -'0') + 1) && ( (pass[i+1]-'0') == (pass[i+2]-'0') + 1) ){
//				AC = false ;
//				break ;
//			}
//			if ( ( (pass[i]-'0') == (pass[i+1] -'0') - 1) && ( (pass[i+1]-'0') == (pass[i+2]-'0') - 1) ){
//				AC = false ;
//				break ;
//			}
//		
//		}
//
//		if ( AC )
//			cout << "ACCEPTABLE" << endl ;
//
//		else 
//			cout << "WEAK" << endl ;
//
//	}
//
//return 0 ;
//}