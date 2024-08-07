/*  Copyright (c) 2023, Beamagine

    All rights reserved.

    Redistribution and use in source and binary forms, with or without modification,
    are permitted provided that the following conditions are met:

        - Redistributions of source code must retain the above copyright notice,
          this list of conditions and the following disclaimer.
        - Redistributions in binary form must reproduce the above copyright notice,
          this list of conditions and the following disclaimer in the documentation and/or
          other materials provided with the distribution.
        - Neither the name of copyright holders nor the names of its contributors may be
          used to endorse or promote products derived from this software without specific
          prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS “AS IS” AND ANY
    EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
    MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
    COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
    EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
    SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
    HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
    TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
    EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef BEAMAGINE_H
#define BEAMAGINE_H

#include <stdint.h>
#include <stdbool.h>

typedef void (*l3camErrorCallback)(int32_t const *);

typedef enum sensorTypes {
    sensor_lidar = 1,
    sensor_econ_rgb,
    sensor_pol,
    sensor_thermal,
    sensor_allied_narrow,
    sensor_allied_wide,
    sensor_econ_wide
}sensorTypes;

enum imageTypes {
    image_mono = 1,
    image_rgb,
    //!mono polarimetric modes
    pol_co,
    pol_cross,
    pol_docp,
    pol_grad,
    //!rgb polarimetric modes
    pol_raw,
    pol_aolp,
    pol_dolp,
    pol_hsv,
};

//!thermal image modes
typedef enum thermalTypes{
    thermal_WHITE = 1,
    thermal_BLACK = 17,
    thermal_IRON = 20,
    thermal_COOL = 2,
    thermal_AMBER = 9,
    thermal_INDIGO = 10,
    thermal_TYRIAN = 16,
    thermal_GLORY = 8,
    thermal_ENVY = 16,
    thermal_WHITE_NEW = 100,
    thermal_BLACK_NEW,
    thermal_SPECTRA,
    thermal_PRISM,
    thermal_TYRIAN_NEW,
    thermal_AMBER_NEW,
    thermal_IRON_NEW,
    thermal_HI,
    thermal_HILO,
}thermalTypes;

//!thermal image modes beamagine_app version >= master_2.2.9
typedef enum newThermalTypes{
    new_thermal_WHITE_HOT = 0,
    new_thermal_BLACK_HOT,
    new_thermal_SPECTRA,
    new_thermal_PRISM,
    new_thermal_TYRIAN,
    new_thermal_IRON,
    new_thermal_AMBER,
    new_thermal_HI,
    new_thermal_GREEN,
}newThermalTypes;

typedef enum thermalPipelines{
    thermal_LITE = 0,
    thermal_LEGACY,
    thermal_SEEK,
}thermalPipelines;

enum pointCloudColor{
    RAINBOW = 0,
    RAINBOW_Z,
    INTENSITY,
    RGB_FUSION,
    POLARIMETRIC_FUSION,
    POL_PROCESSED_FUSION,
    THERMAL_FUSION,
    RGBT_FUSION,
    ALLIED_NARROW_FUSION = 12,
    ALLIED_WIDE_FUSION,
    RGB_FE_FUSION,
    THERMAL_FE_FUSION
};

enum alliedCamerasIds{
    wide_camera = 0,
    narrow_camera = 1
};

#define allied_auto_precedence_minimize_noise 0
#define allied_auto_precedence_minimize_blur 1

#define allied_balance_ratio_selector_red 0
#define allied_balance_ratio_selector_blue 1

#define allied_controller_region_auto_mode_region 0
#define allied_controller_region_full_image 4

typedef enum streamingProtocols {
    protocol_raw_udp = 1,
    protocol_gstreamer,
    protocol_rtsp,
}streamingProtocols;

typedef enum econResolutions{
    reso_640_480 = 1,
    reso_1280_720,
    reso_1920_1080
}econResolutions;

typedef struct sensor{
    streamingProtocols protocol;
    sensorTypes sensor_type;
    uint8_t sensor_status;
    uint8_t image_type;
    bool perception_enabled;
    bool sensor_available;
}sensor;

typedef struct l3cam{
    char ip_address[16];
    char serial_number[16];
    char app_version[20];
    uint8_t model;
}l3cam;

#endif // BEAMAGINE_H

