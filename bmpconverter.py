from PIL import Image
import os

filename = 'rose.jfif'

image = Image.open(filename)

image.save(f'{os.path.splitext(os.path.basename(filename))[0]}.bmp')
