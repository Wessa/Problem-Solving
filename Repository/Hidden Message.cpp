//#include <iostream>
//#include <map>
//#include <string>
//
//using namespace std ;
//
//int main (){
//	
//	int N ;
//
//	cin >> N ;
//
//	cin.ignore() ;
//
//	for ( int i=0 ; i<N ; i++ ){
//		
//		string res , input ;
//		bool check = false ;
//
//		getline ( cin , input ) ;
//
//		if ( isalpha( input[0] ) )
//			check = true ;
//
//		for ( int i=0 ; i<input.size() ; i++ ){
//			
//			if ( input[i] == ' ' ){
//				check = true ;
//				continue ;
//			}
//
//			if ( ( check == true ) )
//				res += input[i] , check = false ;
//		
//		}
//
//		cout << res << endl ;
//	
//	}
//
//return 0 ;
//}