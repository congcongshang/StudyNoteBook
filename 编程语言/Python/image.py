# -*- coding:utf-8 -*-
"""
PaintedCat@20210123
"""

from PIL import Image


def topicture(size, infile, outfile):
    
    width, height = size
    C = width / height  # C 标准宽高比

    try:
        im = Image.open(infile)
        w, h = im.size  # 输入图片的尺寸

        if w / h > C:  # 输入的宽高比 > C ,说明 输入的图片w太大，需要切w
            left = (w - h * C) / 2
            upper = 0
            right = (w - h * C) / 2 + h * C
            lower = h
        else:
            left = 0            
            upper = (h - w / C) / 2
            right = w
            lower = (h - w / C) / 2 + w / C
        region = im.crop((left, upper, right, lower),)  # 裁剪；可以理解成 （0，0）和（100，600） 两个点来定矩形，左上顶点为原点
        region.thumbnail(size)  # 缩放 size 是一个二元元组，(width,height) 若比例不一致的话，按照原图的比例来
        region.save(outfile)
    except IOError:
        print("没有完成该图片的处理：", infile)


if __name__ == '__main__':
    ''' 该方法能将图片从中间剪切，再按照缩放成要求的大小后 输出'''
    size = (200, 200) # 参数1 输出的图片宽高
    infile = '001.jpg' # 参数2  输入的图片路径
    outfile = '002.jpg'   # 参数3 输出的图片路径
    # topicture(size, infile, outfile)
    
    try:
        im = Image.open(infile)
        w, h = im.size  # 输入图片的尺寸
        region = im.crop((0, 0, w, h),)
        region.thumbnail(size)
        region.save(outfile)
    except IOError:
        print("没有完成该图片的处理：", infile)
