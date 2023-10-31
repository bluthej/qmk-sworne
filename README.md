# qmk-sworne

This layout is inspired by [Seniply by Stevep99](https://stevep99.github.io/seniply/) and by [zmk-sweep](https://github.com/duckyb/zmk-sweep).

Adapted from the default Corne layout for my bépo layout which does not use the bottom-corner pinky keys and the centermost thumb keys.

The goal is to eventually flash it on a mix between a [Sweep](https://github.com/davidphilipbarr/Sweep) and a [Corne](https://github.com/foostan/crkbd), hence the name.


# Troubleshooting

I regularly have issues when I try to re-flash my microcontrollers. Here are some tips that have helped me in the past:

- The command `qmk flash` should be run from the root of the `qmk_firmware` repo
- Run `qmk doctor` if something is not working correctly. This usually fixes things.
- If the microcontroller is not resetting, use `lsusb -t` (from the `usbutils` package) to check if the USB device is there and if the drivers are found.
