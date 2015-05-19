//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//#include <set>
//#include <sstream>
//#include <cmath>
//
//using namespace std ;
//
//int main (){
//
//	int T , money , numOfFriends ;
//
//	string name , friendName ;
//
//	cin >> T ;
//
//	do {
//
//		vector < string > friends ;
//		map < string , int > net ;
//		
//		for ( int i=0 ; i<T ; i++ )
//			cin >> name , friends.push_back ( name ) ;
//
//		for ( int i=0 ; i<T ; i++ ){
//
//			cin >> name >> money >> numOfFriends ;
//
//			if ( money == 0 || numOfFriends == 0 ){
//
//				net [ name ] += 0 ;
//
//				for ( int i=0 ; i<numOfFriends ; i++ )
//					cin >> friendName ; 
//
//				continue ;
//			}
//
//			for ( int i=0 ; i<numOfFriends ; i++ ){
//
//				cin >> friendName ; 
//
//				net [ friendName ] += money / numOfFriends ;
//
//			}
//
//			net [ name ] -= numOfFriends * ( money / numOfFriends ) ;
//
//		}
//
//		for ( int i=0 ; i<T ; i++ )
//			cout << friends[i] << " " << net [ friends[i] ] << endl ;
//
//	}
//		
//	while ( cin >> T && cout << endl ) ;
//	
//
//return 0 ;
//}