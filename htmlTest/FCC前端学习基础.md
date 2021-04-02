<h1> freecodecamp 学习笔记</h1>

[1. Basic HTML & HTML5](#A001)

​    [1.eg01    label和input标签的使用](#egA00101)

[2. Basic CSS](#A002)

## <a name="A001">1. Basic HTML & HTML5</a>

-   h1~h6  标题

-   p           段落

-   ```<!-- 注释内容 -->```   1.写给其他程序员 2.暂时不用的代码

-   img       图片        src-图片路径  alt-替换文字

-   a            链接        href-链接地址(可以是内部id)

-   ul    li     列表(无序)

-   ol    li     列表(有序)

-   input     输入框    type="text"  placeholder-占位     required-必填项

-   form     表单        action="/submit-cat-photo"

-   button  按钮         type="submit"       提交表单到action地址

-   input     单选        type="radio"           name-确定同一组单选

    ​                              value-确定提交信息

    ​                               checked 默认选中

- input      复选        type="checkbox"      name-确定同一组复选

    ​                               value-确定提交信息   即name=value

    ​                               checked 默认选中

- div                               代码分块组织

- !DOCTYPE html         HTML5文档标识

- head  body                头部信息和文档主体

- html5元素:       main、header、footer、nav、video、article、section

<a name="egA00101">eg.01:</a>


```html
<label for="indoor">
   <input id="indoor" type="radio" value="indoor" name="indoor-outdoor">Indoor
</label>
```

## <a name="A002">2. Basic CSS</a>

| 属性             | 含义     | 数值                                         |
| :--------------- | :------- | :------------------------------------------- |
| color            | 颜色     | hsl()  \| rgb() \| rgba() \| #FFFFFF \| #FFF |
| font-size        | 字体大小 | px                                           |
| font-family      | 字体样式 | 黑体/微软雅黑/宋体/楷体                      |
| border           | 边框     | 宽度  样式  颜色                             |
| border-width     | 边框宽度 | px                                           |
| border-style     | 边框样式 | solid实现                                    |
| border-color     | 边框颜色 | 同 color                                     |
| border-radius    | 圆角     | px 或 %                                      |
| background-color | 背景颜色 |                                              |
| padding          | 内边距   | 上右下左 \| 上(左右)下 \| (上下)(左右)       |
| margin           | 外边距   |                                              |
|                  |          |                                              |

