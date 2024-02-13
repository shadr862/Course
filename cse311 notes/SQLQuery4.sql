use master
go 

use [Riaz Mehadi]
go


select dept_name, avg (salary) as avg_salary
from instructor
group by dept_name


select dept_name, avg (salary) as avg_salary
from instructor
group by dept_name
having avg (salary) > 42000;

-- and= intersect,or=union,

select distinct course_id
from section
where semester = 'Fall' and year= 2017 and 
course_id in (select course_id
from section
where semester = 'Spring' and year= 2018);

select distinct course_id
from section
where semester = 'Fall' and year= 2017 and 
course_id in('CS-101','CS-315','CS-319','CS-319','FIN-201','HIS-351')

select distinct course_id
from section
where semester = 'Fall' and year= 2017 and 
course_id not in('CS-101','CS-315','CS-319','CS-319','FIN-201','HIS-351')

select count (distinct s.ID)
from takes as s,teaches as i
where i.ID='10101' and i.Course_id=s.Course_id
and i.Sec_id=s.Sec_id and i.Semester=s.Semester and i.Year=s.Year


select distinct T.name
from instructor as T, instructor as S
where T.salary > S.salary and S.dept_name = 'Biology';


select name
from instructor
where salary > some (select salary
from instructor
where dept_name = 'Biology');


select name
from instructor
where salary > all (select salary
from instructor
where dept_name = 'Biology');


select dept_name, avg_salary
from ( select dept_name, avg (salary) as avg_salary
from instructor
group by dept_name) 
as dept_avg 
where avg_salary > 42000


select dept_name, avg (salary) as avg_salary
from instructor
group by dept_name
having avg (salary) > 42000;-- same before

select dept_name, avg_salary
from ( select dept_name, avg (salary) 
from instructor
group by dept_name) 
as dept_avg (dept_name, avg_salary)
where avg_salary > 42000


select dept_name, 
( select count(*) 
from instructor 
where department.dept_name = instructor.dept_name)
as num_instructors
from department;


select dept_name,count(id) as no_of_teacher
from Instructor
group  by dept_name

delete from instructor
where dept name in (select dept name
from department
where building = 'Watson');

delete from instructor
where salary < (select avg (salary) 
from instructor);
