/* -*- c++ -*- */
/*
 * Copyright 2023 Block Author
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#pragma once

#include <gnuradio/test_enums/freq_sink.h>

namespace gr {
namespace test_enums {

class freq_sink_cpu : public virtual freq_sink
{
public:
    freq_sink_cpu(block_args args);
    work_return_t work(work_io& wio) override;

private:
    // private variables here
};

} // namespace test_enums
} // namespace gr