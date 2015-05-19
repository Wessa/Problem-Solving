//#include <algorithm>
//#include <vector>
//#include <iomanip>
//#include <sstream>
//#include <map>
//#include <algorithm>
//#include <iostream>
//
//using namespace std ;
//
//bool cmd ( pair < char , int > p1 , pair < char , int > p2 ){
//	
//	if ( p1.second != p2.second ) 
//	   return p1.second < p2.second ;
//
//	return p1.first > p2.first ;
//
//}
//
//int main (){
//
//	string Text ;
//
//	while ( getline ( cin , Text ) && Text != "#" ){
//	
//		for ( int i=0 ; i<Text.size() ; i++ )
//			Text[i] = tolower ( Text[i] ) ;
//
//		map < char , int > freq ;
//		map < char , int > :: iterator it ;
//		vector < pair < char , int > > temp ;
//
//		freq['a'] = 0 , freq['e'] = 0 , freq['o'] = 0 , freq['i'] = 0 , freq['u'] = 0 ;
//
//		for ( int i=0 ; i<Text.size() ; i++ ){
//		
//			if ( Text[i] == 'a' || Text[i] == 'e' || Text[i] == 'i' || Text[i] == 'o' || Text[i] == 'u' )
//				freq [ Text[i] ] ++ ;
//
//		}
//		
//		for ( it = freq.begin() ; it != freq.end() ; it ++ )
//			temp.push_back ( *it ) ;
//
//		sort ( temp.rbegin () , temp.rend () , cmd ) ;
//
//		for ( int i=0 ; i<temp.size() ; i++ ){
//
//			cout << temp[i].first << ":" << temp[i].second ;
//
//			if ( i < temp.size() - 1 )
//				cout << " " ;
//		
//		}
//		cout << "." << endl ;
//
//	}
//
//return 0 ; 
//}