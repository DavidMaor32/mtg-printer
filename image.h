#ifndef MTG_IMAGE_H
#define MTG_IMAGE_H

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

#define STB_IMAGE_RESIZE_IMPLEMENTATION
#include "stb_image_resize2.h"

#include <stdbool.h>
#include "types/byte.h"

/// @brief converts given png/jpeg image to bitmap
/// @param path_img path to png/jpeg image
/// @param path_dest path to save the result
/// @return true if succeeded, else false.
bool to_bitmap(const char* path_img, const char* path_dest);

/// @brief converts given bitmap to monochrome
/// @param path_bmp path to bitmap image
/// @param path_dest path to save the result
/// @return true if succeeded, else false.
bool to_mono(const char* path_bmp, const char* path_dest);


#endif