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
//    int n , m , ni , a , c = 0 , q = 10 , j = 1 , emp ;
//    int arr [201] = {0} ;
//
//    bool check = 0 , check2 = 1 ;
//
//    vector < pair < int , int > > res ;
//
//    cin >> n >> m ;
//
//    while ( m -- ){
//    
//        cin >> ni ;
//
//        for ( int k=0 ; k<ni ; c++ , k++ ){
//        
//            cin >> a ;
//
//            if ( a != c+1 )
//                arr[a] = c+1 ;
//
//            else 
//                arr[a] = c+1 ;
//        
//        }
//    
//    }
//
//    for ( int i=1 ; i<=n ; i++ )
//
//        if ( arr[i] == 0 ){
//            emp = i ;
//            break ;
//        }
//
//    while ( !check  ){
//
//		check2 = 1 , check = 1 ;
//
//		for ( int i=1 ; i<=n ; i++ ){
//		
//			if ( arr[i] == emp ){
//
//				res.push_back ( make_pair ( i , emp ) ) , arr[emp] = emp , arr[i] = 0 , emp = i , check2 = 0 ;
//				break ;
//
//			}
//				 
//		}
//
//		if ( check2 ){
//
//			if ( arr[j] != j )
//				res.push_back ( make_pair ( j , emp ) ) , arr[emp] = arr[j] , emp = j , arr[emp] = 0 , j ++ ;
//
//			else 
//				j++ ;
//
//		}
//
//		for ( int i=1 ; i<=c ; i++ )
//
//			if ( arr[i] != i )
//				check = 0 ;
//
//    }
//
//    cout << res.size() << endl ;
//
//    for ( int i=0 ; i<res.size() ; i++ )
//        cout << res[i].first << " " << res[i].second << endl ;
//
//return 0 ;
//}