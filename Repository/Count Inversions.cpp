//// My Submission Link :
//// http://a2oj.com/Status.jsp?Username=waseem20120451&ID=367
//
//// Author : Waseem Mounir Abdallah
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stdio.h> 
//
//using namespace std;
//
//long long int res = 0 ;
//
//vector < int > countSplitInversions ( vector < int > B , vector < int > C ){ 
//
//	int i = 0 , j = 0 ;
//	vector < int > D ; 
//
//	while ( i < B.size() && j < C.size() ){
//		
//		if ( B[i] < C[j] ){
//			
//			D.push_back ( B[i] ) ;
//			i ++ ;
//		}
//		else if ( B[i] > C[j] ){
//			
//			D.push_back ( C[j] ) ;
//			j ++ ;
//			res += B.size() - i ;
//		}
//		else {
//
//			D.push_back ( B[i] ) ;
//			i ++ ; 
//		}
//	}
//
//	while ( i < B.size() ){
//		
//		D.push_back ( B[i] ) ; 
//		i ++ ;
//	}
//	while ( j < C.size() ){
//		
//		D.push_back ( C[j] ) ; 
//		j ++ ;
//	}
//
//	return D ;
//}
//
//vector < int > countInversions ( vector < int > A ){
// 	
//	if ( A.size() == 1 )
//		return A;
//
//	vector < int > B , C , D ;
//	int X , Y ;
//
//	B = vector < int > ( A.begin() , A.begin() + A.size()/2 ) ;
//	C = vector < int > ( A.begin() + A.size()/2 , A.end() ) ;
//
//	B = countInversions ( B ) ;
//	C = countInversions ( C ) ;
//
//	D = countSplitInversions ( B , C ) ;
//	
//	return D ;
//}
//
//int main() {
//
//	//freopen("in.txt", "rt", stdin);
//
//	int T , N ;
//	vector < int > A ;
//	
//	cin >> T ;
//
//	while ( T -- ){
//
//		cin >> N ;
//
//		A.resize ( N ) ;
//	
//		for ( int i=0 ; i<A.size() ; i++ ){
//
//			cin >> A[i] ;
//		}
//
//		res = 0 ;
//		countInversions ( A ) ;
//
//		cout << res << endl ;
//	}
//
//    return 0;
//}
