from PIL import Image
import os
import numpy


def converttoimg(filename):
    imgdata = []
    file = open(filename, 'r')
    fileline = file.readlines()
    for line in fileline[2:]:
        rgbtuple = (int(line[:8], 2), int(line[8:16], 2), int(line[16:24], 2))
        imgdata.append(rgbtuple)

    SIZE = (167, 250)
    image = Image.new('RGB', SIZE)
    image.putdata(imgdata)
    image.save(f'{os.path.splitext(os.path.basename(filename))[0]}.png')


if __name__ == '__main__':
    filename = 'thresholding.coe'
    converttoimg(filename)
