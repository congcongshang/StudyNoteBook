from sc_function import *
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

name = input("Please check in your name")
print(2,'shang',5.0,"你好",sep='.',end=" ")
标识符: 非数字开头的字母数字下划线组合
全局变量: 函数内部必须加global才能访问到全局变量
'''


def greet(name, greeting="Hello"):
    """函数默认值
    greet('Bob')
    greet('Lily',"Good Morning")
    """
    print(greeting,name+'!')


def main():

    print("Hello World!")
    pass




main()





