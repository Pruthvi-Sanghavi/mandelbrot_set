# Mandelbrot Set

C++ implementation of [Mandelbrot Set](https://physicspython.wordpress.com/2020/02/16/visualizing-the-mandelbrot-set-using-opengl-part-1/)

#### OpenGL Instructions

##### Check/Install OpenGL

To get the version of OpenGL (or whehter it exists in your computer)
```
glxinfo | grep "OpenGL version" 
```
Output:
```
OpenGL version string: 4.6.0 NVIDIA 460.80
```
If you don't find it use
```
sudo apt-get install mesa-utils
```
and check again.

##### Install GLFW3

GLFW - a small C library that lets you create and manage windows, OpenGL and OpenGL ES contexts and Vulkan surfaces, enumerate monitors and video modes as well as handle inputs such as keyboard, mouse, joystick, clipboard and time.\
Both printf and std::cout can be used in c++. Almost anything from c can be used in c++.

Use this to install:
```
sudo apt-get update
sudo apt-get install libglfw3
sudo apt-get install libglfw3-dev
```

##### Install GLM

GLM is a C++ mathematics library for graphics software based on the OpenGL Shading Language (GLSL) specification.

GLM provides classes and functions designed and implemented with the same naming conventions and functionalities than GLSL so that when a programmer knows GLSL, he knows GLM as well which makes it really easy to use.

This project isn't limited by GLSL features. An extension system, based on the GLSL extension conventions, provides extended capabilities: matrix transformations, quaternions, half-based types, random numbers, etc...

This library works perfectly with OpenGL but it also ensures interoperability with other third party libraries and SDK. It is a good candidate for software rendering (Raytracing / Rasterisation), image processing, physic simulations and any context that requires a simple and convenient mathematics library.

GLM is a header only library. Follow the below given steps :-
```
git clone https://github.com/g-truc/glm.git
```
Once cloned include it in the main file.
For example, for me it is --
```
#include "../lib/glm/glm/vec3.hpp"
#include "../lib/glm/glm/gtx/io.hpp"
```
To test the library, use it as below
```
#include <iostream>
#include "../lib/glm/glm/vec3.hpp"
#include "../lib/glm/glm/gtx/io.hpp"

using namespace std;
using glm::vec3;

int main () {
    vec3 i_am_zero;

    cout << i_am_zero << endl;
    return 0;
}
```
Output should print a zero vector.

#### Notes
Vertices:: these are the points from which shapes like triangles will later be constructed.

Primitives:: basis of more complex shapes.

Vertex Shader:: A vertex shader is a graphics processing function used to add special effects to objects in a 3D environment by performing mathematical operations on the objects' vertex data. Each vertex can be defined by many different variables. For instance, a vertex is always defined by its location in a 3D environment using the x-, y-, and z- coordinates. Vertices may also be defined by colors, coordinates. Vertices may also be defined by colors, textures, and lighting characteristics. Vertex Shaders don't actually change the type of data; they simply change the values of the data, so that a vertex emerges with a different color, different textures, or a different position in space.

Fragment Shader:: The fragment shader processes each individual fragment along with its interpolated attributes and should output the final color. This is usually done by
sampling from a texture using the interpolated texture coordinate vertex attributes or simply outputting a color. In more advanced scenarios, there could
also be calculations related to lighting and shadowing and special effects in this
program. The shader also has the ability to discard certain fragments, which
means that a shape will be see-through there.


