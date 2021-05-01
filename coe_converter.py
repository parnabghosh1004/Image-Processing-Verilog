from PIL import Image
import os


def convert(IMAGE_FILE):

    try:
        image = Image.open(IMAGE_FILE)
    except:
        print("Error opening the file...!")
        return

    if image.mode != 'RGB':
        image = img.convert(mode='RGB')

    coe = open(f'{os.path.splitext(os.path.basename(IMAGE_FILE))[0]}.coe', 'w')
    height, width = image.height, image.width

    coe.write(f';Height:{height},Width:{width}\n')
    coe.write("memory_initialization_radix=2;\nmemory_initialization_vector=\n")

    for h in range(height):
        for w in range(width):
            r, g, b = image.getpixel((w, h))
            Rb = bin(r)[2:].zfill(8)
            Gb = bin(g)[2:].zfill(8)
            Bb = bin(b)[2:].zfill(8)
            coe.write(f'{Rb}{Gb}{Bb}')
            if w == width-1 and h == height-1:
                coe.write(";")
            else:
                coe.write(",\n")
    coe.close()
    print("Converted !")


if __name__ == "__main__":
    IMAGE_FILE = 'flower.jpg'
    convert(IMAGE_FILE)
