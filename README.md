ODAS 
====

ODAS stands for Open embeddeD Audition System. This is a library dedicated to perform sound source localization, tracking, separation and post-filtering. ODAS is coded entirely in C, for more portability, and is optimized to run easily on low-cost embedded hardware. ODAS is free and open source.

The [ODAS wiki](https://github.com/introlab/odas/wiki) describes how to build and run the software.

ROS: Please visite the [odas_ros project](https://github.com/introlab/odas_ros).

[![ODAS Demonstration](https://img.youtube.com/vi/n7y2rLAnd5I/0.jpg)](https://youtu.be/n7y2rLAnd5I)

# MacOS Build Support
This branch implements macOS build support. It's more hacky proof of concept and not intended for real use. Right now the project builds and can be run using single-threaded mode:

```bash
# install dependencies
brew install cmake fftw libconfig portaudio pkg-config

# build
mkdir build && cd build
cmake ..

make -j4

cd bin
# be sure to copy the config here
./odaslive -s -v -c config/odaslive/respeaker_4_mic_array_macos.cfg
```

# License

ODAS is provided with the [MIT](LICENSE) license.

# Graphical User Interface (GUI) for Data Visualization

Please have a look at the [odas_web](https://github.com/introlab/odas_web) project.
![GUI](https://github.com/introlab/odas_web/blob/master/screenshots/live_data.png)


# Open Source Hardware from IntRoLab

* [8SoundsUSB](https://sourceforge.net/projects/eightsoundsusb/), 8 inputs, USB powered, configurable microphone array.
* [16SoundsUSB](https://github.com/introlab/16SoundsUSB), 16 inputs, USB powered, configurable microphone array.

# Papers

You can find more information about the methods implemented in ODAS in these papers:

* F. Grondin, D. Létourneau, C. Godin, J.-S. Lauzon, J. Vincent, S. Michaud, S. Faucher, F. Michaud, [ODAS: Open embeddeD Audition System](https://www.frontiersin.org/article/10.3389/frobt.2022.854444), Frontiers in Robotics and AI, Volume 9, 2022 

* F. Grondin and F. Michaud, [Lightweight and Optimized Sound Source Localization and Tracking Methods for Opened and Closed Microphone Array Configurations](https://arxiv.org/pdf/1812.00115), Robotics and Autonomous Systems, 2019 
