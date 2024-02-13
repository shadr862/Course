use master
go 


create database [Rm]
go

use [Rm]
go

create table Branch(
         B_name varchar(150),
		 B_city varchar(150),
		 Assets bigint,
		 constraint B_name primary key(B_name)

)

create table Department(
         Dept_name varchar(150),
		 constraint Dept_name primary key(Dept_name)	 

)

create table Employee(
         ID nchar(29),
		 Name varchar(120),
		 Salary Bigint,
		 B_name varchar(150),
         Dept_name varchar(150),
         
		 constraint ID primary key(ID),
		 foreign key(Dept_name) references Department(Dept_name),
		 constraint Em_fK foreign key( B_name) references Branch ( B_name)

)

create table Supervisor(
         
         Emp_ID nchar(29) primary key,
         Sup_ID nchar(29) foreign key references Employee,

	
		 constraint Sup_fK foreign key(Emp_ID) references Employee (ID)

)


create table Account(
          Ac_no varchar(150),
		  B_name varchar(150),
		  balance bigint,
		 constraint Ac_no primary key(Ac_no),
		 constraint AC_fK foreign key( B_name) references Branch ( B_name)

)

create table Customer(
         C_name varchar(150) primary key,
		 C_Address varchar(150),
		 C_city varchar(150),
)

create table Depositor(
         C_name varchar(150) foreign key references Customer,
		 Ac_no varchar(150)  foreign key references Account,
		 C_city Date,
		 Pho_no varchar(30),
)

create table Loan(
         L_no varchar(150),
		 B_name varchar(150)  foreign key references Branch,
		 Amt Bigint,
		 primary key (L_no),
)

create table Borrower(
        
		 C_name varchar(150),
		 L_no varchar(150) foreign key references Loan,
		 C_city Date,
		 Pho_no varchar(30),

		 foreign key (C_name) references Customer,
)


insert into Branch values 
('Savar','Dhaka','900000'),
('Ashulia','Dhaka','100000'),
('Uttara','Dhaka','85000'),
('Nawgone','Rajshahi','120000'),
('Bogura','Rajshahi','500000'),
('Sutrapur','Chittagong','80000'),
('Shagorika','Chittagong','70000'),
('Volagong','Shylet','70000')

select* from Branch

insert into Department values 
('Premises Department'),
('Secretary’s Department'),
('Training Establishments'),
('Management Services Department'),
('Central Records and Documentation Centre'),
('Department of Administration and Personnel'),
('Inspection Department'),
('Information Technology Department')

select* from Department

insert into Employee values
('101','Benit','7000000','Savar','Inspection Department'),
('102','Tylor','820000','Savar','Secretary’s Department'),
('103','Aurpa','60000','Ashulia','Management Services Department'),
('104','Kaniz','68900','Uttara','Management Services Department'),
('105','Prosonjit','78989','Sutrapur','Training Establishments'),
('106','Selim','50000','Shagorika','Inspection Department'),
('107','Jony','100000','Volagong','Department of Administration and Personnel'),
('108','Tom','1340000','Uttara','Inspection Department')

select* from Employee

insert into Supervisor values
('101','105'),
('102','106'),
('103','105'),
('107','106'),
('108','105'),
('104','106')

select* from Supervisor



insert into Account values 
('123456789','Savar','900000'),
('123456775','Ashulia','100000'),
('123456745','Uttara','85000'),
('123456725','Nawgone','120000'),
('123456709','Bogura','500000'),
('123456705','Sutrapur','80000'),
('123456767','Shagorika','70000'),
('123456748','Volagong','70000')

select* from Account


insert into Customer values 
('Riaz','98/34,Savar','Dhaka'),
('Mehadi','7/2,Ashulia','Dhaka'),
('Rupa','sec-7,Uttara','Dhaka'),
('Rafi','5/9,Nawgone','Rajshahi'),
('Roy','65/8,Bogura','Rajshahi'),
('Sadik','sec-2,Sutrapur','Chittagong'),
('Saddam','8/7/3,Shagorika','Chittagong'),
('Ahanaf','57/5,Volagong','Shylet')

select* from Customer

insert into Depositor values
('Riaz','123456789','2020-07-03','01783882221'),
('Mehadi','123456775','2020-09-01','01783082928'),
('Rupa','123456745','2021-05-11','01983082951'),
('Rafi','123456725','2021-08-23','01383082901'),
('Roy','123456709','2021-01-13','01713082929'),
('Sadik','123456705','2021-05-29','01813092927'),
('Saddam','123456767','2021-09-03','01415092921'),
('Ahanaf','123456748','2021-08-01','01915092920')

select* from Depositor

insert into Loan values 
('103456789','Savar','900000'),
('113456775','Ashulia','100000'),
('153456745','Uttara','85000'),
('173456725','Nawgone','120000'),
('193456709','Bogura','500000'),
('133456705','Sutrapur','80000'),
('199456767','Shagorika','70000'),
('127956748','Volagong','70000')

select* from Loan

insert into Borrower values
('Riaz','103456789','2020-07-03','01783082221'),
('Mehadi','113456775','2020-09-01','01713082928'),
('Rupa','153456745','2021-05-11','01985082951'),
('Rafi','173456725','2021-08-23','01389082901'),
('Roy','193456709','2021-01-13','01713682929'),
('Sadik','133456705','2021-05-29','01893092927'),
('Saddam','199456767','2021-09-03','01415992921'),
('Ahanaf','127956748','2021-08-01','01915392920')

select* from Borrower


--find all employee in 'Inspection Department' dept with salary > 70000

select name,Salary from Employee
where dept_name = 'Inspection Department' 
and Salary > 70000


--Find the names of all employee who have a higher salary than some employee in 'Inspection Department'.

select distinct T.name,T.Salary,T.Dept_name
from Employee as T, Employee as S
where T.Salary > S.Salary and S.Dept_name = 'Inspection Department'


--Find the names of all Customer whose name includes the substring “Sad”.

select C_name	
from Customer
where C_name like '%Sad%' 

--Find the Branch name and their length with their Account no and Balance which Branch name start with S or A

select B_name,len(B_name) as length,Ac_no,Balance from Account
where  B_name like '[SA]%'

--Find the Branch name and their length with their Account no and Balance which Branch name start with 'SA' and end with 'AR'

select B_name,len(B_name) as length,Ac_no,Balance from Account
where  B_name like 'SA%' and B_name like '%AR'

--Find the name,address,city,branch name,loan no who take the loan and show their Branch name by Descending order

select C.C_name,C.C_Address,C.C_city,B.L_no,L.B_Name 
from Customer as C,Borrower as B,Loan as L
where C.C_name=B.C_name and L.L_no=B.L_no 
order by L.B_name Desc

--Find the  customer name,Account no,Balance,Branch name who deposit in the bank and show their Branch name by Aescending order

select D.C_name,D.Ac_no,A.balance,A.B_name
from Account as A,Depositor as D
where A.Ac_no=D.Ac_no 
order by A.B_name  Asc

--Find the employee who work in  savar or uttra

(select name  from Employee where B_name='Savar')
union
(select name  from Employee where B_name='Uttara')

--Find the department name which employee work in savar and uttara

(select Dept_name  from Employee where B_name='Savar' )
intersect
(select Dept_name from Employee where B_name='Uttara')


--Find the department name which employee work in savar but not in uttara

(select Dept_name  from Employee where B_name='Savar' )
except
(select Dept_name from Employee where B_name='Uttara')

--Find the names and average salaries of all branches whose average salary is greater than 42000

select B_name, avg (Salary) as avg_salary
from Employee
group by B_name
having avg (Salary) > 42000;




--Find names of Employee with salary greater than that of some (at least one) employee in the 'Management Services Department'.

select name
from Employee
where Salary > some (select Salary from Employee where Dept_name = 'Management Services Department')


--find the employee name ,salay whose supervisor is selim and their department should not be 'Training Establishments'

select e.Name,e.Salary 
from Employee as e
where e.ID in(select s.Emp_ID from Supervisor as s where s.Sup_ID='106') and e.Dept_name <> 'Training Establishments'


--find the number of employee work each department in all branch

select dept_name, 
( select count(*) 
from Employee 
where Department.dept_name = Employee.dept_name)
as num_Emp
from Department;

-- both query return same output

select dept_name,count(ID) as no_of_employee
from Employee
group  by dept_name


--find the ID,name,  salary of the employee and covert the salary as monthly salary

select  ID,name,convert(float,Salary)/12 as monthly_salary from Employee