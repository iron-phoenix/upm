/*
 * Author: Brendan Le Foll <brendan.le.foll@intel.com>
 * Copyright (c) 2014 Intel Corporation.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#pragma once

#include <string>
#include <mraa/spi.h>
#include <mraa/gpio.h>

namespace upm {

/**
 * @brief C++ API for MAX31855
 *
 * This file defines the max31855 SPI sensor
 *
 * @snippet examples/max31855.cxx Interesting
 *
 */
 //! [Interesting]
class MAX31855 {
    public:
        /**
         * Instanciates a MAX31855 object
         *
         * @param bus The spi bus to use
         * @param cs The chip select pin
         */
        MAX31855(int bus, int cs);

        /**
         * MAX31855 object destructor
         */
        ~MAX31855();

        /**
         * Get the distance from the sensor
         *
         * @return value in degrees celcius
         */
        double getTemp();

    private:
        mraa_spi_context m_sensor;
        mraa_gpio_context m_gpio;
};
//! [Interesting]

}
