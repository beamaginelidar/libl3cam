# Change log for libL3Cam

All notable changes to the libL3Cam library will be documented in this file.

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

- This version is not fully compatible with l3cam devices with software version older than 2.2.6. When connected with a lower version, the find devices and get sensors available calls will last longer but wont notify timeout error.

- Devices with older versions will notify all sensors available and error in the sensors that internally have not been found.

- On getting the network configuration, there's no info of the state of the dhcp parameter.

- There are no getters for the parameters of all sensors except for the allied cameras.
