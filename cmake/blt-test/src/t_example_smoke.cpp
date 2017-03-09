/*
 * Copyright (c) 2015, Lawrence Livermore National Security, LLC.
 * Produced at the Lawrence Livermore National Laboratory.
 *
 * All rights reserved.
 *
 * This source code cannot be distributed without permission and
 * further review from Lawrence Livermore National Laboratory.
 */

#include "gtest/gtest.h"
#include "Example.hpp"

//------------------------------------------------------------------------------

TEST(blt_gtest_smoke,basic_assert_example)
{
    Example e;

    EXPECT_TRUE( e.ReturnTrue() );
}