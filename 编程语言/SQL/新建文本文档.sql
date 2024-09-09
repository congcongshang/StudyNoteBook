select student.SId, student.Sname, t2.avgscore
from student, (select sc.SId, avg(sc.score) as avgscore from sc group by sc.SId) as t2
where student.SId = t2.SId and
    student.SId in (
        select t1.SId from (select * from sc where sc.score < 60) as t1
        group by t1.SId
        having count(*) >= 2
        )

学生(班级名称,学号,姓名,性别,年龄)
成绩(学号,课程名,成绩)

查询考试两门以上不及格的学生信息

测试