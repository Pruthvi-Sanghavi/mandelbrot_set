# Mandelbrot Set

C++ implementation of [Mandelbrot Set](https://physicspython.wordpress.com/2020/02/16/visualizing-the-mandelbrot-set-using-opengl-part-1/)


#### Notes
Vertices:: these are the points from which shapes like triangles will later be constructed.\
Primitives:: basis of more complex shapes.\
Vertex Shader:: A vertex shader is a graphics processing function used to add special effects to objects in a 3D environment by performing mathematical operations on the objects' vertex data. Each vertex can be defined by many different variables. For instance, a vertex is always defined by its location in a 3D environment using the x-, y-, and z- coordinates. Vertices may also be defined by colors, coordinates. Vertices may also be defined by colors, textures, and lighting characteristics. Vertex Shaders don't actually change the type of data; they simply change the values of the data, so that a vertex emerges with a different color, different textures, or a different position in space.\
Fragment Shader:: The fragment shader processes each individual fragment along with its interpolated attributes and should output the final color. This is usually done by
sampling from a texture using the interpolated texture coordinate vertex attributes or simply outputting a color. In more advanced scenarios, there could
also be calculations related to lighting and shadowing and special effects in this
program. The shader also has the ability to discard certain fragments, which
means that a shape will be see-through there.


