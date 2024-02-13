use master
go 

create database [rm1]
go

use [rm1]
go

create table Department1(
        dept_name varchar(150),
		building varchar(150),
		budget bigint,
		constraint dp_name primary key(dept_name)
		)
create table Instructor1(
  ID varchar(150) primary key,
  name varchar(150),
  dept_name varchar(150),
  salary bigint,
  foreign key(dept_name) references Department1 (dept_name) ON UPDATE CASCADE ON DELETE CASCADE
  )

  insert into Department1 values 
('Biology','Watson','90000'),
('Comp.Sci.','Taylor','100000'),
('Elec.Eng.','Taylor','85000'),
('Finance','Painter','120000'),
('History','Painter','50000'),
('Music','Packard','80000'),
('Physics','Watson','70000')

insert into Instructor1 values
('22222','Einstein','Physics','95000'),
('12121','Wu','Finance','90000'),
('32343','El Said','History','60000'),
('45565','Katz','Comp.Sci.','75000'),
('98345','Kim','Elec.Eng.','80000'),
('76766','Crick','Biology','72000'),
('10101','Srinivasan','Comp.Sci.','65000'),
('58583','Califieri','History','62000'),
('83821','Brandt','Comp.Sci.','92000'),
('15151','Mozart','Music','40000'),
('33456','Gold','Physics','87000'),
('76543','Singh','Finance','80000')



select* from Department1
select* from Instructor1

Delete from Department1 
where dept_name='Biology'



Update Department1 
set dept_name='CSE'
where dept_name='Comp.Sci.'

select* from Department1

