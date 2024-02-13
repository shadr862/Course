use master
go 

create database [Riaz Mehadi]
go

use [Riaz Mehadi]
go
 

create table Department(
        dept_name varchar(150),
		building varchar(150),
		budget bigint,
		constraint dp_name primary key(dept_name)
		)


create table Instructor(
  ID varchar(150) primary key,
  name varchar(150),
  dept_name varchar(150),
  salary bigint,
  constraint ins_fK foreign key(dept_name) references Department (dept_name)

)

create table Student(
  ID varchar(150) primary key(ID),
  name varchar(150),
  dept_name varchar(150),
  tot_credt bigint,
  constraint sts_fK foreign key(dept_name) references Department 
  )

 create table Advisor(
        S_id varchar(150) primary key,
	    I_id varchar(150),
        foreign key (S_id) references Student(ID),
	    foreign key (I_id) references Instructor(ID)
	)

create table Course(
    Course_id varchar(150),
    titel varchar(150),
    dept_name varchar(150) constraint cou_fK foreign key(dept_name) references Department,
    credits bigint,
    primary key(Course_id),
	)

	
create table Prereq(
      course_id varchar(150),
	  prereq_id varchar(150),
	  primary key(course_id,prereq_id),
	  constraint pre_id foreign key (course_id) references Course,
	  foreign key (prereq_id) references Course(Course_id)

 )

create table Classroom
 (
    building nchar(150),
	room_no bigint,
	capacity bigint,
	primary key(building,room_no)
  
 )

 create table time_slot(
    time_slot_id nchar(150),
	day nchar(150),
	start_time varchar(150),
	end_time varchar(150),

	constraint tm_bg primary key(time_slot_id,day,start_time)
 )

 create table Section(
    Course_id varchar(150),
	Sec_id bigint,
	Semester varchar(150),
	Year nchar(150),
	building nchar(150),
	room_no bigint,
	time_slot_id nchar(150),
	day nchar(150),
	start_time varchar(150),
	
	primary key(Course_id,Sec_id,Semester,year),
    foreign key(course_id) references Course(Course_id),
	foreign key (time_slot_id,day,start_time) references time_slot,
	constraint cl_rom foreign key(building,room_no) references Classroom

 )

 create table takes(
    ID varchar(150),
	Course_id varchar(150),
	Sec_id bigint,
	Semester varchar(150),
	Year nchar(150),
	grade varchar(150),
	constraint pk_take primary key(ID,Course_id,Sec_id,Semester,year),
	constraint fk_take foreign key(ID) references Student(ID),
	foreign key(Course_id,Sec_id,Semester,year) references Section(Course_id,Sec_id,Semester,year)

 )
 
 
 
 create table teaches(
    ID varchar(150),
	Course_id varchar(150),
	Sec_id bigint,
	Semester varchar(150),
	Year nchar(150),
    primary key(ID,Course_id,Sec_id,Semester,year),
	foreign key(ID) references Instructor(ID),
    foreign key(Course_id,Sec_id,Semester,year) references Section(Course_id,Sec_id,Semester,year)

 )
 
 insert into Department values 
('Biology','Watson','90000'),
('Comp.Sci.','Taylor','100000'),
('Elec.Eng.','Taylor','85000'),
('Finance','Painter','120000'),
('History','Painter','50000'),
('Music','Packard','80000'),
('Physics','Watson','70000')

select* from Department

insert into Course values
('BIO-101','Intro. to Biology','Biology','4'),
('BIO-301','Genetics','Biology','4'),
('BIO-399','Computational Biology','Biology','3'),
('CS-101','Intro. to Computer Science','Comp.Sci.','4'),
('CS-190','Game Design','Comp.Sci.','4'),
('CS-315','Robotics','Comp.Sci.','3'),
('CS-319','Image Processing','Comp.Sci.','3'),
('CS-347','Database System Concepts','Comp.Sci.','3'),
('EE-181','Intro. to Digital Systems','Elec.Eng.','3'),
('FIN-201','Investment Banking','Finance','3'),
('HIS-351','World History','History','3'),
('MU-199','Music Video Production','Music','3'),
('PHY-101','Physical Principles','Physics','4')

select* from Course

insert into Instructor values
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

select* from Instructor

insert into Prereq values
('BIO-301','BIO-101'),
('BIO-399','BIO-101'),
('CS-190','CS-101'),
('CS-315','CS-101'),
('CS-319','CS-101'),
('CS-347','CS-101'),
('EE-181','PHY-101')

select* from Prereq

insert into Student values
('34222','Rafi','Physics','30'),
('16712','Hu','Finance','40'),
('32894','Said','History','50'),
('44556','Matz','Comp.Sci.','60'),
('94534','Zim','Elec.Eng.','70'),
('74576','Mrick','Biology','80'),
('17810','Krinivasan','Comp.Sci.','87'),
('54558','Jalifieri','History','93'),
('87882','Prandt','Comp.Sci.','89'),
('15905','Nozart','Music','100'),
('33465','old','Physics','120'),
('76454','Pingh','Finance','130')

select* from Student

insert into Advisor values
('34222','22222'),
('16712','12121'),
('32894','32343'),
('44556','45565'),
('94534','98345'),
('74576','76766'),
('17810','10101'),
('54558','58583'),
('87882','83821'),
('15905','15151'),
('33465','33456'),
('76454','76543')

select* from Advisor

insert into Classroom values
('Painter','514','40'),
('Packard','101','40'),
('Taylor','3128','40'),
('Watson','120','40'),
('Watson','100','40')

select* from Classroom

insert into time_slot values
('B','st','8:00','9:40'),
('B','ra','8:00','9:40'),
('B','mw','8:00','9:40'),
('H','st','8:00','9:40'),
('A','st','8:00','9:40'),
('A','mw','9:40','11:10'),
('A','mw','8:00','9:40'),
('A','ra','8:00','9:40'),
('C','st','8:00','9:40'),
('C','ra','8:00','9:40'),
('C','mw','8:00','9:40'),
('D','st','8:00','9:40'),
('D','ra','8:00','9:40'),
('E','st','8:00','9:40'),
('F','st','8:00','9:40')

select* from time_slot

insert into Section values
('BIO-101','1','Summer','2017','Painter','514','B','st','8:00'),
('BIO-301','1','Summer','2018','Painter','514','A','st','8:00'),
('CS-101','1','Fall','2017','Packard','101','H','st','8:00'),
('CS-101','1','Spring','2018','Packard','101','F','st','8:00'),
('CS-190','1','Spring','2017','Taylor','3128','E','st','8:00'),
('CS-190','2','Spring','2017','Taylor','3128','A','ra','8:00'),
('CS-315','1','Spring','2018','Watson','120','D','st','8:00'),
('CS-319','1','Spring','2018','Watson','100','B','ra','8:00'),
('CS-319','2','Spring','2018','Taylor','3128','C','st','8:00'),
('CS-347','1','Fall','2017','Taylor','3128','A','mw','8:00'),
('EE-181','1','Spring','2017','Taylor','3128','C','ra','8:00'),
('FIN-201','1','Spring','2018','Packard','101','B','mw','8:00'),
('HIS-351','1','Spring','2018','Painter','514','C','mw','8:00'),
('MU-199','1','Spring','2018','Packard','101','D','ra','8:00'),
('PHY-101','1','Fall','2017','Watson','100','A','mw','9:40')

select* from Section

insert into teaches values
('10101','CS-101','1','Fall','2017'),
('10101','CS-315','1','Spring','2018'),
('10101','CS-347','1','Fall','2017'),
('12121','FIN-201','1','Spring','2018'),
('15151','MU-199','1','Spring','2018'),
('22222','PHY-101','1','Fall','2017'),
('32343','HIS-351','1','Spring','2018'),
('45565','CS-101','1','Spring','2018'),
('45565','CS-319','1','Spring','2018'),
('76766','BIO-101','1','Summer','2017'),
('76766','BIO-301','1','Summer','2018'),
('83821','CS-190','1','Spring','2017'),
('83821','CS-190','2','Spring','2017'),
('83821','CS-319','2','Spring','2018'),
('98345','EE-181','1','Spring','2017')

select* from teaches

insert into takes values
('34222','CS-101','1','Fall','2017','3.47'),
('34222','CS-315','1','Spring','2018','3.47'),
('34222','CS-347','1','Fall','2017','3.47'),
('16712','FIN-201','1','Spring','2018','3.49'),
('32894','MU-199','1','Spring','2018','3.60'),
('44556','PHY-101','1','Fall','2017','3.97'),
('44556','HIS-351','1','Spring','2018','3.97'),
('76454','CS-101','1','Spring','2018','3.30'),
('76454','CS-319','1','Spring','2018','3.30'),
('76454','BIO-101','1','Summer','2017','3.30'),
('33465','BIO-301','1','Summer','2018','3.80'),
('33465','CS-190','1','Spring','2017','3.80'),
('33465','CS-190','2','Spring','2017','3.90'),
('15905','CS-319','2','Spring','2018','3.34'),
('15905','EE-181','1','Spring','2017','3.34')

select* from takes

