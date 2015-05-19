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
//vector < vector < int > > temp1 ( 51 )  ;
//vector < bool > check ( 51 ) ;
//long long res = 1 ;
//
//void dfs ( int x ){
//
//    check [x] = 1 ;
//    
//    for ( int i=0 ; i<temp1[x].size() ; i++ )
//    
//        if ( !check[ temp1[x][i] ] )
//            dfs ( temp1[x][i] ) , res *= 2  ;
//}
//
//int main (){
//
//    int n , m  , a , b ;
//    
//    cin >> n >> m ;
//
//    for ( int i=0 ; i<m ; i++ )
//        cin >> a >> b , temp1[ a ].push_back ( b ) , temp1[ b ].push_back ( a ) ;
//
//    for ( int i=0 ; i<=n ; i++ )
//        
//        if ( !check [i] )
//            dfs ( i ) ;
//        
//    cout << res << endl ;
//        
//return 0 ;
//}