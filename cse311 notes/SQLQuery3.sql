use master
go 

use [Riaz Mehadi]
go


select *
from Instructor

select [name]
from Instructor
where [name] like '%vas%'

select name
from Instructor
where name like '%z%'

select len(dept_name) as length,dept_name,building,budget from Department

select len(dept_name) as length,dept_name,building,budget from Department
where  dept_name like '_______'

select len(dept_name) as length,dept_name,building,budget from Department
where  dept_name like '_______%'



select len(dept_name) as length,dept_name,building,budget from Department
where  dept_name like '[^bp]%' --bp as a char and should not be start with b or c

select len(dept_name) as length,dept_name,building,budget from Department
where  dept_name like '[bc]%' -- bc as a char and should be start with b or c

select len(dept_name) as length,dept_name,building,budget from Department
where  dept_name like 'bi%' -- bi as a string and should start with bi

select len(dept_name) as length,dept_name,building,budget from Department
where  dept_name like '%ci.' -- ci as a string and should end with ci.

select len(dept_name) as length,dept_name,building,budget from Department
where  dept_name like '%in%' -- in as a string and should start and end can be anything but shoud have to be bc


select len(dept_name) as length,dept_name,building,budget from Department order by dept_name Desc
select len(dept_name) as length,dept_name,building,budget from Department order by dept_name Asc

select len(dept_name) building,budget from Department order by building desc,budget asc

select * from Instructor where salary between 9000 and 100000

select name, course_id
from instructor, teaches
where (instructor.ID=teaches.ID ) and (dept_name= 'Biology');

(select course_id from section where Semester = 'Fall' and year = 2017)
union all
(select course_id from section where Semester = 'Spring' and year = 2018)

(select course_id from section where Semester = 'Fall' and year = 2017)
union 
(select course_id from section where Semester = 'Spring' and year = 2018)

(select course_id from section where Semester = 'Fall' and year = 2017)
intersect
(select course_id from section where Semester = 'Spring' and year = 2018)

(select course_id from section where Semester = 'Fall' and year = 2017)
except
(select course_id from section where Semester = 'Spring' and year = 2018)


(select course_id from section where Semester = 'Fall' and year = 2017)
intersect
(select course_id from section where Semester = 'Spring' and year = 2018)
except
(select course_id from section where Semester = 'Summer' and year = 2018)


insert into Department values('phar','NULL',null)
select* from Department

select dept_name
from Department
where budget is null

select sum(budget) as tot_bgt from Department
select max(budget) as max from Department
select min(budget) as min from Department
select avg(budget) as avg from Department

select count(budget) as count from Department
select count(dept_name) as count from Department
select count(building) as count from Department

select count (distinct ID)
from teaches
where semester = 'Spring' and year = 2018;

select distinct Instructor.name ,teaches.Course_id,teaches.ID
from teaches ,Instructor 
where (teaches.ID=Instructor.ID) and (semester = 'Spring' and year = 2018);

select capacity from Instructor,teaches,Section,Classroom

where teaches.ID=Instructor.ID and teaches.Course_id=Section.Course_id
and teaches.Sec_id=Section.Sec_id and teaches.Semester=Section.Semester 
and teaches.Year=Section.Year and Section.room_no=Classroom.room_no and Section.building=Classroom.building and Instructor.name='Brandt'

select * from teaches

select* from Section

select* from Classroom

select* from Instructor order by dept_name,salary

select dept_name, avg (salary) as avg_salary
from instructor
group by dept_name;

select dept_name,id, avg (salary) as avg_salary
from instructor
group by dept_name,id;