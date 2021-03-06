/*
 * Copyright 2016-2017 Flatiron Institute, Simons Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef P_BANDPASS_FILTER_H
#define P_BANDPASS_FILTER_H

#include <QString>

struct Bandpass_filter_opts {
    double samplerate = 0;
    double freq_min = 0;
    double freq_max = 0;
    double freq_wid = 0;
    double quantization_unit = 0;
    int subsample_factor = 1;

    bool requirements_only = false;
    double expected_peak_ram_mb = -1;
};

bool p_bandpass_filter(QString timeseries, QString timeseries_out, Bandpass_filter_opts &opts);

#endif // P_BANDPASS_FILTER_H
