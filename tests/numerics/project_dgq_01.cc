// ---------------------------------------------------------------------
//
// Copyright (C) 2006 - 2018 by the deal.II authors
//
// This file is part of the deal.II library.
//
// The deal.II library is free software; you can use it, redistribute
// it, and/or modify it under the terms of the GNU Lesser General
// Public License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full text of the license can be found in the file LICENSE.md at
// the top level directory of deal.II.
//
// ---------------------------------------------------------------------



// check that VectorTools::project works for DGQ elements correctly

#include "project_common.h"


template <int dim>
void
test()
{
  for (unsigned int p = 0; p < 6 - dim; ++p)
    test_no_hanging_nodes(FE_DGQ<dim>(p), p);
}
