/* -*- c++ -*- */
/*
 * Copyright 2023 Block Author
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include "freq_sink_cpu.h"
#include "freq_sink_cpu_gen.h"

namespace gr {
namespace test_enums {

freq_sink_cpu::freq_sink_cpu(block_args args) : INHERITED_CONSTRUCTORS {}

work_return_t freq_sink_cpu::work(work_io& wio)
{
    // Do <+signal processing+>
    // Block specific code goes here
    return work_return_t::OK;
}


} // namespace test_enums
} // namespace gr