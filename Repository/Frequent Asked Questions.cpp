//#include <iostream>
//#include <map>
//
//using namespace std ;
//
//int main (){
//
//	int N , K , P , max = 0 , res = 0 ;
//
//	while ( cin >> N >> K && N != 0 && K != 0 ){
//		
//		res = 0 ;
//
//		map <int,int> repeat ;
//		map < int , int > :: iterator it ;
//
//		for ( int i=0 ; i<N ; i++ ){
//
//			cin >> P ;
//			repeat[P] ++ ;
//
//		}
//
//		for ( it = repeat.begin() ; it != repeat.end() ; it ++ ){
//
//			if ( ( it -> second ) >= K )
//				res ++ ;
//		
//		}
//
//		cout << res << endl ;
//	
//	}
//
//
//
//return 0 ;
//}