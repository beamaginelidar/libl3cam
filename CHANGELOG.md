# Change log for libL3Cam

All notable changes to the libL3Cam library will be documented in this file.

## [10/07/2024] VERSION 0.1.18R

### Added 

- Thermal and RGB fisheye cameras fusion
- Max bias value to 4000
- Internal error fixes with point cloud color representation
- Autobias parameter
- Bias short range parameter

### Changed

### Fixed

### Removed

### Known bugs

### Issues

This version is not fully compatible with l3cam devices with software version older than 2.2.6. When connected with a lower version, the find devices and get sensors available calls will last longer but wont notify timeout error.

Devices with older versions will notify all sensors available and error in the sensors that internally have not been found.



## [13/03/2024] VERSION 0.1.17

### Added

- Function to enable/Disable the raw thermal temperature images sending over UDP
- If response received does not match any command, send error to user
- New enum __newThermalTypes__ to change the color of the thermal LUT for the latest seek thermal library version
- New function to change the thermal visualization image __Lite, Legacy or Seek__

### Changed

### Fixed

### Removed

- Duplicate definition of __L3CAM_NO_SENSORS_AVAILABLE__ in beamErrors.h

### Known bugs

### Issues

This version is not fully compatible with l3cam devices with software version older than 2.2.6. When connected with a lower version, the find devices and get sensors available calls will last longer but wont notify timeout error.

Devices with older versions will notify all sensors available and error in the sensors that internally have not been found.


## [0.1.15R] - 22/09/2023

### Added

- Internal improvements for network management
- New array to store beamagine_app version in l3cam structure
- Internal calls to initialize the serial number and version in l3cam struct
- Internal calls to get configured and available sensors

### Changed

### Fixed

### Removed

- Unused error codes
- ansi_c.h references

### Known bugs

### Issues

This version is not fully compatible with l3cam devices with software version older than 2.2.6. When connected with a lower version, the find devices and get sensors available calls will last longer but wont notify timeout error.

Devices with older versions will notify all sensors available and error in the sensors that internally have not been found.
