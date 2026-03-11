
CREATE TABLE Students
(
    student_id number(9) constraint student_id_pk primary key,
    first_name VARCHAR(20) not null,
    last_name VARCHAR(20) not null,
    email varchar(50) constraint email_uq unique,
    enrollment_year number(5)

);

create table courses(

    course_id number(4)  constraint course_id_pk primary key,
    course_name VARCHAR(30) not null,
    credits number(2) 

);

create table Enrollments (

    enrollment_id number(9),
    student_id number(9),
    CONSTRAINT enroll_std_fk FOREIGN key(student_id) references students(student_id),
    course_id number(4),
    CONSTRAINT enroll_courses_fk FOREIGN key(course_id) references courses(course_id),
    grade char

);

insert into courses 
values
    (1243, 'Inroduction to CS', 3),
    (1841, 'Introduction to DBMS', 3),
    (101, 'Islamic studies', 2);

insert into STUDENTS 
values
    (1,'Ahmed', 'Riyad' , 'a.riyad@std.psau.edu.sa', 2023),
    (2,'Mohammed', 'Khaled' , 'm.khaled@std.psau.edu.sa', 2022),
    (3,'Sajed', 'Radwan', 's.radwan@std.psau.edu.sa', 2025);


insert into enrollments 
values 
(1, 1, 1243, 'A' ),
(2, 2 , 1841, 'B' ),
(3, 3, 101, 'C');

update Students
set last_name = 'ghareeb'
where student_id = 1 ;

Update courses
set credits = 4
where course_name = 'Islamic studies';


alter table students
add phone_number varchar(15);

alter table students
drop column enrollment_year;

alter table students
add enrollment_year number(5);

-- I added the recrods agian:
update students
set enrollment_year = 2023
where student_id = 1;

update students
set enrollment_year = 2022
where student_id = 2;

update students
set enrollment_year = 2025
where student_id = 3;

select * from students;

select first_name , last_name , enrollment_year from students 
where enrollment_year >= 2023;

select course_name, credits from courses 
where credits = 3;

select first_name ||' '|| last_name as "Full Name", course_name 
from courses c join enrollments e on c.course_id = e.course_id 
join students s on e.student_id = s.student_id;

select course_id ,count(*) from enrollments
group by course_id;