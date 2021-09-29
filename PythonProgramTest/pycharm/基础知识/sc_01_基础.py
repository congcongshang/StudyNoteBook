"""

linux 设置pycharm

"""

# tar -zxvf  pycharm-professional-2017.tar.gz
# sudo mv pycharm-2017.1.3/ /opt/
# cd /opt/pycharm-2017.1.3/bin
# ./pycharm.sh

# 我是注释,不用理我
# from typing import List
# from typing import List
#
#
# def canEat(self, candiesCount: List[int], queries: List[List[int]]) -> List[bool]:
#     return [0,0]
#
#
# print("heool")
# -----------------------------------------------------------------------------------------------------
# n=int(input("请输入一个整数:"))
# sum = 0
# for i in range ( n+1 ):
#     sum += i
# print("1~%d求和的结果为%d"%(n,sum))
#
# --------------------------------------------------------------------------------------------------------

# import math
# math.sin(3)
#
# from math import *
# sin(3)


'''
加法 +
减法 -
乘法 *
除法 /
整除 //
求余 %
乘方 **

ceil(x)     大于或等于x的整数
exp(x)      e的x次方
factorial(x)    n的阶乘
log(x)      以e为底的x的对数
log(x,b)    以b为底的x的对数
pow(x,y)    x的y次方
sqrt(x)     x的平方根
radians(x)  将x度转换为弧度数
degrees(x)  将x弧度转换为度数 
cos(x)      x的余弦
sin(x)      x的正弦
tan(x)      x的正切

len("字符串")      返回字符串的长度
字符串拼接 + 
字符串重复 * 
name.capitalize()   name的第一个单词首字母大写
name.strip()        name的前后均没有空字符

类型转换
浮点数     float(x)
字符串     str(x)
整数       int(x)  round(x)

逻辑运算
相等  ==
不等  !=
非    not
与    and
或    or

print(2,'shang',5.0,"你好",sep='.',end=" ")
标识符: 非数字开头的字母数字下划线组合
'''
# name = input("Please check in your name")

for row in range(1,10):
    for col in range(1,10):
        if col > row :
            break
        prod = row * col
        print(str(col) + '*' + str(row) + "=" + str(prod), '  ', end='')
        if prod < 10:
            print(' ',end = '')
    print()