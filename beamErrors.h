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

/*
LIST OF BEAMAGINE ERRORS
*/

#ifndef BEAMERRORS_H
#define BEAMERRORS_H


#define L3CAM_OK    0

//!INTERNAL ERRORS
#define L3CAM_UNHANDLED_ERROR              2
#define L3CAM_ERROR_DEVICE_IS_STREAMING    3
#define L3CAM_ERROR_UNDEFINED_PROTOCOL     4
#define L3CAM_ERROR_DEVICE_IS_STARTED      5

#define L3CAM_NO_SENSORS_AVAILABLE                  11
#define L3CAM_INVALID_PARAMETERS                    12
#define L3CAM_ERROR_BUILDING_RTSP_PIPELINE          50
#define L3CAM_ERROR_STARTING_RTSP_SENDER            51
#define L3CAM_ERROR_RTSP_PIPELINE_EMPTY             52
#define L3CAM_ERROR_GETTING_NETWORK_GATEWAY         70
#define L3CAM_ERROR_GETTING_NETWORK_ADDRESS_INFO    71
#define L3CAM_ERROR_GETTING_NETWORK_DHCP_INFO       72

//!LIDAR ERRORS
#define ERROR_APD_CURRENT_NOT_DEFINED           100
#define L3CAM_ERROR_APD_CURRENT_SIZE            101
#define ERROR_LIDAR_TIMED_OUT                   172

#define L3CAM_TIMEOUT_ERROR                     210
#define L3CAM_ERROR_OUT_OF_MEMORY               211

#define L3CAM_UNDEFINED_SENSOR                  222
#define L3CAM_VALUE_OUT_OF_RANGE                223
#define L3CAM_SENSOR_NOT_AVAILABLE              224
#define L3CAM_FORBIDEN_SENSOR                   225
#define L3CAM_VALUE_BAD_PARAMETER               226

#define L3CAM_ERROR_CREATING_TCP_CLIENT_SOCKET  230
#define L3CAM_ERROR_INITALIZING_WSA             231
#define L3CAM_ERROR_CONNECTING_WITH_TCP_SERVER  232
#define L3CAM_ERROR_SENDING_TCP_MESSAGE         233
#define L3CAM_ERROR_CREATING_TCP_SERVER_SOCKET  234
#define L3CAM_ERROR_BINDING_SOCKET              235
#define L3CAM_ERROR_STARTING_TCP_SERVER         236
#define L3CAM_ERROR_ACCEPTING_TCP_CLIENT        237
#define L3CAM_ERROR_DEVICE_DISCONNECTED         238


//!POLARIMETRIC ERRORS
#define ERROR_POL_STD_EXCEPTION             300
#define ERROR_POL_RUNTIME_EXCEPTION         301
#define ERROR_POL_GENERIC_EXCEPTION         302
#define ERROR_POL_TIMEOUT_EXCEPTION         303
#define ERROR_POL_UNDEFINED_ERROR           304
#define ERROR_POL_PERCEPTION_EXCEPTION      305
#define ERROR_POL_GETTING_FRAME             306


//!THERMAL ERRORS
#define ERROR_OPENING_THERMAL_CAMERA                   400
#define ERROR_THERMAL_IMAGE_SIZE                       401
#define ERROR_CLOSING_THERMAL_CAMERA                   402
#define ERROR_SETTING_THERMAL_CAMERA_LUT               403
#define ERROR_GETTING_THERMAL_CAMERA_LUT               404
#define ERROR_SETTING_THERMAL_CAMERA_SHARPEN           405
#define ERROR_SETTING_THERMAL_CAMERA_SMOOTH            406
#define ERROR_GETTING_THERMAL_CAMERA_SYSTEM            407
#define ERROR_SETTING_THERMAL_CAMERA_SYSTEM            408
#define ERROR_PERCEPTION_THERMAL_CAMERA                409
#define ERROR_THERMAL_CAMERA_TIMEOUT                   410
#define ERROR_SETTING_THERMAL_CAMERA_SHUTTER           411
#define ERROR_INITIALIZING_THERMAL_CAMERA              412
#define ERROR_CREATING_THERMAL_CAMERA_CALLBACK         413
#define ERROR_RELEASING_THERMAL_CAMERA                 414
#define ERROR_STARTING_THERMAL_CAMERA                  415
#define ERROR_SETTING_THERMAL_CAMERA_PIPELINE          416
#define ERROR_GETTING_THERMAL_CAMERA_SERIAL_NUMBER     417
#define ERROR_TRIGGERING_THERMAL_CAMERA_SHUTTER        418


//!ALLIED CAMERAS ERRORS
#define ERROR_ALLIED_PARAMETER_NOT_DEFINED                      500
#define ERROR_ALLIED_BLACK_LEVEL_NOT_AVAILABLE                  501
#define ERROR_ALLIED_CONFIGURING_BLACK_LEVEL                    502
#define ERROR_ALLIED_CONFIGURING_EXPOSURE_TIME                  503
#define ERROR_ALLIED_EXPOSURE_TIME_NOT_AVAILABLE                504
#define ERROR_ALLIED_CONFIGURUNG_AUTO_EXPOSURE_TIME             505
#define ERROR_ALLIED_AUTO_EXPOSURE_TIME_NOT_AVAILABLE           506
#define ERROR_ALLIED_CONFIGURING_AUTO_EXPOSURE_RANGE_MAX        507
#define ERROR_ALLIED_AUTO_EXPOSURE_MAX_NOT_AVAILABLE            508
#define ERROR_ALLIED_CONFIGURING_AUTO_EXPOSURE_RANGE_MIN        509
#define ERROR_ALLIED_AUTO_EXPOSURE_MIN_NOT_AVAILABLE            510
#define ERROR_ALLIED_CONFIGURING_GAIN                           511
#define ERROR_ALLIED_GAIN_NOT_AVAILABLE                         512
#define ERROR_ALLIED_CONFIGURUNG_AUTO_GAIN                      513
#define ERROR_ALLIED_AUTO_GAIN_NOT_AVAILABLE                    514
#define ERROR_ALLIED_CONFIGURING_AUTO_GAIN_RANGE_MAX            515
#define ERROR_ALLIED_AUTO_GAIN_MAX_NOT_AVAILABLE                516
#define ERROR_ALLIED_CONFIGURING_AUTO_GAIN_RANGE_MIN            517
#define ERROR_ALLIED_AUTO_GAIN_MIN_NOT_AVAILABLE                518
#define ERROR_ALLIED_CONFIGURING_GAMMA                          519
#define ERROR_ALLIED_GAMMA_NOT_AVAILABLE                        520
#define ERROR_ALLIED_CONFIGURING_SATURATION                     521
#define ERROR_ALLIED_SATURATION_NOT_AVAILABLE                   522
#define ERROR_ALLIED_CONFIGURING_SHARPNESS                      523
#define ERROR_ALLIED_SHARPNESS_NOT_AVAILABLE                    524
#define ERROR_ALLIED_CONFIGURING_HUE                            525
#define ERROR_ALLIED_HUE_NOT_AVAILABLE                          526
#define ERROR_ALLIED_CONFIGURING_INTENSITY_AUTO_PRECEDENCE      527
#define ERROR_ALLIED_INTENSITY_AUTO_PRECEDENCE_NOT_AVAILABLE    528
#define ERROR_ALLIED_CONFIGURING_BALANCE_RATIO_SELECTOR         529
#define ERROR_ALLIED_BALANCE_RATIO_SELECTOR_NOT_AVAILABLE       530
#define ERROR_ALLIED_CONFIGURING_BALANCE_RATIO                  531
#define ERROR_ALLIED_BALANCE_RATIO_NOT_AVAILABLE                532
#define ERROR_ALLIED_CONFIGURUNG_AUTO_BALANCE_WHITE             533
#define ERROR_ALLIED_AUTO_BALANCE_WHITE_NOT_AVAILABLE           534
#define ERROR_ALLIED_CONFIGURING_BALANCE_WHITE_AUTO_RATE        535
#define ERROR_ALLIED_BALANCE_WHITE_AUTO_RATE_NOT_AVAILABLE      536
#define ERROR_ALLIED_CONFIGURING_WHITE_AUTO_TOLERANCE           537
#define ERROR_ALLIED_WHITE_AUTO_TOLERANCE_NOT_AVAILABLE         538
#define ERROR_ALLIED_CONFIGURING_AUTO_MODE_REGION_HEIGHT        539
#define ERROR_ALLIED_AUTO_MODE_REGION_HEIGHT_NOT_AVAILABLE      540
#define ERROR_ALLIED_CONFIGURING_AUTO_MODE_REGION_WIDTH         541
#define ERROR_ALLIED_AUTO_MODE_REGION_WIDTH_NOT_AVAILABLE       542
#define ERROR_ALLIED_CONFIGURING_INTENSITY_CONTROLLER_REGION    543
#define ERROR_ALLIED_INTENSITY_CONTROLLER_REGION_NOT_AVAILABLE  544
#define ERROR_ALLIED_CONFIGURING_INTENSITY_CONTROLLER_TARGET    545
#define ERROR_ALLIED_INTENSITY_CONTROLLER_TARGET_NOT_AVAILABLE  546
#define ERROR_ALLIED_CONFIGURING_MAX_DRIVER_BUFFERS_COUNT       547
#define ERROR_ALLIED_MAX_DRIVER_BUFFERS_COUNT_NOT_AVAILABLE     548
#define ERROR_ALLIED_GETTING_BLACK_LEVEL                        549
#define ERROR_ALLIED_GETTING_EXPOSURE_TIME                      550
#define ERROR_ALLIED_GETTING_AUTO_EXPOSURE_TIME                 551
#define ERROR_ALLIED_GETTING_AUTO_EXPOSURE_RANGE_MAX            552
#define ERROR_ALLIED_GETTING_AUTO_EXPOSURE_RANGE_MIN            553
#define ERROR_ALLIED_GETTING_GAIN                               554
#define ERROR_ALLIED_GETTING_AUTO_GAIN                          555
#define ERROR_ALLIED_GETTING_AUTO_GAIN_RANGE_MAX                556
#define ERROR_ALLIED_GETTING_AUTO_GAIN_RANGE_MIN                557
#define ERROR_ALLIED_GETTING_GAMMA                              558
#define ERROR_ALLIED_GETTING_SATURATION                         559
#define ERROR_ALLIED_GETTING_SHARPNESS                          560
#define ERROR_ALLIED_GETTING_HUE                                561
#define ERROR_ALLIED_GETTING_INTENSITY_AUTO_PRECEDENCE          562
#define ERROR_ALLIED_GETTING_BALANCE_RATIO_SELECTOR             563
#define ERROR_ALLIED_GETTING_BALANCE_RATIO                      564
#define ERROR_ALLIED_GETTING_AUTO_BALANCE_WHITE                 565
#define ERROR_ALLIED_GETTING_BALANCE_WHITE_AUTO_RATE            566
#define ERROR_ALLIED_GETTING_WHITE_AUTO_TOLERANCE               567
#define ERROR_ALLIED_GETTING_AUTO_MODE_REGION_HEIGHT            568
#define ERROR_ALLIED_GETTING_AUTO_MODE_REGION_WIDTH             569
#define ERROR_ALLIED_GETTING_INTENSITY_CONTROLLER_REGION        570
#define ERROR_ALLIED_GETTING_INTENSITY_CONTROLLER_TARGET        571
#define ERROR_ALLIED_GETTING_MAX_DRIVER_BUFFERS_COUNT           572

//!ECON CAMERA ERRORS
#define ERROR_OPENING_ECON_CAMERA               620
#define ERROR_SETTING_ECON_CAMERA_PARAMETER     621
#define ERROR_SETTING_ECON_DEFAULT              622

#endif //BEAMERRORS_H
