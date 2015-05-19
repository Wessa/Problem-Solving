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
//int partitionMethod_1 ( vector < int > A , int l , int r ){ 
//
//	int pivIdx = 0 , i = l + 1 ;
//
//	for ( int j=i ; j<A.size() ; j++ ){
//		
//		if ( A[j] < A[pivIdx] ){
//			
//			swap ( A[j] , A[i] ) ;
//			i ++ ;
//			res ++ ;
//		}
//	}
//
//	swap ( A[pivIdx] , A[i-1] ) ;
//
//	return i - 1 ;
//}
//
//vector < int > quickSort ( vector < int > A , int l , int r ){
// 	
//	if ( A.size() == 1 )
//		return A;
//	
//	int pos ;
//
//	pos = partitionMethod_1 ( A , l , r ) ;
//	quickSort ( A , l , pos - 1 ) ;
//	quickSort ( A , l + pos + 1 , r ) ;
//
//	return A ;
//}
//
//int main() {
//
//	freopen("in.txt", "rt", stdin);
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
//
//		A = quickSort ( A , 0 , A.size() ) ;
//
//		for ( int i=0 ; i<A.size() ; i++ ){
//
//			cout << A[i] << " " ;
//		}
//		cout << endl ;
//
//		cout << res << endl ;
//	}
//
//    return 0;
//}
