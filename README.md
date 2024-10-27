<div align="center">

<h1>MacroPad</h1>

<div>
        <a href="https://github.com/robinaerts/macropad/issues">Report Bug</a>
    ·
    <a href="https://github.com/robinaerts/macropad/issues">Request Feature</a>
  </p>
</div>
</div>
<br/>

<!-- ABOUT THE PROJECT -->

## About The Project

![MacroPad side view](/preview/case_side.png)

An easy to customize macropad with 9 keys and two rotary encoders. Program the macros to do anything you want on your PC.

<p align="right">(<a href="#top">back to top</a>)</p>

### Built With

<br/>

![Arduino Badge](https://img.shields.io/badge/Arduino-00878F?logo=arduino&logoColor=fff&style=for-the-badge)

![KiCad Badge](https://img.shields.io/badge/KiCad-314CB0?logo=kicad&logoColor=fff&style=for-the-badge)

Fusion360

### Hardware used:

<img src="preview/board_side.png"/>

- 2 Rotary encoders
- 9 MX cherry switches
- Arduino Pro Micro

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- GETTING STARTED -->

## Getting Started

Just plug in the device into your device, and it should be ready to go.

### Customization

Everything you need to build this yourself, is here ordered in the following file hierarchy.

- <strong>PCB Design (KiCad):</strong> /PCB
- <strong>3D Case Design (Fusion):</strong> /case
- <strong>Firmware:</strong> /code

## PCB

<img src="preview/pcb_front.png"/>
<img src="preview/pcb_back.png"/>

## CASE

<img src="preview/case_top.png">

3D case and keycaps designed in Fusion360.

## FIRMWARE

The firmware currently is all written in one .ino file. It uses the HID-project library to make the Arduino Pro Micro act as an HID device.

To edit the macros, just edit this file and flash it back on the pro micro. With more complex mappings, it might be easier to integrate AutoHotkey in the future.

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- LICENSE -->

## License

Distributed under the MIT License.

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- CONTACT -->

## Contact

Robin Aerts - nibor.aerts@gmail.com<br>
Website - [robinaerts.be](https://robinaerts.be)

<p align="right">(<a href="#top">back to top</a>)</p>

[preview]: ./assets/images/banner.jpg
