
/**
 *  绘制字体
 *  对象,文本,起始坐标,旋转度数,字体大小,颜色,字体
 * */
 function drawFont(c,Text,xText,yText,roteSize=0,fontSize=20,fontStyle='#000',familyFont='宋体'){
    c.save();
    c.font = `${fontSize}px `+familyFont;
    c.fillStyle = fontStyle;

    var { width: wText } = c.measureText(Text);
    c.translate(xText + wText / 2, yText - fontSize / 2);
    var deg = Math.PI / 180 * roteSize;
    c.rotate(deg);
    c.fillText(Text, -wText / 2, fontSize / 2);
    c.restore();
}
/***
 * 画虚线
 * 对象,起始点坐标,结束点坐标,颜色,线宽,间隙宽,段长
 * 核心: 计算起始点角度,判断x和y正负,画短线
 * */
function drawPointLine(c, x1, y1, x2, y2, gapLength=3, pointLength=8,color='#000', width=1 ) {
    var k = Math.abs(y2 - y1) / Math.abs(x2 - x1);
    var deg = Math.atan(k);
    var gapx = gapLength * Math.cos(deg);
    var gapy = gapLength * Math.sin(deg);
    var poix = pointLength * Math.cos(deg);
    var poiy = pointLength * Math.sin(deg);
    if (x2 - x1 < 0) {
        if (y2 - y1 < 0) {
            for (var x = x1, y = y1; x > x2;) {
                drawLine(c, x, y, x - poix, y - poiy, color, width);
                x = x - poix - gapx;
                y = y - poiy - gapy;
            }
        } else {
            for (var x = x1, y = y1; x > x2;) {
                drawLine(c, x, y, x - poix, y + poiy, color, width);
                x = x - poix - gapx;
                y = y + poiy + gapy;
            }
        }
    } else {
        if (y2 - y1 < 0) {
            for (var x = x1, y = y1; x < x2;) {
                drawLine(c, x, y, x + poix, y - poiy, color, width);
                x = x + poix + gapx;
                y = y - poiy - gapy;
            }
        } else {
            for (var x = x1, y = y1; x < x2;) {
                drawLine(c, x, y, x + poix, y + poiy, color, width);
                x = x + poix + gapx;
                y = y + poiy + gapy;
            }
        }
    }
}

/***
 * 画射线
 * 对象,起始点坐标,结束点坐标,线长,角度,颜色,线宽
 * 核心: 计算角度和线长确定结束点坐标
 * */
function drawRayLine(c,x1,y1,length,rote,color='#000',width=1){
    var deg = Math.PI / 180 * rote;
    var x2 = length * Math.cos(deg);
    var y2 = length * Math.sin(deg);
    drawLine(c, x1, y1, x1 + x2, y1 - y2, color, width);
}

/**
 *  画直线
 *  对象,起始坐标,结束坐标,颜色,线宽
 * */
 function drawLine(c, x1, y1, x2, y2, color='#000', width = 1) {
    c.beginPath();
    c.moveTo(x1, y1);
    c.lineTo(x2, y2);
    c.closePath();
    c.lineWidth = width;
    c.strokeStyle = color;
    c.stroke();
}

function current() {
    var d = new Date();
    str = '';
    str += d.getFullYear() + '年'; //获取当前年份
    str += d.getMonth() + 1 + '月'; //获取当前月份（0——11）
    str += d.getDate() + '日';
    str += d.getHours() + '时';
    str += d.getMinutes() + '分';
    str += d.getSeconds() + '秒';
    return str;
}
