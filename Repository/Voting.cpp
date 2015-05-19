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
//	string votes ;
//
//	while ( cin >> votes && votes != "#" ){
//	
//		int A = 0 , Y = 0 , N = 0 ;
//		
//		for ( int i=0 ; i<votes.size() ; i++ ){
//		
//			if ( votes[i] == 'A' )
//				A ++ ;
//
//			else if ( votes[i] == 'Y' )
//				Y ++ ;
//
//			else if ( votes[i] == 'N' )
//				N ++ ;
//		
//		}
//
//		if ( votes.size() % 2 == 0 && A >= votes.size() / 2 )
//			cout << "need quorum\n" ;
//
//		else if ( votes.size() % 2 != 0 && A > votes.size() / 2 )
//			cout << "need quorum\n" ;
//
//		else if ( Y > N )
//			cout << "yes\n" ;
//
//		else if ( Y < N )
//			cout << "no\n" ;
//
//		else if ( Y == N )
//			cout << "tie\n" ;
//
//	}
//
//return 0 ;
//}