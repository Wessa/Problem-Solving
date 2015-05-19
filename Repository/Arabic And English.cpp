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
//	int T , N ;
//	string word ;
//
//	cin >> T ;
//
//	while ( T -- ){
//		
//		cin >> N ;
//
//		bool check = false ;
//		vector<string> after ;
//		vector<string> before ;
//		string alpha ;
//
//		while ( N -- ){
//
//			cin >> word ;
//
//			if ( isalpha ( word[0] ) )
//				check = true , alpha = word ;	
//
//			else if ( check == false ) 
//				after.push_back ( word ) ;
//		
//			else 
//				before.push_back ( word ) ;
//
//		}
//
//		if ( check ){
//
//			for ( int i=0 ; i<before.size() ; i++ )
//				cout << before[i] << " " ;
//
//			cout << alpha << " " ;
//
//			for ( int i=0 ; i<after.size() ; i++ ){
//	
//				cout << after[i] ;
//
//				if ( i < after.size() - 1 )
//					cout << " " ;
//			
//			}
//
//		}
//
//		else {
//		
//			for ( int i=0 ; i<after.size() ; i++ ){
//	
//				cout << after[i] ;
//
//				if ( i < after.size() - 1 )
//					cout << " " ;
//			
//			}
//		
//		}
//
//		cout << endl ;
//
//	}
//
//return 0 ;
//}