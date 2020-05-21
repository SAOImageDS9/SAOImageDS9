/****
 *
 * Chop the code to do this for 2D.
 *
 * affine_matrix4_inverse
 *
 * Computes the inverse of a 3D affine matrix; i.e. a matrix with a dimen-
 * sionality of 4 where the right column has the entries (0, 0, 0, 1).
 *
 * This procedure treats the 4 by 4 matrix as a block matrix and
 * calculates the inverse of one submatrix for a significant perform-
 * ance improvement over a general procedure that can invert any non-
 * singular matrix:
 *          --        --          --          --
 *          |          | -1       |    -1      |
 *          | A      0 |          |   A      0 |
 *    -1    |          |          |            |
 *   M   =  |          |     =    |     -1     |
 *          | C      1 |          | -C A     1 |
 *          |          |          |            |
 *          --        --          --          --
 *
 *  where     M is a 4 by 4 matrix,
 *            A is the 3 by 3 upper left submatrix of M,
 *            C is the 1 by 3 lower left submatrix of M.
 *
 * Input:
 *   in   - 3D affine matrix
 *
 * Output:
 *   out  - inverse of 3D affine matrix
 *
 * Returned value:
 *   TRUE   if input matrix is nonsingular
 *   FALSE  otherwise
 *
 ***/

#include <xos.h>


typedef double Matrix3[3][2];

int ft_inverse (in, out)
    register  Matrix3  in;
    register  Matrix3  out;
{
    register  double    det_1;
              double    pos, neg, temp;

#define ACCUMULATE    \
    if (temp >= 0.0)  \
        pos += temp;  \
    else              \
        neg += temp;

#define PRECISION_LIMIT (1.0e-15)

    /*
     * Calculate the determinant of submatrix A and determine if the
     * the matrix is singular as limited by the double precision
     * floating-point data representation.
     */
    pos = neg = 0.0;
    temp =  in[0][0] * in[1][1];
    ACCUMULATE
    temp = -in[0][1] * in[1][0];
    ACCUMULATE
    det_1 = pos + neg;

    /* Is the submatrix A singular? */
    if ((det_1 == 0.0) || (Abs(det_1 / (pos - neg)) < PRECISION_LIMIT)) {

        /* Matrix M has no inverse */
        /* EPrint("affine_matrix3_inverse: singular matrix\n"); */
        return 0;
    }

    else {
        /* Calculate inverse(A) = adj(A) / det(A) */
        det_1 = 1.0 / det_1;
        out[0][0] =   in[1][1] * det_1;
        out[1][0] = - in[1][0] * det_1;
        out[0][1] = - in[0][1] * det_1;
        out[1][1] =   in[0][0] * det_1;

        /* Calculate -C * inverse(A) */
        out[2][0] = - ( in[2][0] * out[0][0] + in[2][1] * out[1][0] );
        out[2][1] = - ( in[2][0] * out[0][1] + in[2][1] * out[1][1] );

        return 1;
    }
}
