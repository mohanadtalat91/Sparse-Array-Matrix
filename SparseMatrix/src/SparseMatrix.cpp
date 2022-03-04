#include <iostream>
#include "RowLinkedList.h"
using namespace std;

int main() {
	RowLinkedList mat(10, 10);

	mat.setRow(5, 3, 5);
	mat.setRow(7, 3, 7);
	mat.setRow(2, 3, 2);
	mat.setRow(0, 3, 2);
	mat.setRow(6, 5, 6);
	mat.setRow(4, 5, 4);
	mat.setRow(3, 7, 3);
	mat.setRow(1, 7, 1);

	mat.PrintRowAll(); /*    0 0 0 0 0 0 0 0 0 0
							 0 0 0 0 4 0 6 0 0 0
							 0 0 0 0 0 0 0 0 0 0
							 0 1 0 3 0 0 0 0 0 0
							 0 0 0 0 0 0 0 0 0 0
							 0 0 0 0 0 0 0 0 0 0
*/
	mat.PrintRowNonZero(); /*   The Sparse Matrix
								10 x 10
								0 5 7
								4 6
								1 3
*/

	RowLinkedList mat2(10, 10);
	mat2.setRow(5, 1, 9);
	mat2.setRow(6, 3, 8);
	mat2.setRow(9, 1, 7);
	mat2.PrintRowAll() ;
	mat2.PrintRowNonZero();
	//cout << mat2.get_row_col(1,9) << endl ;
	//mat.add_matrix(mat2);

}
