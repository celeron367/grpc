/*
 * Copyright 2017 gRPC authors.
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

/*
 * Automatically generated by tools/codegen/core/gen_stats_data.py
 */

#include "src/core/lib/debug/stats_data.h"
#include "src/core/lib/debug/stats.h"
#include "src/core/lib/iomgr/exec_ctx.h"
const char *grpc_stats_counter_name[GRPC_STATS_COUNTER_COUNT] = {
    "client_calls_created",   "server_calls_created", "syscall_write",
    "syscall_read",           "syscall_poll",         "syscall_wait",
    "histogram_slow_lookups",
};
const char *grpc_stats_histogram_name[GRPC_STATS_HISTOGRAM_COUNT] = {
    "tcp_write_size", "tcp_write_iov_size", "tcp_read_size",
};
const double grpc_stats_table_0[64] = {0,
                                       1,
                                       2,
                                       3,
                                       4,
                                       5.17974600698,
                                       6.70744217421,
                                       8.68571170472,
                                       11.2474451301,
                                       14.5647272503,
                                       18.8603969544,
                                       24.4230164536,
                                       31.6262554885,
                                       40.9539926456,
                                       53.032819969,
                                       68.6741343683,
                                       88.9286433193,
                                       115.156946285,
                                       149.120933174,
                                       193.102139541,
                                       250.055009057,
                                       323.805358672,
                                       419.307378404,
                                       542.976429747,
                                       703.119998467,
                                       910.495751121,
                                       1179.03418281,
                                       1526.77440013,
                                       1977.07590065,
                                       2560.18775048,
                                       3315.28056941,
                                       4293.07782286,
                                       5559.26317765,
                                       7198.89281155,
                                       9322.10907382,
                                       12071.5393129,
                                       15631.8768886,
                                       20242.2879738,
                                       26212.4775761,
                                       33943.4940145,
                                       43954.6693961,
                                       56918.5058232,
                                       73705.8508152,
                                       95444.3966128,
                                       123594.433061,
                                       160046.942783,
                                       207250.628202,
                                       268376.403469,
                                       347530.401059,
                                       450029.801797,
                                       582760.01722,
                                       754637.218056,
                                       977207.279236,
                                       1265421.37565,
                                       1638640.32942,
                                       2121935.1758,
                                       2747771.31348,
                                       3558189.37227,
                                       4607629.29828,
                                       5966587.36485,
                                       7726351.7696,
                                       10005134.9318,
                                       12956014.428,
                                       16777216.0};
const uint8_t grpc_stats_table_1[87] = {
    0,  1,  3,  3,  4,  6,  6,  7,  9,  9,  10, 12, 12, 13, 15, 15, 16, 18,
    18, 19, 21, 21, 22, 24, 24, 25, 27, 27, 28, 30, 30, 31, 32, 34, 34, 36,
    36, 37, 39, 39, 40, 42, 42, 43, 44, 46, 46, 47, 49, 49, 51, 51, 52, 53,
    55, 55, 56, 58, 58, 59, 61, 61, 63, 63, 64, 65, 67, 67, 68, 70, 70, 71,
    73, 73, 75, 75, 76, 77, 79, 79, 80, 82, 82, 83, 85, 85, 87};
const double grpc_stats_table_2[64] = {0,
                                       1,
                                       2,
                                       3,
                                       4,
                                       5,
                                       6,
                                       7,
                                       8,
                                       9,
                                       10,
                                       11,
                                       12.0020736244,
                                       13.0954337532,
                                       14.2883963681,
                                       15.5900350167,
                                       17.0102498252,
                                       18.5598427974,
                                       20.2505999737,
                                       22.0953810747,
                                       24.1082173107,
                                       26.3044181014,
                                       28.7006875181,
                                       31.315251333,
                                       34.1679956422,
                                       37.2806181177,
                                       40.6767930374,
                                       44.3823513489,
                                       48.4254771375,
                                       52.8369219909,
                                       57.6502388927,
                                       62.902037423,
                                       68.6322622068,
                                       74.8844967285,
                                       81.7062948236,
                                       89.1495423679,
                                       97.2708519163,
                                       106.131993291,
                                       115.800363399,
                                       126.34949884,
                                       137.859635225,
                                       150.418317437,
                                       164.121065485,
                                       179.072101023,
                                       195.38514005,
                                       213.184257818,
                                       232.604832535,
                                       253.794575043,
                                       276.914652285,
                                       302.140913126,
                                       329.665225843,
                                       359.696937452,
                                       392.464465978,
                                       428.217037783,
                                       467.226583154,
                                       509.78980457,
                                       556.230433401,
                                       606.901692163,
                                       662.1889811,
                                       722.512809492,
                                       788.331994007,
                                       860.147148411,
                                       938.504491184,
                                       1024.0};
const uint8_t grpc_stats_table_3[52] = {
    0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15, 16, 17,
    18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
    36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 52};
void grpc_stats_inc_tcp_write_size(grpc_exec_ctx *exec_ctx, double value) {
  union {
    double dbl;
    uint64_t uint;
  } _val;
  _val.dbl = value;
  if (_val.dbl < 0) _val.dbl = 0;
  if (_val.dbl < 5.000000) {
    GRPC_STATS_INC_HISTOGRAM((exec_ctx), GRPC_STATS_HISTOGRAM_TCP_WRITE_SIZE,
                             (int)_val.dbl);
  } else {
    if (_val.uint < 4715268809856909312ull) {
      GRPC_STATS_INC_HISTOGRAM(
          (exec_ctx), GRPC_STATS_HISTOGRAM_TCP_WRITE_SIZE,
          grpc_stats_table_1[((_val.uint - 4617315517961601024ull) >> 50)] + 4);
    } else {
      GRPC_STATS_INC_HISTOGRAM(
          (exec_ctx), GRPC_STATS_HISTOGRAM_TCP_WRITE_SIZE,
          grpc_stats_histo_find_bucket_slow((exec_ctx), _val.dbl,
                                            grpc_stats_table_0, 64));
    }
  }
}
void grpc_stats_inc_tcp_write_iov_size(grpc_exec_ctx *exec_ctx, double value) {
  union {
    double dbl;
    uint64_t uint;
  } _val;
  _val.dbl = value;
  if (_val.dbl < 0) _val.dbl = 0;
  if (_val.dbl < 12.000000) {
    GRPC_STATS_INC_HISTOGRAM(
        (exec_ctx), GRPC_STATS_HISTOGRAM_TCP_WRITE_IOV_SIZE, (int)_val.dbl);
  } else {
    if (_val.uint < 4652218415073722368ull) {
      GRPC_STATS_INC_HISTOGRAM(
          (exec_ctx), GRPC_STATS_HISTOGRAM_TCP_WRITE_IOV_SIZE,
          grpc_stats_table_3[((_val.uint - 4622945017495814144ull) >> 49)] +
              11);
    } else {
      GRPC_STATS_INC_HISTOGRAM(
          (exec_ctx), GRPC_STATS_HISTOGRAM_TCP_WRITE_IOV_SIZE,
          grpc_stats_histo_find_bucket_slow((exec_ctx), _val.dbl,
                                            grpc_stats_table_2, 64));
    }
  }
}
void grpc_stats_inc_tcp_read_size(grpc_exec_ctx *exec_ctx, double value) {
  union {
    double dbl;
    uint64_t uint;
  } _val;
  _val.dbl = value;
  if (_val.dbl < 0) _val.dbl = 0;
  if (_val.dbl < 5.000000) {
    GRPC_STATS_INC_HISTOGRAM((exec_ctx), GRPC_STATS_HISTOGRAM_TCP_READ_SIZE,
                             (int)_val.dbl);
  } else {
    if (_val.uint < 4715268809856909312ull) {
      GRPC_STATS_INC_HISTOGRAM(
          (exec_ctx), GRPC_STATS_HISTOGRAM_TCP_READ_SIZE,
          grpc_stats_table_1[((_val.uint - 4617315517961601024ull) >> 50)] + 4);
    } else {
      GRPC_STATS_INC_HISTOGRAM(
          (exec_ctx), GRPC_STATS_HISTOGRAM_TCP_READ_SIZE,
          grpc_stats_histo_find_bucket_slow((exec_ctx), _val.dbl,
                                            grpc_stats_table_0, 64));
    }
  }
}
const int grpc_stats_histo_buckets[3] = {64, 64, 64};
const int grpc_stats_histo_start[3] = {0, 64, 128};
const double *const grpc_stats_histo_bucket_boundaries[3] = {
    grpc_stats_table_0, grpc_stats_table_2, grpc_stats_table_0};
void (*const grpc_stats_inc_histogram[3])(grpc_exec_ctx *exec_ctx, double x) = {
    grpc_stats_inc_tcp_write_size, grpc_stats_inc_tcp_write_iov_size,
    grpc_stats_inc_tcp_read_size};
