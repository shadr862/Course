use master
go 

use [Riaz Mehadi]
go



insert into Department values ('polic','PHQ',300)
select * from Department

delete from Department 
where dept_name='polic'

alter table Department add location varchar(100)
select * from Department

update Department set location='Dhaka'
select * from Department

update Department set location='Shylet' where dept_name='Biology'
select * from Department

alter table Department drop column location
select * from Department


select  dept_name from Instructor
select distinct dept_name from Instructor
select all dept_name from Instructor

select '437' as foo-- just show

select 'A' 'name' from Instructor
select 'A' as 'name' from Instructor
select 'A' as name from Instructor
select 'A'  name from Instructor
select 'A'  [name] from Instructor


select  ID,name,salary/12 as monthly_salary from Instructor

select  ID,name,convert(float,salary)/12 as monthly_salary from Instructor

select * from Instructor

select name from Instructor
where salary>70000 and dept_name='comp.sci.'


select * from Instructor,teaches
where Instructor.ID=teaches.ID and dept_name='comp.sci.'


select distinct T.name ,T.dept_name from Instructor as T,Instructor as S
where T.salary>S.salary and S.dept_name='comp.sci.'


select dept_name,avg(salary) as avg_salary,count(dept_name) as size
from Instructor
group by dept_name