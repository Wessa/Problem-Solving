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
//	string temp = "ABCD" ;
//	char res , a , b ;
//	int count = 0 ;
//	bool check [4][2] ;
//	string choice [4] ;
//
//	for ( int i=0 ; i<4 ; i++ )
//		check[i][0] = check[i][1] = 1 ;
//
//	for ( int i=0 ; i<4 ; i++ )
//		cin >> a >> b >> choice[i] ;
//
//	for ( int i=0 ; i<4 ; i++ ){
//	
//		for ( int j=0 ; j<4 ; j++ ){
//		
//			if ( i != j ){
//				check[i][0] &= ( choice[i].size() >= (2)*choice[j].size() ) ;
//				check[i][1] &= ( (2)*choice[i].size() <= choice[j].size() ) ;
//			}
//		
//		}
//	
//	}
//
//	for ( int i=0 ; i<4 ; i++ )
//	
//		if ( check[i][0] || check[i][1] )
//			count ++ , res = temp[i] ;
//
//	if ( count == 1 )
//		cout << res << endl ;
//
//	else 
//		cout << "C" << endl ;
//		
//
//return 0 ;
//}