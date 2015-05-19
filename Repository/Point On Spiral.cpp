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
//int main(){
//
//	vector< pair < int , int > > spiral ;
//	int x = 0 , y = 0 , res = 0 , l , h ;
//
//	spiral.push_back ( make_pair ( 0 , 0 ) ) ;
//
//	while ( abs(x) <= 100 || abs(y) <= 100 ){
//
//		x *= -1 , spiral.push_back ( make_pair ( ++x , y ) ) ;
//		y *= -1 , spiral.push_back ( make_pair ( x , ++y ) ) ;
//		spiral.push_back ( make_pair ( (-1)*x , y ) ) , x *= -1 ;
//		spiral.push_back ( make_pair ( x , (-1)*y ) ) , y *= -1 ;
//
//	}
//
//	cin >> x >> y ;
//
//	for ( int i=0 ; i<spiral.size()-1 ; i++ ){
//
//		if ( (x == spiral[i].first) && (y == spiral[i].second) ){
//
//			res = i - 1 ;
//
//			if ( res < 0 )
//				res = 0  ;
//
//			break ;
//
//		}
//
//		else if ( (x == spiral[i+1].first) && (y == spiral[i+1].second) ){
//
//			res = i ;
//			break ;
//
//		}
//
//		else if ( (x == spiral[i].first) && (x == spiral[i+1].first) ){
//
//			if ( spiral[i].second < spiral[i+1].second )
//				l = spiral[i].second , h = spiral[i+1].second ;
//
//			else 
//				l = spiral[i+1].second , h = spiral[i].second ;
//		
//			if ( y < h && y > l ){
//
//				res = i ;
//				break ;
//
//			}
//		
//		}
//
//		else if ( (y == spiral[i].second) && (y == spiral[i+1].second) ){
//
//			if ( spiral[i].first < spiral[i+1].first )
//				l = spiral[i].first , h = spiral[i+1].first ;
//
//			else 
//				l = spiral[i+1].first , h = spiral[i].first ;
//		
//			if ( x < h && x > l ){
//
//				res = i ;
//				break ; 
//
//			}
//		
//		}
//
//	}
//
//	cout << res << endl ;
//
//return 0 ;
//}