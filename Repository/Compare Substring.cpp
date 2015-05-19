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
//	string a , b ;
//	
//	while ( getline ( cin , a ) && getline ( cin , b ) ){
//
//		int maxi = 0 , idx1 , idx2 ;
//
//		for ( int i=0 ; i<a.size() ; i++ ){
//		
//			for ( int j=0 ; j<b.size() ; j++ ){
//
//				idx1 = i , idx2 = j ;
//
//				while ( ( a[idx1] == b[idx2] ) && ( idx1 < a.size()  &&  idx2 < b.size() ) ){
//
//					idx1 ++ , idx2 ++ ;
//
//				}
//
//				maxi = max ( maxi , idx1 - i ) ; 
//				
//			}
//		
//		}
//
//		cout << maxi << endl ;
//
//	}
//
//return 0 ;
//}