/* mpc_cmp -- Compare a complex number to a non-negative integer.

Copyright (C) 2005 Andreas Enge

This file is part of the MPC Library.

The MPC Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The MPC Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the MPC Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */

#include "gmp.h"
#include "mpfr.h"
#include "mpc.h"

/* return 0 iff a = b */
int
mpc_cmp_ui (mpc_srcptr a, unsigned long int b)
{
  int cmp_re, cmp_im;

  cmp_re = mpfr_cmp_ui (MPC_RE(a), b);
  cmp_im = mpfr_cmp_ui (MPC_IM(a), 0);
  
  return MPC_INEX(cmp_re, cmp_im);
}