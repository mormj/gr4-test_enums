#!/usr/bin/env python3
#
# Copyright 2023 Block Author
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

from gnuradio import gr, gr_unittest, blocks, test_enums

class test_freq_sink(gr_unittest.TestCase):
    def setUp(self):
        self.tb = gr.flowgraph()

    def tearDown(self):
        self.tb = None

    def test_instantiate(self):
        # If this is a templated block, be sure to add the appropriate suffix
        op = test_enums.freq_sink(mode=test_enums.test_enums_python.freq_sink_mode_t.FREQ_SINK_MODE_STREAMING)
        self.assertEqual(op.mode(), test_enums.test_enums_python.freq_sink_mode_t.FREQ_SINK_MODE_STREAMING)

    def test_give_descriptive_name(self):
        # Set up a flowgraph, run, validate the results
        pass


if __name__ == '__main__':
    gr_unittest.run(test_freq_sink)

